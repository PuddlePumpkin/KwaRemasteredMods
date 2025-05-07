#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "VGameplayTagOverlapComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVGameplayTagOverlapComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    UVGameplayTagOverlapComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlap(const AActor* OverlappedActor, const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(const AActor* OverlappedActor, const AActor* OtherActor);
    
};

