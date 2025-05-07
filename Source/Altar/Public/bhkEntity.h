#pragma once
#include "CoreMinimal.h"
#include "bhkWorldObject.h"
#include "bhkEntity.generated.h"

class UbhkEntityCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkEntity : public UbhkWorldObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkEntityCInfo* EntityInfo;
    
    UbhkEntity();

};

