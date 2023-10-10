#pragma once

enum class ETwitchEventSubSubscriptionType : uint8;

struct FTwitchEventSubMessageSubscription
{
	FString Id;
};

struct FTwitchEventSubMessageEvent
{
	FString RawEvent;
};

struct FTwitchEventSubMessageSession
{
	FString SessionId;
	FString SessionStatus;
	int KeepAliveTimeoutSeconds;
	FString ReconnectURL;
	FString ConnectedAt; // TODO: timestamp
};

struct FTwitchEventSubMessage
{
	FTwitchEventSubMessage();
	FTwitchEventSubMessage(const FString& Message);

	FString MessageID;
	FString MessageType;
	FString MessageTimeStamp;

	FString SubscriptionType;
	FString SubscriptionVersion;
	
	FTwitchEventSubMessageSubscription Subscription;
	FTwitchEventSubMessageEvent Event;
	FTwitchEventSubMessageSession Session;

	ETwitchEventSubSubscriptionType GetMessageTypeEnum() const;

private:
	void ParseMessage(const FString& Msg);
	void ParseMetaData(const FJsonObject* MetaData);
	void ParsePayload(const FJsonObject* Payload);
};
