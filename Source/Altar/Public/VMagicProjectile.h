#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReactToFreezeInterface.h"
#include "VTransformPairable.h"
#include "VMagicProjectile.generated.h"

class UVTESObjectRefComponent;
class UVTransformPairingComponent;

UCLASS(Blueprintable)
class ALTAR_API AVMagicProjectile : public AActor, public IReactToFreezeInterface, public IVTransformPairable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTransformPairingComponent* TransformPairingComponent;
    
    AVMagicProjectile(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

