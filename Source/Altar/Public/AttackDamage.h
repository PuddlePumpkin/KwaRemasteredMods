#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "AttackDamage.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FAttackDamage : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    FAttackDamage();
};

