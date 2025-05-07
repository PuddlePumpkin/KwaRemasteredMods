using UnrealBuildTool;

public class Wwise : ModuleRules {
    public Wwise(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "AudioLinkCore",
            "AudioLinkEngine",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
