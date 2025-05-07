#pragma once
#include "CoreMinimal.h"
#include "ShieldHandPoseSetup.h"
#include "VLayerCharacterAnimInstance.h"
#include "VShieldHandPoseCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVShieldHandPoseCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldHandPoseSetup HandPoseSetup;
    
    UVShieldHandPoseCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetupShieldHandPoseLayer(FShieldHandPoseSetup InHandPoseSetup);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldHandPoseActive() const;
    
};

