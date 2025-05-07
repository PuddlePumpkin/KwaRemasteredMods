#pragma once
#include "CoreMinimal.h"
#include "SocketEquipmentStatus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSocketEquipmentStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EquippedItem;
    
    ALTAR_API FSocketEquipmentStatus();
};

