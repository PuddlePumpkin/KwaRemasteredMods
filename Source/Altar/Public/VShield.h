#pragma once
#include "CoreMinimal.h"
#include "VWeapon.h"
#include "VShield.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVShield : public AVWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainStaticMeshComponent;
    
    AVShield(const FObjectInitializer& ObjectInitializer);

};

