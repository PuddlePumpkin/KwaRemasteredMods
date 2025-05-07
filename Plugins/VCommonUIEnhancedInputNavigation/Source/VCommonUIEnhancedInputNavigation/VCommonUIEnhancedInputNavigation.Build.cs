using UnrealBuildTool;

public class VCommonUIEnhancedInputNavigation : ModuleRules {
    public VCommonUIEnhancedInputNavigation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "InputCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
