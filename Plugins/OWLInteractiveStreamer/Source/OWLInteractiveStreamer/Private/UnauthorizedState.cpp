#include "UnauthorizedState.h"

#include "IWebSocket.h"
#include "OWLInteractiveStreamer.h"
#include "TwitchChatConnectionManager.h"
#include "TwitchChatMessage.h"

void UnauthorizedState::EnterState(FiniteStateMachine* StateMachine)
{
	// TODO: use dynamic_cast?? with RTTI??
	FSM = static_cast<ATwitchChatConnectionManager*>(StateMachine);
	
	FPlatformProcess::LaunchURL(TEXT("https://collaborative.offworld.live"), NULL, NULL);
	 
	UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("WebSocket Client Connected! Waiting on user's authorization token input..."));
}

void UnauthorizedState::TickState(float DeltaSeconds)
{
	if (bAuthSent || FSM->OAuthToken.IsEmpty() || FSM->Channel.IsEmpty() || FSM->Username.IsEmpty()) return;
	
	FSM->WebSocket->Send(TEXT("CAP REQ :twitch.tv/membership twitch.tv/tags twitch.tv/commands"));
	FSM->WebSocket->Send(FString::Printf(TEXT("PASS oauth:%s"), *FSM->OAuthToken));
	FSM->WebSocket->Send(FString::Printf(TEXT("NICK %s"), *FSM->Username));
	FSM->WebSocket->Send(FString::Printf(TEXT("JOIN #%s"), *FSM->Channel));
	bAuthSent = true;
}

void UnauthorizedState::OnMessage(const FString& Message)
{
	// Parse Message
	FTwitchChatMessage ChatMessage(Message);

	if (ChatMessage.Command == "001")
	{
		UE_LOG(LogOWLInteractiveStreamer, Log, TEXT("Authorized successfully! You (%s) are now conencted to %s's Twitch Chat! :)"), *ChatMessage.Username, *FSM->Channel);
		FSM->SetState(Authorized);
	}
}

void UnauthorizedState::ExitState()
{	
	// Clean up (unnecessary? Should not re-enter this state)
	FSM = nullptr;
	bAuthSent = false;
}
