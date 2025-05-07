using UnrealBuildTool;

public class QMPUnrealIntegration : ModuleRules {
    public QMPUnrealIntegration(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "UMG",
        });
    }
}
