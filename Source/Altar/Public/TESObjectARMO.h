#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectARMO.generated.h"

class UTESBipedModelForm;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectARMO : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESBipedModelForm* InheritedBipedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShield;
    
    UTESObjectARMO();

};

