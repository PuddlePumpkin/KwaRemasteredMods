#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UVAltarUserInputTextSubsystem.generated.h"

class UUserInputTextSaveData;

UCLASS(Blueprintable)
class ALTAR_API UUVAltarUserInputTextSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserInputTextSaveData* UserInputTextSaveData;
    
public:
    UUVAltarUserInputTextSubsystem();

};

