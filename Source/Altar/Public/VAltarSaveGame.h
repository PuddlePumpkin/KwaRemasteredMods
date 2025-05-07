#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SerializedAltarSaveData.h"
#include "VSaveGameDetails.h"
#include "VAltarSaveGame.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> OblivionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSaveGameDetails SaveGameDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSerializedAltarSaveData> SerializedAltarSaveDataArray;
    
    UVAltarSaveGame();

};

