#pragma once
#include "CoreMinimal.h"
#include "VHorsePhysicsData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VPhysicsHorseAnimInstance.generated.h"

class AVPairedCreature;

UCLASS(Blueprintable, NonTransient)
class UVPhysicsHorseAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedCreature* Horse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorsePhysicsData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransformBoneAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReinsTransfromBoneAlpha;
    
    UVPhysicsHorseAnimInstance();

};

