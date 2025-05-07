#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "VFormPtr.h"
#include "LeveledObjectItem.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FLeveledObjectItem : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FLeveledObjectItem();
};

