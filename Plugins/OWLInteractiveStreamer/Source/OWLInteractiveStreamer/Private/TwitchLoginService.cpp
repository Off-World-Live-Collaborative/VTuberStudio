// Fill out your copyright notice in the Description page of Project Settings.


#include "TwitchLoginService.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpResponse.h"
#include "HttpModule.h"

UTwitchLoginService::UTwitchLoginService(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UTwitchLoginService* UTwitchLoginService::LoginToTwitch()
{
	UTwitchLoginService* service = NewObject<UTwitchLoginService>();
	//service->WorldContextObject = _WorldContextObject;
	return service;
}

void UTwitchLoginService::Activate()
{
	FHttpRequestRef request = FHttpModule::Get().CreateRequest();
	request->SetVerb(TEXT("GET"));
	request->SetURL(TEXT("https://api.twitch.tv/helix/users?login="));
	request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	request->SetHeader(TEXT("Authorization"), TEXT("Bearer 5ik74mrjkg9lia22duixhnr0qu07rh"));
	request->SetHeader(TEXT("Client-Id"), TEXT("c27ufnb754plcjr10uez68huahputt"));

	request->OnProcessRequestComplete().BindUObject(this, &UTwitchLoginService::HandleLoginRequest);
	request->ProcessRequest();
}

void UTwitchLoginService::HandleLoginRequest(FHttpRequestPtr request, FHttpResponsePtr response, bool isSuccessful)
{

}