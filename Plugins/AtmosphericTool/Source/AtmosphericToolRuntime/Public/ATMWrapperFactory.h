#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ATMWrapperFactory.generated.h"

class UATMAccessorMaterialEntry;
class UATMWrapAccessor;
class UATMWrapBlender;

UCLASS(Blueprintable)
class UATMWrapperFactory : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMWrapAccessor*> AccessorsReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapAccessor* AccessorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UATMAccessorMaterialEntry*> AccessorsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMWrapAccessor*> AccessorsNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapBlender* Blender;
    
public:
    UATMWrapperFactory();

};

