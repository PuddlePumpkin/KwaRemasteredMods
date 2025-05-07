#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "VAltarButton.h"
#include "VLegacyHudWeaponIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudWeaponIcon : public UVAltarButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAmmoVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WeaponBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
public:
    UVLegacyHudWeaponIcon();

    UFUNCTION(BlueprintCallable)
    void SetWeaponTexture(UTexture2D* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponBrush(const FSlateBrush& Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetStatusInternal(int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStatus(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAmmoVisible(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAmmoCount(int32 Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponBrushUpdated(const FSlateBrush& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusUpdated(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsAmmoVisibleUpdated(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoCountUpdated(int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetWeaponBrush() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatusInternal() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAmmoVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCount() const;
    
};

