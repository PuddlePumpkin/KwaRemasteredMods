#pragma once
#include "CoreMinimal.h"
#include "ATMWrapperStore.generated.h"

class UATMWrapperFactory;

USTRUCT(BlueprintType)
struct FATMWrapperStore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMWrapperFactory*> Factories;
    
public:
    ATMOSPHERICTOOLRUNTIME_API FATMWrapperStore();
};

