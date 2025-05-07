#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SteeringBehaviorContextConfiguration.h"
#include "SteeringBehavior.generated.h"

class USteeringBehaviorsComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteeringBehaviorContextConfiguration ContextConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    USteeringBehavior();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USteeringBehaviorsComponent* GetSteeringBehaviorsComponent() const;
    
};

