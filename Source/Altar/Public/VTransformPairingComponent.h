#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VActorPairingComponent.h"
#include "VTransformPairingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVTransformPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapOwnerToLatestTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReversePairedSocketName;
    
    UVTransformPairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLatestPairedTransform() const;
    
};

