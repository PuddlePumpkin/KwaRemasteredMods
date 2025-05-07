#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "TBC.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTBC : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float C;
    
    UTBC();

};

