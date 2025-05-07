#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

class UAkPortalComponent;

UCLASS()
class AKAUDIO_API AAkAcousticPortal : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkPortalComponent* Portal;
    
private:
    UPROPERTY()
    AkAcousticPortalState InitialState;
    
    UPROPERTY(Transient)
    bool bRequiresStateMigration;
    
public:
    AAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePortal();
    
    UFUNCTION(BlueprintCallable)
    void DisablePortal();
    
};

