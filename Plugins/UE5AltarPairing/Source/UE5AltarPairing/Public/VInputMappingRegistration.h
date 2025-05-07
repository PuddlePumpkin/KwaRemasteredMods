#pragma once
#include "CoreMinimal.h"
#include "EVInputMappings.h"
#include "VInputMappingRegistration.generated.h"

USTRUCT(BlueprintType)
struct FVInputMappingRegistration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVInputMappings InputMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UE5ALTARPAIRING_API FVInputMappingRegistration();
};

