#pragma once
#include "CoreMinimal.h"
#include "ENiPSysModifierOrder.h"
#include "NiObject.h"
#include "NifString.h"
#include "NiPSysModifier.generated.h"

class UNiParticleSystem;

UCLASS(Blueprintable)
class UNiPSysModifier : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiPSysModifierOrder Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiParticleSystem* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UNiPSysModifier();

};

