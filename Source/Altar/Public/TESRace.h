#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "EVBloodColor.h"
#include "OblivionNPCFaceGenData.h"
#include "RaceBody.h"
#include "RaceData.h"
#include "TESForm.h"
#include "TESRace.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESRace : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOblivionNPCFaceGenData MeanOblivionFaceGenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVBloodColor BloodColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRaceBody> MaleFullBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRaceBody> FemaleFullBodies;
    
    UTESRace();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRaceBody GetRaceBodyBySex(ECharacterSex Sex, int32 BodyIndex) const;
    
};

