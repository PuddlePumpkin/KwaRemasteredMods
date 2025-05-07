#pragma once
#include "CoreMinimal.h"
#include "OnUserInputTextSaveDataLoadedDelegate.h"
#include "VBaseAltarSaveData.h"
#include "UserInputTextSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UUserInputTextSaveData : public UVBaseAltarSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInputTextSaveDataLoaded OnSaveDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> UserInputTextsMap;
    
public:
    UUserInputTextSaveData();

};

