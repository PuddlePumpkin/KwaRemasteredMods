#pragma once
#include "CoreMinimal.h"
#include "ModernTutorialQueueProperties.h"
#include "OnClearTutorialDataDelegate.h"
#include "VViewModelBase.h"
#include "VTutorialMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVTutorialMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClearTutorialData OnClearTutorialDataDelegate;
    
    UVTutorialMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void Enqueue(const FModernTutorialQueueProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    FModernTutorialQueueProperties Dequeue();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

