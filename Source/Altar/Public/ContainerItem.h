#pragma once
#include "CoreMinimal.h"
#include "VFormPtr.h"
#include "ContainerItem.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FContainerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FContainerItem();
};

