#pragma once
#include "CoreMinimal.h"
#include "ESPDataProperty.h"
#include "VFormPtr.h"
#include "Script.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FScript : public FESPDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Script;
    
    FScript();
};

