#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineBaseTypes.h"
#include "LegacyMenuActionBinding.generated.h"

USTRUCT(BlueprintType)
struct FLegacyMenuActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputEvent> KeyEvent;
    
    ALTAR_API FLegacyMenuActionBinding();
};

