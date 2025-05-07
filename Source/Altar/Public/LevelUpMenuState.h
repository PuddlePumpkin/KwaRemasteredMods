#pragma once
#include "CoreMinimal.h"
#include "EVAttribute.h"
#include "LevelUpMenuState.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpMenuState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberCoins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVAttribute> SelectedAttributes;
    
    ALTAR_API FLevelUpMenuState();
};

