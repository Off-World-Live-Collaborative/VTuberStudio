// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"

class FLoginWarningDebugText : public FTickableGameObject
{

public:

	static void Init();

	virtual void Tick(float DeltaTime) override;

	virtual TStatId GetStatId() const override;

	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Always; }

	virtual bool IsTickableInEditor() const override { return true; }
};
