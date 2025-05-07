#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ENavigationInputAction.h"
#include "MenuNavigationElements.h"
#include "NavigationUISubsystem.generated.h"

class INavigationUIElement;
class UNavigationUIElement;
class UDataTable;
class UVAltarMenu;
class UWidget;

UCLASS(Blueprintable)
class ALTAR_API UNavigationUISubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FThumbstickMovedEvent, FVector2D, ThumbstickValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShoulderPressedEvent, bool, ShoulderValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputTypeUpdated, const ECommonInputType, InputType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTypeUpdated OnInputTypeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThumbstickMovedEvent OnLeftThumbstickMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThumbstickMovedEvent OnRightThumbstickMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoulderPressedEvent OnLeftShoulderPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoulderPressedEvent OnRightShoulderPressed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MappingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMenuNavigationElements NavigationElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightThumbStickAxisValue_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightThumbStickAxisValue_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftThumbStickAxisValue_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftThumbStickAxisValue_Y;
    
public:
    UNavigationUISubsystem();

    UFUNCTION(BlueprintCallable)
    void StopNavigation();
    
    UFUNCTION(BlueprintCallable)
    void StartNavigation(TScriptInterface<INavigationUIElement> DefaultNavigationElement, bool ImmediatelyFocus, UVAltarMenu* Menu);
    
    UFUNCTION(BlueprintCallable)
    void NavigateTo(TScriptInterface<INavigationUIElement> DestinationElement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftKeyDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightThumbstickAxisValue_Y() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightThumbstickAxisValue_X() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftThumbstickAxisValue_X() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLefthumbstickAxisValue_Y() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENavigationInputAction GetLastNavigationAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetCurrentNavigationWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
};

