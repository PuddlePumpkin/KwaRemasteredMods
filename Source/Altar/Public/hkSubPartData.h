#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "hkSubPartData.generated.h"

class UHavokFilter;
class UHavokMaterial;

UCLASS(Blueprintable)
class ALTAR_API UhkSubPartData : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokFilter* HavokFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UhkSubPartData();

};

