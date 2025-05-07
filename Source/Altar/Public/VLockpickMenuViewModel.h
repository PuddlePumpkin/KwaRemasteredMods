#pragma once
#include "CoreMinimal.h"
#include "EAttemptSuccess.h"
#include "LegacyLockpickMenuProperties.h"
#include "LegacyLockpickMenuTumblerDefaultProperties.h"
#include "VViewModelBase.h"
#include "VLockpickMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLockpickMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttemptSuccess HasAutoAttemptWorked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyLockpickMenuProperties MenuProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyLockpickMenuTumblerDefaultProperties TumblerDefaultProperties;
    
public:
    UVLockpickMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetTumblerDefaultProperties(const FLegacyLockpickMenuTumblerDefaultProperties& NewTumblerDefaultProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuProperties(const FLegacyLockpickMenuProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetHasAutoAttemptWorked(EAttemptSuccess NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendTumblerPicked();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendComplete();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedClose();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedAutoAttempt();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendBrokeAPick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyLockpickMenuTumblerDefaultProperties GetTumblerDefaultProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyLockpickMenuProperties GetMenuProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttemptSuccess GetHasAutoAttemptWorked() const;
    
};

