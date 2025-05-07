#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EModernSettingWidgetSubType.h"
#include "EModernSettingWidgetType.h"
#include "ModernSettingButtonProperties.h"
#include "ModernSettingComboBoxProperties.h"
#include "ModernSettingCustomProperties.h"
#include "ModernSettingPresetProperties.h"
#include "ModernSettingSliderProperties.h"
#include "ModernSettingStepProperties.h"
#include "Templates/SubclassOf.h"
#include "ModernSettingTableRow.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FModernSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DescriptionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DescriptionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernSettingWidgetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingButtonProperties ButtonProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingStepProperties StepProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingSliderProperties SliderProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingComboBoxProperties ComboBoxProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingPresetProperties PresetProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingCustomProperties CustomProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesNeedAutoRevertPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHiddenInUI;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernSettingWidgetSubType SubType;
    
    ALTAR_API FModernSettingTableRow();
};

