#pragma once
#include "CoreMinimal.h"
#include "LegacyAudioSettings.h"
#include "OnAudioMenuButtonClickedDelegate.h"
#include "VAltarMenu.h"
#include "VLegacyAudioMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyAudioMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioMenuButtonClicked OnDefaultClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioMenuButtonClicked OnReturnClicked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyAudioSettings Settings;
    
public:
    UVLegacyAudioMenu();

    UFUNCTION(BlueprintCallable)
    void TriggerOnReturnClicked();
    
    UFUNCTION(BlueprintCallable)
    void TriggerOnDefaultClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FLegacyAudioSettings& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFootVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectVolume(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyAudioSettings GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFootVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectVolume() const;
    
};

