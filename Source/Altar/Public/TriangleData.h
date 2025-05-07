#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NifType.h"
#include "TriangleData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTriangleData : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Triangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeldingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UTriangleData();

};

