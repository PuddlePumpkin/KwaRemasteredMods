#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "VAnimNotifyState_SyncAnim.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_SyncAnim : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PropToAnimateClass;
    
public:
    UVAnimNotifyState_SyncAnim();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SyncAnimation(AActor* OwnerActor, float StartAnimTime) const;
    
};

