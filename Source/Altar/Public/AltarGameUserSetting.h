#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "EnhancedActionKeyMapping.h"
#include "InputCoreTypes.h"
#include "EPerformanceMode.h"
#include "ERebindSaveSlot.h"
#include "ModernSettingCommand.h"
#include "VAltarRebindMap.h"
#include "AltarGameUserSetting.generated.h"

class UAltarGameUserSetting;
class UInputAction;
class UInputMappingContext;
class UVAltarGraphicsSettingManager;
class UVModernSettingPageTable;

UCLASS(Blueprintable, Config=AltarGameUserSetting)
class ALTAR_API UAltarGameUserSetting : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerformanceMode PerformanceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> SavedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DefaultSavedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SettingsPlatformLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVAltarGraphicsSettingManager* GraphicsSettingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVAltarRebindMap> SavedRebind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FVAltarRebindMap> DefaultSavedRebind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnboardingBrighnessSettingsDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnboardingGameplaySettingsDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnboardingSoundSettingsDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEULAAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDoFirstTimeAutoDetect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnhancedActionKeyMapping EmptyActionKeyMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString EmptyReturnString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKey EmptyKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVModernSettingPageTable* SettingPageTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BNetPersistentUserId;
    
public:
    UAltarGameUserSetting();

    UFUNCTION(BlueprintCallable)
    void ValidateOnboardingSoundSettings();
    
    UFUNCTION(BlueprintCallable)
    void ValidateOnboardingGameplaySettings();
    
    UFUNCTION(BlueprintCallable)
    void ValidateOnboardingBrighnessSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetBindingsToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnboardingSettingsDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEULAAccepted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVModernSettingPageTable* GetSettingPageTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetSavedSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSavedKeyForBind(UInputMappingContext* MappingContext, UInputAction* InputAction, ERebindSaveSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOrAddValueFromSavedSettings(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnhancedActionKeyMapping GetOrAddRebindFromSaved(UInputMappingContext* MappingContext, UInputAction* InputAction, ERebindSaveSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAltarGameUserSetting* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetDefaultSavedSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FVAltarRebindMap> GetDefaultSavedRebind() const;
    
    UFUNCTION(BlueprintCallable)
    void DoAutoDetect(bool bForceSync);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAltarRebind();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAltarCVARSettings(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateSettingsToSave(const FModernSettingCommand& Settings);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateRebindToSave(UInputMappingContext* MappingContext, UInputAction* InputAction, const FKey& Key, ERebindSaveSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void AcceptEULA();
    
};

