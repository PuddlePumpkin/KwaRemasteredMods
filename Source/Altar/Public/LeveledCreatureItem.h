#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "VFormPtr.h"
#include "LeveledCreatureItem.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FLeveledCreatureItem : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FLeveledCreatureItem();
};

