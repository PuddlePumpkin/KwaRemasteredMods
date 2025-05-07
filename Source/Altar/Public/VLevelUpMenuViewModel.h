#pragma once
#include "CoreMinimal.h"
#include "EVAttribute.h"
#include "LevelUpMenuInitializationData.h"
#include "LevelUpMenuState.h"
#include "VViewModelBase.h"
#include "VLevelUpMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLevelUpMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUpMenuInitializationData InitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUpMenuState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPointsNb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ModifiedAttributesIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BonusesArray;
    
public:
    UVLevelUpMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentPointsNb(const bool IsPlus, const int32 BonusCost);
    
    UFUNCTION(BlueprintCallable)
    void SetModifiedAttributesIndexArray(const TArray<int32>& NewModifiedAttributesIndexArray);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPointsNb(const int32& NewPointsNb);
    
    UFUNCTION(BlueprintCallable)
    void SetBonusesArray(const TArray<int32>& NewBonusesArray);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendSelectAttributeHandler(const EVAttribute SelectedAttribute);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendModifiedAttributesAndClickedDoneHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedDoneHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetModifiedAttributesIndexArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelUpMenuInitializationData GetInitializationData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelUpMenuState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPointsNb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetBonusesArray() const;
    
};

