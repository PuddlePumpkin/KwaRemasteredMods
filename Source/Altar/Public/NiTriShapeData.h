#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiTriBasedGeomData.h"
#include "NiTriShapeData.generated.h"

class UNiMatchGroup;

UCLASS(Blueprintable)
class ALTAR_API UNiTriShapeData : public UNiTriBasedGeomData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumTrianglePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMatchGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiMatchGroup*> MatchGroups;
    
    UNiTriShapeData();

};

