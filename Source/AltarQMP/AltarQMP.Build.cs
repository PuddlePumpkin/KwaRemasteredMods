using UnrealBuildTool;

public class AltarQMP : ModuleRules {
    public AltarQMP(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Altar",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "QMPUnrealIntegration",
        });
    }
}
