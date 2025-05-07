#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IntergridConnection.generated.h"

USTRUCT(BlueprintType)
struct FIntergridConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginalCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointCoord;
    
    ALTAR_API FIntergridConnection();
};

