#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "EModernLockpickMenuHandleType.h"
#include "EModernLockpickMenuPickMovement.h"
#include "VAltarWidget.h"
#include "VModernLockpickMenuPick.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernLockpickMenuPick : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickAction, int32, TumblerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickAction OnTumble;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickAction OnSolve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTumbler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousTumbler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovementDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModernLockpickMenuHandleType HandleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCycled;
    
public:
    UVModernLockpickMenuPick();

    UFUNCTION(BlueprintCallable)
    void TumblerUp();
    
    UFUNCTION(BlueprintCallable)
    void SetCycledMousePosition(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTumbler(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void PreviousActiveTumbler();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTumbleAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsBrokenUpdated(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleTypeUpdated(const EModernLockpickMenuHandleType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveTumblerUpdated(const int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void NextActiveTumbler();
    
    UFUNCTION(BlueprintCallable)
    void MovePick(const EModernLockpickMenuPickMovement Action);
    
protected:
    UFUNCTION(BlueprintCallable)
    EModernLockpickMenuPickMovement GetMovementActionFromMouseMovement(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanPickMove() const;
    
};

