#pragma once
#include "CoreMinimal.h"
#include "VViewModelBase.h"
#include "VHelpMenuViewModel.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ALTAR_API UVHelpMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialData;
    
public:
    UVHelpMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UnloadHelpMenuViewModel();
    
    UFUNCTION(BlueprintCallable)
    void SetViewMode(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void LoadHelpMenuViewModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTutorialData() const;
    
};

