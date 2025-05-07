#pragma once
#include "CoreMinimal.h"
#include "VAnimNotify_FootStep.h"
#include "VAnimNotify_FootStepVFX.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_FootStepVFX : public UVAnimNotify_FootStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerActor;
    
public:
    UVAnimNotify_FootStepVFX();

};

