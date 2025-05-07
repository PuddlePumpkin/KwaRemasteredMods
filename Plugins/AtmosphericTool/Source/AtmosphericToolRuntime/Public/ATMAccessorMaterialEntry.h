#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ATMAccessorMaterialEntry.generated.h"

class UATMWrapAccessor;

UCLASS(Blueprintable)
class UATMAccessorMaterialEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMWrapAccessor*> AccessorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapAccessor* MaterialSwitcher;
    
    UATMAccessorMaterialEntry();

};

