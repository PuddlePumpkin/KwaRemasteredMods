#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "VAssociatedAltarCellToPrePlacedActors.generated.h"

class UVInitializedPrePlacedActor;

UCLASS(Blueprintable)
class ALTAR_API UVAssociatedAltarCellToPrePlacedActors : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVInitializedPrePlacedActor*> PrePlacedPairableActors;
    
    UVAssociatedAltarCellToPrePlacedActors();

};

