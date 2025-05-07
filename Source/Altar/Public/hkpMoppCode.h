#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "hkMoppCodeBuildType.h"
#include "hkpMoppCode.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UhkpMoppCode : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkMoppCodeBuildType BuildType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> Data;
    
    UhkpMoppCode();

};

