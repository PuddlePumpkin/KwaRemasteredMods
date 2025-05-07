#pragma once
#include "CoreMinimal.h"
#include "ACTOR_BASE_DATA.h"
#include "TESBaseFormComponent.h"
#include "TESActorBaseData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESActorBaseData : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FACTOR_BASE_DATA ActorData;
    
    UTESActorBaseData();

};

