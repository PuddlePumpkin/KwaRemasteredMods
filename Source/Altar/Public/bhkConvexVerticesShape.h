#pragma once
#include "CoreMinimal.h"
#include "VTSVector4f.h"
#include "bhkConvexShape.h"
#include "bhkConvexVerticesShape.generated.h"

class UbhkWorldObjCInfoProperty;

UCLASS(Blueprintable)
class ALTAR_API UbhkConvexVerticesShape : public UbhkConvexShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* VerticesProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* NormalsProperty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVTSVector4f> Vertices;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVTSVector4f> Normals;
    
    UbhkConvexVerticesShape();

};

