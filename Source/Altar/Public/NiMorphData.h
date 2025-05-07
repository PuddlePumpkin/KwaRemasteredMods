#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiMorphData.generated.h"

class UMorph;

UCLASS(Blueprintable)
class ALTAR_API UNiMorphData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumMorphs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumVertices;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RelativeTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorph*> Morphs;
    
    UNiMorphData();

};

