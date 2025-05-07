#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VPhysicsControllableDebugData.h"
#include "VPhysicsControllableWidget.generated.h"

class UVControllableEntry;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVPhysicsControllableWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVPhysicsControllableDebugData> StoredDebugData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DisplayedDataIndex;
    
public:
    UVPhysicsControllableWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEntries(const TArray<UVControllableEntry*>& ControllableEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayedData(const FVPhysicsControllableDebugData& ControllableDebugData, int32 DataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentMapName() const;
    
};

