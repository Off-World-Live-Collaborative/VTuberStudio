#pragma once

#include "CoreMinimal.h"
#include "TwitchChatMessage.generated.h"

USTRUCT(BlueprintType)
struct OWLINTERACTIVESTREAMER_API FTwitchChatMessage
{
	GENERATED_BODY()

	FTwitchChatMessage();
	FTwitchChatMessage(const FString& Message);

	/*
	 * Author
	 */
	UPROPERTY(BlueprintReadOnly)
	FString Username;
	
	UPROPERTY(BlueprintReadOnly)
	FString Hostname;

	/*
	 * Message
	 */
	UPROPERTY(BlueprintReadOnly)
	FString Message;

	/*
	 * Channel
	 */
	UPROPERTY(BlueprintReadOnly)
	FString Channel;

	/*
	 * Command
	 */
	UPROPERTY(BlueprintReadOnly)
	FString Command;

	UPROPERTY(BlueprintReadOnly)
	bool bIsCapRequestEnabled = false;

	/*
	 * Badges
	 */
	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FString> Badges;

	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FString> BadgeInfo;

	/*
	 * Tags
	 */
	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FString> Tags;
	
private:
	void ParseMessage(const FString& Msg);
	void ParseTagsHelper(const FString& RawTags);
	void ParseSourceHelper(const FString& RawSources);
	void ParseCommandHelper(const FString& RawCommands);
	void ParseParameterHelper(const FString& RawParameter);
};
