#pragma once
#include "CoreMinimal.h"
#include "ELegacyLockpickMenuHandleType.h"
#include "ELegacyLockpickMenuPickMovement.h"
#include "VAltarWidget.h"
#include "VLegacyLockpickMenuPick.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyLockpickMenuPick : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickAction, int32, TumblerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickAction OnTumble;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickAction OnSolve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTumbler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TumblerPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovementDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyLockpickMenuHandleType HandleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
public:
    UVLegacyLockpickMenuPick();

    UFUNCTION(BlueprintCallable)
    void SetTumblerPositions(const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMovementDisabled(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBroken(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHandleType(const ELegacyLockpickMenuHandleType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadZone(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTumbler(const int32 Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTumbleAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsBrokenUpdated(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleTypeUpdated(const ELegacyLockpickMenuHandleType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveTumblerUpdated(const int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void MovePick(const ELegacyLockpickMenuPickMovement Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetTumblerPositions() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousTumblerPosition() const;
    
    UFUNCTION(BlueprintCallable)
    ELegacyLockpickMenuPickMovement GetMovementActionFromMouseMovement();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMovementDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyLockpickMenuHandleType GetHandleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeadZone() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveTumblerPosition() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveTumbler() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanPickMove() const;
    
};

