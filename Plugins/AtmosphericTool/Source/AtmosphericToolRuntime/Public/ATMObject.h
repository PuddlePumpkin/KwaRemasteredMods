#pragma once
#include "CoreMinimal.h"
#include "ATMModifiedObject.h"
#include "ATMObject.generated.h"

class UATMBlendingPolicy;
class UATMProperty;

USTRUCT(BlueprintType)
struct FATMObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FATMModifiedObject> ModifiedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMProperty*> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> PendingEmptyPropertyKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMBlendingPolicy* BlendingPolicy;
    
    ATMOSPHERICTOOLRUNTIME_API FATMObject();
};

