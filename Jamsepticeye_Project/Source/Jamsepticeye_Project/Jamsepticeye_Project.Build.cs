// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Jamsepticeye_Project : ModuleRules
{
	public Jamsepticeye_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
