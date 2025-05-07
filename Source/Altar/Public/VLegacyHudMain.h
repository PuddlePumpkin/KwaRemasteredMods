#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.h"
#include "VAltarMenu.h"
#include "VLegacyHudMain.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudMain : public UVAltarMenu {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegacyHudMainButtonClicked);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnStatusBarClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnWeaponIconClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnMagicIconClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnCompassClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnCodexClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnTabLeftClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyHudMainButtonClicked OnTabRightClicked;
    
    UVLegacyHudMain();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(EHUDVisibility Flag, bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForcePlayerMenuPageUpdated(int32 Index);
    
};

