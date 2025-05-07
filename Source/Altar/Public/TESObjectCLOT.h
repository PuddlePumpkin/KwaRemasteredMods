#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectCLOT.generated.h"

class UTESBipedModelForm;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectCLOT : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESBipedModelForm* InheritedBipedModel;
    
    UTESObjectCLOT();

};

