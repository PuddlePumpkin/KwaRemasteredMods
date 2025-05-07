#pragma once
#include "CoreMinimal.h"
#include "AbstractAdditionalGeometryData.h"
#include "NiAdditionalGeometryData.generated.h"

class UNiAGDDataStream;

UCLASS(Blueprintable)
class ALTAR_API UNiAdditionalGeometryData : public UAbstractAdditionalGeometryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumVertices;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumBlockInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAGDDataStream*> BlockInfos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAGDDataStream*> Blocks;
    
    UNiAdditionalGeometryData();

};

