#pragma once
#include "CoreMinimal.h"
#include "OnEndDelegate.h"
#include "OnPageEnterDelegate.h"
#include "OnPageExitDelegate.h"
#include "OnRunDelegate.h"
#include "OnStartDelegate.h"
#include "VAltarWidget.h"
#include "VModernOnboardingMenu.generated.h"

class IVOnboardingPageInterface;
class UVOnboardingPageInterface;
class UImage;
class UOverlay;
class UVModernOnboardingFlowTable;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernOnboardingMenu : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVModernOnboardingFlowTable> FlowTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStart OnStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRun OnRunDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnd OnEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageEnter OnPageEnterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageExit OnPageExitDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesCleanOnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
public:
    UVModernOnboardingMenu();

protected:
    UFUNCTION(BlueprintCallable)
    bool Skip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRun(bool Outcome);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageChanged(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationEnded(TScriptInterface<IVOnboardingPageInterface> Caller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnboardingFinished() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IVOnboardingPageInterface> GetPage(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IVOnboardingPageInterface> GetOffsetedNextPage(int32 Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextUnskipableIndex(int32 StartIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IVOnboardingPageInterface> GetCurrentPage() const;
    
    UFUNCTION(BlueprintCallable)
    void CleanOnboarding();
    
    UFUNCTION(BlueprintCallable)
    bool Back();
    
};

