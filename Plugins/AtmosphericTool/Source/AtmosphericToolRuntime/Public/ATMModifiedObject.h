#pragma once
#include "CoreMinimal.h"
#include "ATMModifiedObject.generated.h"

class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct FATMModifiedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* UnrealObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> DefaultPropertyRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> AssignedMaterials;
    
    ATMOSPHERICTOOLRUNTIME_API FATMModifiedObject();
};

