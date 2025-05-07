#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VUsablePropItem.h"
#include "VPropItem.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVPropItem : public AActor, public IVUsablePropItem {
    GENERATED_BODY()
public:
    AVPropItem(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

