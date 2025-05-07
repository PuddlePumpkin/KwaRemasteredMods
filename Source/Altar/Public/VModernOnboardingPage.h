#pragma once
#include "CoreMinimal.h"
#include "OnEnterAnimationFinishedDelegate.h"
#include "OnExitAnimationFinishedDelegate.h"
#include "VAltarWidget.h"
#include "VOnboardingPageInterface.h"
#include "VModernOnboardingPage.generated.h"

class UVModernOnboardingMenu;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernOnboardingPage : public UVAltarWidget, public IVOnboardingPageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterAnimationFinished OnEnterAnimationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitAnimationFinished OnExitAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVModernOnboardingMenu* OwningStateMachine;
    
public:
    UVModernOnboardingPage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPlaystation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPC() const;
    
    UFUNCTION(BlueprintCallable)
    void CallExitAnimationDelegate();
    
    UFUNCTION(BlueprintCallable)
    void CallEnterAnimationDelegate();
    

    // Fix for true pure virtual functions not being implemented
};

