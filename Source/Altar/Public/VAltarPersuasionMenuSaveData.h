#pragma once
#include "CoreMinimal.h"
#include "VBaseUIGameSaveData.h"
#include "VAltarPersuasionMenuSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarPersuasionMenuSaveData : public UVBaseUIGameSaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint32> PersuadedCharacters;
    
public:
    UVAltarPersuasionMenuSaveData();

};

