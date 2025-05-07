#pragma once
#include "CoreMinimal.h"
#include "VViewModelBase.h"
#include "VQuickKeysMenuViewModel.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UVQuickKeysMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
public:
    UVQuickKeysMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetMessage(const FText& NewMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyIndex(int32 NewKeyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIcons(const TArray<UTexture2D*>& NewIcons);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendSelectedQuickKey(int32 KeyID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendOpen();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendForceMouseInputByAltar(bool bNewForceMouseInputByAltar);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKeyIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTexture2D*> GetIcons() const;
    
};

