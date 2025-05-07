#pragma once
#include "CoreMinimal.h"
#include "VAltarBISaveIdentificationProvider.h"
#include "UObject/NoExportTypes.h"
#include "VBaseAltarSaveData.h"
#include "VAltarSaveIdentificationData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarSaveIdentificationData : public UVBaseAltarSaveData, public IVAltarBISaveIdentificationProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid SaveID;
    
public:
    UVAltarSaveIdentificationData();


    // Fix for true pure virtual functions not being implemented
};

