#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VAltarWidget.h"
#include "VCharacterCreationPage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVCharacterCreationPage : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterPreviewTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterPreviewSocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterPreviewSpringArmLength;
    
    UVCharacterCreationPage();

};

