#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VInitializedPrePlacedActor.generated.h"

class AVActor;

UCLASS(Blueprintable)
class ALTAR_API UVInitializedPrePlacedActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVActor* Actor;
    
    UVInitializedPrePlacedActor();

};

