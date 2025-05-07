using UnrealBuildTool;
using System.Collections.Generic;

public class AltarTarget : TargetRules
{
    public AltarTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        ExtraModuleNames.AddRange( new string[] {
            "Altar",
            "AltarQMP",
            "QMPUnrealIntegration"
        } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
