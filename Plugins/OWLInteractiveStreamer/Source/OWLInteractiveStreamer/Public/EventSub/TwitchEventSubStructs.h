#pragma once

#include "TwitchEventSubStructs.generated.h"

struct FTwitchChatMessage;

USTRUCT(BlueprintType)
struct FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString UserId;
	
	UPROPERTY(BlueprintReadOnly)
	FString UserLogin;

	UPROPERTY(BlueprintReadOnly)
	FString UserName;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubSubscriptionDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadOnly)
	FString Tier;

	UPROPERTY(BlueprintReadOnly)
	bool bIsGifted;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubResubscriptionDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString Tier;
	
	UPROPERTY(BlueprintReadOnly)
	int CumulativeMonths;

	UPROPERTY(BlueprintReadOnly)
	int StreakMonths;

	UPROPERTY(BlueprintReadOnly)
	int DurationMonths;

	UPROPERTY(BlueprintReadOnly)
	FString Message; // TODO: include emote info
};

USTRUCT(BlueprintType)
struct FTwitchEventSubGiftDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString Tier;

	UPROPERTY(BlueprintReadOnly)
	int Total;

	UPROPERTY(BlueprintReadOnly)
	int CumulativeTotal;

	UPROPERTY(BlueprintReadOnly)
	bool bIsAnonymous;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubCheerDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	int Bits;

	UPROPERTY(BlueprintReadOnly)
	FString Message;

	UPROPERTY(BlueprintReadOnly)
	bool bIsAnonymous;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubRaidDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	int Viewers;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubChannelPointReward
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString RewardId;

	UPROPERTY(BlueprintReadOnly)
	FString Title;

	UPROPERTY(BlueprintReadOnly)
	int Cost;

	UPROPERTY(BlueprintReadOnly)
	FString Prompt;
};

USTRUCT(BlueprintType)
struct FTwitchEventSubRedeemChannelPointDetail : public FTwitchEventSubUserDetail
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString RedemptionId;

	UPROPERTY(BlueprintReadOnly)
	FString UserInput;

	UPROPERTY(BlueprintReadOnly)
	FString Status;

	UPROPERTY(BlueprintReadOnly)
	FTwitchEventSubChannelPointReward Reward;
};