#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableEditableText.generated.h"

class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableEditableText : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueCommittedDelegate, const FText&, CommittedValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEditableTextChangedEvent, const FText&, Text);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueCommittedDelegate OnValueCommittedHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEditableTextChangedEvent OnValueChangedHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText;
    
public:
    UVNavigableEditableText();

protected:
    UFUNCTION(BlueprintCallable)
    void UnBindEditableTextDelegates();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnValueCommitted(const FText& CommittedValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnValueChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEditing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEditableText* GetEditableText() const;
    
    UFUNCTION(BlueprintCallable)
    void BindEditableTextDelegates();
    
};

