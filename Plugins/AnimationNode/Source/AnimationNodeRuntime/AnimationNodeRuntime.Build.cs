using UnrealBuildTool;

public class AnimationNodeRuntime : ModuleRules {
    public AnimationNodeRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
            "PBIK",
            "RigVM",
        });
    }
}
