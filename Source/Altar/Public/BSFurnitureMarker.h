#pragma once
#include "CoreMinimal.h"
#include "NiExtraData.h"
#include "BSFurnitureMarker.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBSFurnitureMarker : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumPositions;
    
    UBSFurnitureMarker();

};

