#pragma once
#include "CoreMinimal.h"
#include "bhkShape.h"
#include "bhkMeshShape.generated.h"

class UNiTriStripsData;
class UbhkWorldObjCInfoProperty;

UCLASS(Blueprintable)
class ALTAR_API UbhkMeshShape : public UbhkShape {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Unknown01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Unknown02;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumShapeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UbhkWorldObjCInfoProperty*> ShapeProperties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Unknown03;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumStripsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiTriStripsData*> StripsData;
    
    UbhkMeshShape();

};

