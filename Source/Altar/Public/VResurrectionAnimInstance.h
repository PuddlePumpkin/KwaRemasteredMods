#pragma once
#include "CoreMinimal.h"
#include "ResurrectionData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VResurrectionAnimInstance.generated.h"

class UPhysicsAsset;
class UPhysicsHandleComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVResurrectionAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResurrectionData LayerData;
    
public:
    UVResurrectionAnimInstance();

};

