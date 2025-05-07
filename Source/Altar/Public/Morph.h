#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KeyType.h"
#include "NifString.h"
#include "NifType.h"
#include "Morph.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UMorph : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString FrameName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumKeys;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    KeyType Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegacyWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vectors;
    
    UMorph();

};

