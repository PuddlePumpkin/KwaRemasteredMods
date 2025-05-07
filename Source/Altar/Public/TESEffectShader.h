#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVBodyTextureEffectColors.h"
#include "EVPriorityTypeOnPawn.h"
#include "StatusEffectAnimationSettings.h"
#include "TESForm.h"
#include "Templates/SubclassOf.h"
#include "TESEffectShader.generated.h"

class AVStatusEffectVFXBlueprint;
class UMaterialInterface;

UCLASS(Blueprintable)
class ALTAR_API UTESEffectShader : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVStatusEffectVFXBlueprint> StatusEffectVFXBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectAnimationSettings AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> DefaultVFXColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVBodyTextureEffectColors> ColorUsages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSwitchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVPriorityTypeOnPawn PriorityTypeOnPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighPriorityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPresentOnWeapons;
    
    UTESEffectShader();

};

