#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VAIHelpersFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API UVAIHelpersFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAIHelpersFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SortActorsByGameTime(TArray<AActor*> InActors, TArray<AActor*>& SortedActors);
    
};

