#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "OblivionNPCFaceGenData.h"
#include "TESActorBase.h"
#include "TESNPC.generated.h"

class UTESEyes;
class UTESHair;
class UTESRace;
class UVCharacterPhenotypeData;

UCLASS(Blueprintable)
class ALTAR_API UTESNPC : public UTESActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOblivionNPCFaceGenData OblivionFaceGenDataOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESRace* InheritedRace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESHair> Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESEyes> Eyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex Sex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultRaceAndSexPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProceduralHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVCharacterPhenotypeData* CharacterPhenotypeData;
    
    UTESNPC();

};

