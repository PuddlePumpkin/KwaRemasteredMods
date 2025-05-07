#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_ProceduralInteriorDressingToolRuntime.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROCEDURALINTERIORDRESSINGTOOLRUNTIME_API UBFL_ProceduralInteriorDressingToolRuntime : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFL_ProceduralInteriorDressingToolRuntime();

private:
    UFUNCTION(BlueprintCallable)
    static void RemoveLandscapeGrassExclusionBox(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void AddLandscapeGrassExclusionBox(AActor* Owner, const FBox& BoxToRemove);
    
};

