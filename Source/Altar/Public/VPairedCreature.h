#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VEntryPointData.h"
#include "VPairedPawn.h"
#include "VPairedCreature.generated.h"

class AVPairedCharacter;
class UVAltarSpringArmComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPairedCreature : public AVPairedPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedCharacter* Rider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarSpringArmComponent* MountCameraSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVEntryPointData> EntryPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstPersonRiderAttachmentOffset;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TurningAnimationsYawDeltaThreshold;
    
public:
    AVPairedCreature(const FObjectInitializer& ObjectInitializer);

};

