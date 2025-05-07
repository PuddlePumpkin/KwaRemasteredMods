using UnrealBuildTool;

public class Altar : ModuleRules {
    public Altar(ReadOnlyTargetRules Target) : base(Target) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AtmosphericToolRuntime",
            "MediaAssets",
            "MotionWarping",
            "Water",
            "AIModule",
            "AkAudio",
            "AltarBI",
            "AnimationBudgetAllocator",
            "BinkMediaPlayer",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "Foliage",
            "GameplayTags",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "ModelViewViewModel",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "SteeringBehaviors",
            "UE5AltarPairing",
            "UMG",
            "VActorStateMachine",
            "VCommonUIEnhancedInputNavigation",
            "MovieScene"
        });
    }
}
