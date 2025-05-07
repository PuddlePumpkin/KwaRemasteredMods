#pragma once
#include "CoreMinimal.h"
#include "VSaveLoadingContext.generated.h"

class USaveGame;
class UVAltarSaveGame;

USTRUCT(BlueprintType)
struct FVSaveLoadingContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* SaveContainer;
    
    ALTAR_API FVSaveLoadingContext();
};

