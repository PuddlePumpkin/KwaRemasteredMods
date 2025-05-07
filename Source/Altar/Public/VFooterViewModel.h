#pragma once
#include "CoreMinimal.h"
#include "FooterInputActionDescription.h"
#include "FooterInputActionVisibility.h"
#include "OnFooterUpdatedDelegate.h"
#include "OnHoldInputTriggerDelegate.h"
#include "OnInputActionDescriptionUpdatedDelegate.h"
#include "OnInputActionVisibilityUpdatedDelegate.h"
#include "VViewModelBase.h"
#include "VFooterViewModel.generated.h"

class UInputAction;

UCLASS(Blueprintable)
class ALTAR_API UVFooterViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoldInputTrigger OnHoldInputStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoldInputTrigger OnHoldInputCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFooterUpdated OnFooterUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionDescriptionUpdated OnInputActionDescriptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionVisibilityUpdated OnInputActionVisibilityUpdated;
    
    UVFooterViewModel();

    UFUNCTION(BlueprintCallable)
    void TriggerOnHoldInput(UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionVisibility(const FFooterInputActionVisibility& NewInputActionVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionDescription(const FFooterInputActionDescription& NewExtraData);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldCancel(UInputAction* InputAction);
    
};

