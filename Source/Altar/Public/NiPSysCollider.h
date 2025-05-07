#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiPSysCollider.generated.h"

class UNiAvObject;
class UNiPSysCollider;
class UNiPSysColliderManager;
class UNiPSysSpawnModifier;

UCLASS(Blueprintable)
class UNiPSysCollider : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnOnCollide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DieOnCollide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysSpawnModifier* SpawnModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysColliderManager* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysCollider* NextCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* ColliderObject;
    
    UNiPSysCollider();

};

