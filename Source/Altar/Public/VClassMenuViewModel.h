#pragma once
#include "CoreMinimal.h"
#include "PlayerClassItemProperties.h"
#include "VViewModelBase.h"
#include "VClassMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVClassMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerClassItemProperties> ClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstSelectedClassIndex;
    
public:
    UVClassMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetFirstSelectedClassIndex(int32 NewFirstSelectedClassIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendOnHoveredItemHandler(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedItemHandler(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedDoneButtonHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCreateButtonHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstSelectedClassIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerClassItemProperties> GetClassList() const;
    
};

