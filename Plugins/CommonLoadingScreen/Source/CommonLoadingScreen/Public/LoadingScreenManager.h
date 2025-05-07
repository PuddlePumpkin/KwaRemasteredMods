#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegate, bool, InNewVisibility);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenVisibilityChangedDelegate LoadingScreenVisibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveLoadingScreenUserWidgetInstance;
    
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetLoadingScreenWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
};

