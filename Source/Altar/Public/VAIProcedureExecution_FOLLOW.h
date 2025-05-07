#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VAIProcedureExecution_Base.h"
#include "VAIProcedureExecution_FOLLOW.generated.h"

class AActor;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ALTAR_API UVAIProcedureExecution_FOLLOW : public UVAIProcedureExecution_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationQueryFilterClass;
    
public:
    UVAIProcedureExecution_FOLLOW();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFollowDistance() const;
    
};

