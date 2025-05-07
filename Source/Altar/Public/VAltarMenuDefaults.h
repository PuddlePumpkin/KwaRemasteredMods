#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VAltarMenuDefaults.generated.h"

class UVAltarMenu;

USTRUCT(BlueprintType)
struct ALTAR_API FVAltarMenuDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVAltarMenu> DefaultCreatedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
    FVAltarMenuDefaults();
};

