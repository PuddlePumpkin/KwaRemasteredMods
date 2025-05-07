#include "VAltarUserInterfaceSettings.h"

UVAltarUserInterfaceSettings::UVAltarUserInterfaceSettings() {
    this->LayersToApplyOn.AddDefaulted(3);
    this->UserInterfaceIconsTexturesRootPath = TEXT("/Game/Art/UI/Icons/Dynamic_Icons/menus/");
    this->UserInterfaceGameDataIconsTexturesRootPath = TEXT("/Game/Art/UI/Icons/Dynamic_Icons/");
    this->GamepadAxisDeadZone = 0.75f;
    this->ThumbstickPressedTreshold = 0.75f;
    this->SmallFontSizeDelta = 0;
    this->LargeFontSizeDelta = 0;
    this->FadeInDuration = 2.50f;
    this->FadeOutDuration = 2.50f;
    this->FadeInExtraDurationInterior = 1.00f;
    this->FadeInExtraDurationSeamless = 1.50f;
    this->FadeInExtraDurationFastTransition = 1.00f;
    this->FadeInExtraDurationPSOCompilation = 5.00f;
    this->FadeInDurationUntilUnfreeze = 0.50f;
    this->ChangeListNumber = TEXT("233194");
    this->FromMainCL = TEXT("230234");
    this->StreamName = TEXT("Test");
    this->ProjectMajor = TEXT("0");
    this->ProjectMinor = TEXT("1");
    this->UserInterfaceSpecificMappingContext.AddDefaulted(46);
}


