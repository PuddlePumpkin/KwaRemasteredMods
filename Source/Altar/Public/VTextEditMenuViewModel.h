#pragma once
#include "CoreMinimal.h"
#include "LegacyTextEditMenuProperties.h"
#include "VViewModelBase.h"
#include "VTextEditMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVTextEditMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyTextEditMenuProperties Properties;
    
public:
    UVTextEditMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyTextEditMenuProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOkButton(const FText& UpdatedText);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCancelButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyTextEditMenuProperties GetProperties() const;
    
};

