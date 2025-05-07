#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AltarAnimationFunctionLibrary.generated.h"

class UAnimSequence;
class UBlendSpace;

UCLASS(Blueprintable)
class UAltarAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAltarAnimationFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* GetMostRelevantAnimationForBlendspaceBlendValues(UBlendSpace* BlendspaceAsset, FVector BlendValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesBlendspaceHaveAnimationForBlendValue(UBlendSpace* BlendspaceAsset, FVector BlendValues);
    
};

