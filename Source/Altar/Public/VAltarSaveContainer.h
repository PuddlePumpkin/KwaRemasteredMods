#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EVAltarCompressionMethod.h"
#include "VAltarSaveContainer.generated.h"

UCLASS(Blueprintable)
class UVAltarSaveContainer : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaveVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVAltarCompressionMethod CompressionMethod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> AltarSaveData;
    
public:
    UVAltarSaveContainer();

};

