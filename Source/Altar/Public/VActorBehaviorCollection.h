#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VActorBehaviorCollection.generated.h"

class UVActorBehaviorBase;

UCLASS(Blueprintable)
class ALTAR_API UVActorBehaviorCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVActorBehaviorBase*> Behaviors;
    
    UVActorBehaviorCollection();

};

