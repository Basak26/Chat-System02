// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChatSystem02 : ModuleRules
{
	public ChatSystem02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
