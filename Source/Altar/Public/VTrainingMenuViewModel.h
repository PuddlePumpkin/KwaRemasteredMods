#pragma once
#include "CoreMinimal.h"
#include "LegacyTrainMenuProperties.h"
#include "ModernSkillProgression.h"
#include "VViewModelBase.h"
#include "VTrainingMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVTrainingMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSkillProgression SkillProgression;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyTrainMenuProperties Properties;
    
public:
    UVTrainingMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyTrainMenuProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendTrainButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSkillProgression GetSkillProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyTrainMenuProperties GetProperties() const;
    
};

