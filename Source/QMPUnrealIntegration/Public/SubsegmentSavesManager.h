#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SubsegmentSavesManager.generated.h"

class URecordSnapshots;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API USubsegmentSavesManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecordSnapshots* RecordSnapshots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentName;
    
public:
    USubsegmentSavesManager();

};

