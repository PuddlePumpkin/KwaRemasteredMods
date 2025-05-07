using UnrealBuildTool;
using System.Collections.Generic;

public class AltarEditorTarget : TargetRules
{
    public AltarEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        ExtraModuleNames.AddRange( new string[] {
            "Altar",
            "AltarQMP",
            "QMPUnrealIntegration"
        } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
