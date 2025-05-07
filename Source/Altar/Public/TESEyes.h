#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESEyes.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ALTAR_API UTESEyes : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UTESEyes();

};

