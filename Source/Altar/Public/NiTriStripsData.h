#pragma once
#include "CoreMinimal.h"
#include "NiTriBasedGeomData.h"
#include "NiTriStripsData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiTriStripsData : public UNiTriBasedGeomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStrips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StripLengths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StripLists;
    
    UNiTriStripsData();

};

