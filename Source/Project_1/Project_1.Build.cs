// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_1 : ModuleRules
{
	public Project_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
