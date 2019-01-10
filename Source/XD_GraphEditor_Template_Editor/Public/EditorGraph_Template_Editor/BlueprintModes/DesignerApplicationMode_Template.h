﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintApplicationModeTemplate.h"

/**
 * 
 */
class XD_GRAPHEDITOR_TEMPLATE_EDITOR_API FDesignerApplicationMode_Template : public FBlueprintApplicationModeTemplate
{
public:
	FDesignerApplicationMode_Template(TSharedPtr<class FGraphEditorToolkit_Template> GraphEditorToolkit);
	void RegisterTabFactories(TSharedPtr<FTabManager> InTabManager) override;
	void PreDeactivateMode() override;
	void PostActivateMode() override;


	static const FName DetailsTabId;
	static const FName GraphTabId;
};
