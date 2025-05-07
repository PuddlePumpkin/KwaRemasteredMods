#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.h"
#include "HintData.h"
#include "LoadScreenPlayerData.h"
#include "OnHintsArrayUpdateddDelegateDelegate.h"
#include "OnPlayerDataUpdatedDelegateDelegate.h"
#include "VViewModelBase.h"
#include "VLoadingScreenViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLoadingScreenViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDataUpdatedDelegate OnPlayerDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHintsArrayUpdateddDelegate OnHintsArrayUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHintData> Hints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingScreenType LoadingScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadScreenPlayerData PlayerData;
    
public:
    UVLoadingScreenViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const FLoadScreenPlayerData& NewPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenType(ELoadingScreenType NewLoadingScreenType);
    
    UFUNCTION(BlueprintCallable)
    void SetHints(const TArray<FHintData>& NewHints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLoadScreenPlayerData GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingScreenType GetLoadingScreenType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHintData> GetHints() const;
    
};

