#pragma once

class FOWLSpoutSender;
class UTextureRenderTarget2D;

struct RegisteredSpoutSenderName
{
	int64 Frame;
	FString Name;
	FOWLSpoutSender* Sender;
};

/**
 * Very hard to know whether there are overlaps
 * internally between spout sender names
 * This is a service which stores names next to
 * the last frame it was known at so that duplicates can be
 * varied (ie by adding a number to it)
 */
class OWLSPOUT_API FOWLSpoutSenderController
{
public:
	/* Removes a spout sender name -- must be called from game thread */
	static void Remove(FString UUID);
	/* Either returns the original name, or generates a unique name for this sender */
	static FString ValidateNameAndCreate(FString InName, FString UUID);
	static void Send(FString UUID, UTextureRenderTarget2D* RenderTarget, bool bFixGamma);
	/* Returns the spout sender for this particular name */
	static FOWLSpoutSender* GetSender(FString UUID);
	static void Shutdown();
	static void TickFrame();
private:
	static FString GetFirstFreeName(FString InName);
	static TMap<FString, RegisteredSpoutSenderName> SendersByUUID;
	static TMap<FString, FString> NameToUUID;
	static int64 FrameCount;
};
