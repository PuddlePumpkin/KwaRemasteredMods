#pragma once
#include "CoreMinimal.h"
#include "NiAVObjectPalette.h"
#include "NiDefaultAVObjectPalette.generated.h"

class UAVObject;
class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiDefaultAVObjectPalette : public UNiAVObjectPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* Scene;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumObjs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAVObject*> Objs;
    
    UNiDefaultAVObjectPalette();

};

