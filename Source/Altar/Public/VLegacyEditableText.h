#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "VLegacyEditableText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyEditableText : public UVAltarWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextCommited, FText, TextToCommit);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextCommited OnTextCommited;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
public:
    UVLegacyEditableText();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHintText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommitText();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearUserFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearKeyboardFocus() const;
    
};

