#pragma once
#include "CoreMinimal.h"
#include "NiGeometryData.h"
#include "NiTriBasedGeomData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiTriBasedGeomData : public UNiGeometryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTriangles;
    
    UNiTriBasedGeomData();

};

