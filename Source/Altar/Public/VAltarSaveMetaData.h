#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "VSaveGameDetails.h"
#include "VSaveNumbers.h"
#include "VAltarSaveMetaData.generated.h"

UCLASS(Blueprintable)
class UVAltarSaveMetaData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVSaveGameDetails> AllSavesDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FVSaveNumbers> SaveCounter;
    
public:
    UVAltarSaveMetaData();

};

