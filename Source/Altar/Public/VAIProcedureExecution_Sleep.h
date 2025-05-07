#pragma once
#include "CoreMinimal.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_Sleep.generated.h"

class AActor;
class UVAIProcedureExecution_TRAVEL;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_Sleep : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_TRAVEL* InternalTravelProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetBedActor;
    
public:
    UVAIProcedureExecution_Sleep();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAIProcedureExecution_TRAVEL* GetInternalProcedure() const;
    
};

