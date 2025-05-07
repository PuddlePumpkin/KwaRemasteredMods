#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EVModernRebindCategory.h"
#include "ModernRebindData.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FModernRebindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DefaultPrimaryKeyboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DefaultSecondaryKeyboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DefaultPrimaryGamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVModernRebindCategory DefaultCategory;
    
    ALTAR_API FModernRebindData();
};

