#pragma once
#include "CoreMinimal.h"
#include "IntergridConnection.h"
#include "PathGridPointData.h"
#include "PathGridPointDataArray.h"
#include "TESForm.h"
#include "TESPathGrid.generated.h"

class UTESCell;
class UTESObjectREFR;

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESPathGrid : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESCell* ParentCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumGridDataPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathGridPointData> PathGridPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntergridConnection> IntergridConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTESObjectREFR*, FPathGridPointDataArray> LinkedPoints;
    
    UTESPathGrid();

};

