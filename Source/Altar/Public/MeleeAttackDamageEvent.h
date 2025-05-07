#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DamageEvents.h"
#include "MeleeAttackDamageEvent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FMeleeAttackDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IncidencePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitPrimitive;
    
    ALTAR_API FMeleeAttackDamageEvent();
};

