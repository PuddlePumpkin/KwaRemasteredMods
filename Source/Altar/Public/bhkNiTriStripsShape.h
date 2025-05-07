#pragma once
#include "CoreMinimal.h"
#include "bhkShapeCollection.h"
#include "bhkNiTriStripsShape.generated.h"

class UHavokFilter;
class UHavokMaterial;
class UNiTriStripsData;

UCLASS(Blueprintable)
class ALTAR_API UbhkNiTriStripsShape : public UbhkShapeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GrowBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumStripsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiTriStripsData*> StripsData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHavokFilter*> Filters;
    
    UbhkNiTriStripsShape();

};

