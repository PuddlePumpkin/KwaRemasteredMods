#pragma once
#include "CoreMinimal.h"
#include "VActorPairingComponent.h"
#include "VParticleEffectPairingComponent.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVParticleEffectPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UNiagaraSystem>> VisualEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesAutoplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPendingForDestruction;
    
public:
    UVParticleEffectPairingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryToDestroyActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerVFX(const FString& SequenceName);
    
    UFUNCTION(BlueprintCallable)
    void StopVFX(bool bDoesStopImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeDestroyedToTrue();
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeDestroyed(bool bInCanBeDestroyed);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoplay(bool bInDoesAutoplay);
    
    UFUNCTION(BlueprintCallable)
    void OrderActorDestruction(bool bDoesStopEmitting);
    
    UFUNCTION(BlueprintCallable)
    void InitializeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraComponent* GetNiagaraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachVFX(const FString& VisualEffectKey, UNiagaraSystem* VisualEffect);
    
};

