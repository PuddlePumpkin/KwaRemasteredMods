#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameLocationEntry.h"
#include "GameLocationRecorder.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UGameLocationRecorder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLocationEntry> Records;
    
public:
    UGameLocationRecorder();

};

