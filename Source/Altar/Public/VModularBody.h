#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VModularBody.generated.h"

class AVAmuletModularBodyPart;
class AVFeetModularBodyPart;
class AVHandsModularBodyPart;
class AVHelmetModularBodyPart;
class AVLowerBodyModularBodyPart;
class AVRingModularBodyPart;
class AVUpperBodyModularBodyPart;

USTRUCT(BlueprintType)
struct ALTAR_API FVModularBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVHelmetModularBodyPart> Helmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVRingModularBodyPart> RightRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVRingModularBodyPart> LeftRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVAmuletModularBodyPart> Amulet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVUpperBodyModularBodyPart> UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVHandsModularBodyPart> Hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVLowerBodyModularBodyPart> LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVFeetModularBodyPart> Feet;
    
    FVModularBody();
};

