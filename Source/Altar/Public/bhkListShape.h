#pragma once
#include "CoreMinimal.h"
#include "bhkShapeCollection.h"
#include "bhkListShape.generated.h"

class UHavokFilter;
class UHavokMaterial;
class UbhkShape;
class UbhkWorldObjCInfoProperty;

UCLASS(Blueprintable)
class ALTAR_API UbhkListShape : public UbhkShapeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumSubShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UbhkShape*> SubShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* ChildShapeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* ChildFilterProperty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHavokFilter*> Filters;
    
    UbhkListShape();

};

