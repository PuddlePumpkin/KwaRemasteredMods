#pragma once
#include "CoreMinimal.h"
#include "VAltarButton.h"
#include "VLegacyHudStatusBars.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudStatusBars : public UVAltarButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagickaProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatigueProgress;
    
public:
    UVLegacyHudStatusBars();

    UFUNCTION(BlueprintCallable)
    void SetMagickaProgress(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthProgress(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFatigueProgress(float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagickaProgressUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthProgressUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFatigueProgressUpdated(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagickaProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFatigueProgress() const;
    
};

