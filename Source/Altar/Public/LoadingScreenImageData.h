#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "LoadingScreenImageData.generated.h"

USTRUCT(BlueprintType)
struct FLoadingScreenImageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Image;
    
    ALTAR_API FLoadingScreenImageData();
};

