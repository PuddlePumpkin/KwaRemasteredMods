#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VVFXBlueprint.h"
#include "VClairvoyanceVFXBlueprint.generated.h"

class UNavArea;
class UNavigationQueryFilter;
class USplineComponent;

UCLASS(Blueprintable)
class ALTAR_API AVClairvoyanceVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> ClairvoyanceVFXNavigationQueryFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> WaterNavAreaClass;
    
public:
    AVClairvoyanceVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(USplineComponent* SplineComp);
    
};

