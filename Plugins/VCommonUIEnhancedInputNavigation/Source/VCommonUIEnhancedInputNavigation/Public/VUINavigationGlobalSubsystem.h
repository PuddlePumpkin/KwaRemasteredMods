#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVGenericNavigationAction.h"
#include "OnNewLayerFocusedDelegate.h"
#include "OnNewTopMostWidgetFocusedDelegate.h"
#include "VGenericInputActionData.h"
#include "VUINavigationGlobalSubsystem.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;
class UInputMappingContext;

UCLASS(Blueprintable)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVUINavigationGlobalSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewLayerFocused OnNewLayerFocusedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewTopMostWidgetFocused OnNewTopMostWidgetFocusedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData UpNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData RightNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData DownNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData LeftNavigationIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData AcceptIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGenericInputActionData BackIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* GenericNavigationInputMappingContext;
    
public:
    UVUINavigationGlobalSubsystem();

    UFUNCTION(BlueprintCallable)
    void NavigateToWidget(const TScriptInterface<IVEnhancedInputNavigable>& Widget);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToPreviousLayer();
    
    UFUNCTION(BlueprintCallable)
    void NavigateBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetTopMostFocusedOne(const TScriptInterface<IVEnhancedInputNavigable>& Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetInTopMostFocusedStack(const TScriptInterface<IVEnhancedInputNavigable>& Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputMappingContext* GetGenericNavigationInputMappingContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGenericInputActionData GetGenericInputAction(EVGenericNavigationAction GenericInputActionType) const;
    
};

