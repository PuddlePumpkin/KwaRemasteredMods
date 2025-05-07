#pragma once
#include "CoreMinimal.h"
#include "NiAvObject.h"
#include "NiGeometry.generated.h"

class UNiGeometryData;
class UNiSkinInstance;

UCLASS(Blueprintable)
class ALTAR_API UNiGeometry : public UNiAvObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiGeometryData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiSkinInstance* SkinInstance;
    
    UNiGeometry();

};

