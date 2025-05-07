#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "bhkShapeCollection.h"
#include "hkPackedNiTriStripsData.generated.h"

class UTriangleData;
class UhkSubPartData;

UCLASS(Blueprintable)
class ALTAR_API UhkPackedNiTriStripsData : public UbhkShapeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTriangleData*> Triangles;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Compressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CompressedVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UhkSubPartData*> SubShapes;
    
    UhkPackedNiTriStripsData();

};

