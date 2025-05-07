#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "ShaderTexDesc.generated.h"

class UTexDesc;

UCLASS(Blueprintable)
class ALTAR_API UShaderTexDesc : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexDesc* Map;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MapID;
    
    UShaderTexDesc();

};

