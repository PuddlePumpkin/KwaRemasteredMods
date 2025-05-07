#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VAudioTriggerBox.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ALTAR_API AVAudioTriggerBox : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    AVAudioTriggerBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ExitBox(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EnterBox(AActor* OverlappedActor, AActor* OtherActor);
    
};

