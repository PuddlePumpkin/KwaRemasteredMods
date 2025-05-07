#pragma once
#include "CoreMinimal.h"
#include "VAnimNotify_FootStep.h"
#include "VAnimNotify_PlayFootStep.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_PlayFootStep : public UVAnimNotify_FootStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FootstepEventOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerActor;
    
public:
    UVAnimNotify_PlayFootStep();

};

