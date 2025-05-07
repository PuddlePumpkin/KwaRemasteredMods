#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NifType.h"
#include "NiTransform.generated.h"

class UMatrix33;

UCLASS(Blueprintable)
class ALTAR_API UNiTransform : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatrix33* Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UNiTransform();

};

