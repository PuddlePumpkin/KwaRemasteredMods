#pragma once
#include "CoreMinimal.h"
#include "LegacyQuestAddedProperties.h"
#include "VViewModelBase.h"
#include "VGenericMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVGenericMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ControllerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MouseKeyboardText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyQuestAddedProperties Properties;
    
public:
    UVGenericMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyQuestAddedProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyQuestAddedProperties GetProperties() const;
    
};

