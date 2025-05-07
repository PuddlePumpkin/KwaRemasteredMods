#pragma once
#include "CoreMinimal.h"
#include "VActorPairingComponent.h"
#include "VAnimationObjectPairingComponent.generated.h"

class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAnimationObjectPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreUnsupportedAnimationsSilently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenAnimationSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CloseAnimationSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAnimSequence*> AnimationSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOptimizations;
    
    UVAnimationObjectPairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAnimActivable(USkeletalMeshComponent* SkeletalMeshComponent, const FString& AnimationName, float PosRatio, bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimActivable(USkeletalMeshComponent* SkeletalMeshComponent, const FString& AnimationName);
    
};

