#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EHUDVisibility.h"
#include "VUIStateSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVUIStateSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHUDVisbilityChanged, EHUDVisibility, Flag, bool, bAdded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDGlobalVisbilityChanged, bool, bGloballyVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDVisbilityChanged OnHUDVisbilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDGlobalVisbilityChanged OnHUDGlobalVisbilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDVisibility HUDVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInDialog;
    
public:
    UVUIStateSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetGlobalVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    bool HUDVisibilityContains(EHUDVisibility Flag);
    
    UFUNCTION(BlueprintCallable)
    EHUDVisibility GetHUDVisibilityMask();
    
    UFUNCTION(BlueprintCallable)
    bool GetGlobalVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool AddOrRemoveHUDVisibilityFlag(EHUDVisibility Flag, bool bAdd);
    
};

