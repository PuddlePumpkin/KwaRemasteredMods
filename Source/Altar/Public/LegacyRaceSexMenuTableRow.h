#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELegacyRaceSexMenuWidgetType.h"
#include "EModernCharacterCreationGenderRequirement.h"
#include "EModernRaceSexPage.h"
#include "LegacyRaceSexMenuSliderProperties.h"
#include "LegacyRaceSexMenuToggleProperties.h"
#include "ModernRaceSexMenuColorProperties.h"
#include "ModernRaceSexMenuEyebrowColorProperties.h"
#include "LegacyRaceSexMenuTableRow.generated.h"

USTRUCT(BlueprintType)
struct FLegacyRaceSexMenuTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuWidgetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernRaceSexPage Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WidgetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayWidgetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernCharacterCreationGenderRequirement GenderRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRaceSexMenuToggleProperties ToggleProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRaceSexMenuColorProperties ColorProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRaceSexMenuEyebrowColorProperties EyebrowColorProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRaceSexMenuSliderProperties SliderProperties;
    
    ALTAR_API FLegacyRaceSexMenuTableRow();
};

