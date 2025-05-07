#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysColliderManager.generated.h"

class UNiPSysCollider;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysColliderManager : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPSysCollider* Collider;
    
    UNiPSysColliderManager();

};

