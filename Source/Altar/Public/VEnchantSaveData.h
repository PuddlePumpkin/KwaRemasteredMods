#pragma once
#include "CoreMinimal.h"
#include "VBaseAltarSaveData.h"
#include "VEnchantSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVEnchantSaveData : public UVBaseAltarSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 SourceFormID;
    
    UVEnchantSaveData();

};

