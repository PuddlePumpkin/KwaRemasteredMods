#pragma once
#include "CoreMinimal.h"
#include "EModalMenuLayoutType.h"
#include "VViewModelBase.h"
#include "VMessageMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVMessageMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModalMenuLayoutType MenuType;
    
public:
    UVMessageMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetMessage(const FText& NewMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuType(EModalMenuLayoutType NewMenuType);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonsText(const TArray<FText>& NewButtonsText);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EModalMenuLayoutType GetMenuType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetButtonsText() const;
    
};

