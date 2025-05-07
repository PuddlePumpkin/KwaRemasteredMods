#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESHair.generated.h"

class UVCharacterHairPiece_Hair;

UCLASS(Blueprintable)
class ALTAR_API UTESHair : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVCharacterHairPiece_Hair* NewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UTESHair();

};

