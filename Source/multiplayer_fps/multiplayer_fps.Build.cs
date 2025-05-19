// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class multiplayer_fps : ModuleRules
{
	public multiplayer_fps(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
