﻿// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FXD_GraphEditor_Template_EditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual void StartNodeHelper();
	virtual TSharedPtr<struct FGraphEditor_ClassHelper_Template> GetHelper() { return NodeHelper; }

private:
	TSharedPtr<struct FGraphEditor_ClassHelper_Template> NodeHelper;
};
