#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VSoundPathRowBase.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVSoundPathRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayEvent;
    
    FVSoundPathRowBase();
};

