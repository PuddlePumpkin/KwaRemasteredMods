#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AltarKeyInputReplayEditorLibrary.generated.h"

class UInputRecordSave;

UCLASS(Blueprintable)
class ALTARQMP_API UAltarKeyInputReplayEditorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAltarKeyInputReplayEditorLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static UInputRecordSave* LoadAltarRecordData(const FString& SegmentName);
    
};

