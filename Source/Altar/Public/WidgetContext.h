#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WidgetContext.generated.h"

class UVAltarMenu;

USTRUCT(BlueprintType)
struct ALTAR_API FWidgetContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVAltarMenu> ContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextName;
    
    FWidgetContext();
};
FORCEINLINE uint32 GetTypeHash(const FWidgetContext) { return 0; }

