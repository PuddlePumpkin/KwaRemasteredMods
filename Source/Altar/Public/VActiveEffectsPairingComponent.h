#pragma once
#include "CoreMinimal.h"
#include "VActiveEffectsData.h"
#include "VActorPairingComponent.h"
#include "VActiveEffectsPairingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVActiveEffectsPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVActiveEffectsData> ActiveEffectList;
    
    UVActiveEffectsPairingComponent(const FObjectInitializer& ObjectInitializer);

};

