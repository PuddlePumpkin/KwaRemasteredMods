#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "VUsablePropItem.generated.h"

class AVPairedPawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UVUsablePropItem : public UInterface {
    GENERATED_BODY()
};

class IVUsablePropItem : public IInterface {
    GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachedToPawnAsProp(AVPairedPawn* PawnUsingThisItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetOffsetWhenUsedAsProp(AVPairedPawn* PawnUsingThisItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetAttachSocketName(AVPairedPawn* PawnUsingThisItem) const;

};

