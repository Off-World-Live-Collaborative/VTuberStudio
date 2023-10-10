#include "Chat/TwitchChatMessage.h"

#include "OWLInteractiveStreamer.h"

FTwitchChatMessage::FTwitchChatMessage() {}
FTwitchChatMessage::FTwitchChatMessage(const FString& Message)
{
	ParseMessage(Message);
}

void FTwitchChatMessage::ParseMessage(const FString& Msg)
{
	FString rawTags, rawSource, rawCommand, rawParameters;
	int index = 0;
	
	// Check if Message contains 'Tags'
	if (Msg[index] == '@')
	{
		++index;
		int endIndex = INDEX_NONE;
		if (Msg.FindChar(' ', endIndex))
		{
			rawTags = Msg.Mid(index, endIndex-index);
			index = endIndex + 1;
		}
	}

	// Check if Message contains 'Source' component
	if (Msg[index] == ':')
	{
		++index;
		const int endIndex = Msg.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, index);
		rawSource = Msg.Mid(index, endIndex-index);
		index = endIndex + 1;
	}

	// Check if Message contains 'Parameters'
	bool bHasParameters = true;
	int endIndex = Msg.Find(":", ESearchCase::IgnoreCase, ESearchDir::FromStart, index);
	if (endIndex == INDEX_NONE)
	{
		bHasParameters = false;
		endIndex = Msg.Len();
	}

	// Parse 'Command'
	rawCommand = Msg.Mid(index, endIndex-index);

	if (bHasParameters)
	{
		index = endIndex + 1;
		rawParameters = Msg.Mid(index);
	}

	if (rawTags.Len() > 0) ParseTagsHelper(rawTags);
	if (rawSource.Len() > 0) ParseSourceHelper(rawSource);
	if (rawCommand.Len() > 0) ParseCommandHelper(rawCommand);
	ParseParameterHelper(rawParameters);
}

void FTwitchChatMessage::ParseTagsHelper(const FString& RawTags)
{
	TArray<FString> splits;
	RawTags.ParseIntoArray(splits, TEXT(";"));
	
	for (const auto &tag : splits)
	{
		FString tagName, tagValue;
		const bool bIsSplit = tag.Split(TEXT("="), &tagName, &tagValue);

		if (!bIsSplit || tagName.IsEmpty() || tagValue.IsEmpty()) continue;

		if (tagName == "badge" || tagName == "badge-info")
		{
			if (!tagValue.IsEmpty())
			{
				TArray<FString> badges;
				tagValue.ParseIntoArray(badges, TEXT(","));
				const bool bIsBadge = tagName == "badge";
				for (const auto &badge : badges)
				{
					FString badgeName, badgeVersion;
					const bool bIsBadgeSplit = badge.Split(TEXT("/"), &badgeName, &badgeVersion);

					if (!bIsBadgeSplit || badgeName.IsEmpty() || badgeVersion.IsEmpty()) continue;

					bIsBadge ? this->Badges.Add(badgeName, badgeVersion) :
							   this->BadgeInfo.Add(badgeName, badgeVersion);
				}
			}
		}
		else if (tagName == "emotes")
		{
			// TODO: process emotes
		}
		else if (tagName == "emote-sets")
		{
			// TODO: process emote sets
		}
		else
		{
			this->Tags.Add(tagName, tagValue);
		}
	}
}

void FTwitchChatMessage::ParseSourceHelper(const FString& RawSources)
{
	FString username, hostname;
	if (RawSources.Split(TEXT("!"), &username, &hostname))
	{
		this->Username = username;
		this->Hostname = hostname.IsEmpty() ? username : hostname;
	}
}

void FTwitchChatMessage::ParseCommandHelper(const FString& RawCommands)
{
	FString commandName, commandValue;
	const bool bIsSplit = RawCommands.Split(TEXT(" "), &commandName, &commandValue);

	if (!bIsSplit || commandName.IsEmpty()) return;

	if (commandName == "JOIN" ||
		commandName == "PART" ||
		commandName == "NOTICE" ||
		commandName == "CLEARCHAT" ||
		commandName == "HOSTTARGET" ||
		commandName == "PRIVMSG")
	{
		this->Command = commandName;
		this->Channel = commandValue;
	}
	else if (commandName == "PING")
	{
		this->Command = commandName;
	}
	else if (commandName == "CAP")
	{
		this->Command = commandName;
		this->bIsCapRequestEnabled = commandValue.Contains(" ACK");
	}
	else if (commandName == "GLOBALUSERSTATE")
	{
		this->Command = commandName;
	}
	else if (commandName == "USERSTATE" || commandName == "ROOMSTATE")
	{
		this->Command = commandName;
		this->Channel = commandValue;
	}
	else if (commandName == "RECONNECT")
	{
		UE_LOG(LogOWLInteractiveStreamer, Warning, TEXT("The Twitch IRC server is about to terminate the connection for maintenance."))
		this->Command = commandName;
	}
	else if (commandName == "001")  // Authorization successful!
	{
		this->Command = commandName;
		this->Channel = commandValue;
	}
}

void FTwitchChatMessage::ParseParameterHelper(const FString& RawParameter)
{
	// TODO: process rawParameters for commands
	this->Message = RawParameter;
}