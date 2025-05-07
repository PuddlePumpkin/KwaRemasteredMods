#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "VActorBehaviorMap.generated.h"

class UVActorBehaviorBase;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ALTAR_API UVActorBehaviorMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UVActorBehaviorBase*> TagToBehaviorMap;
    
public:
    UVActorBehaviorMap();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVActorBehaviorBase* GetBehaviorForTag(FGameplayTag Tag) const;
    
};

