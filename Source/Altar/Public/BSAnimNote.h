#pragma once
#include "CoreMinimal.h"
#include "AnimNoteType.h"
#include "NiObject.h"
#include "BSAnimNote.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBSAnimNote : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AnimNoteType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Arm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 State;
    
    UBSAnimNote();

};

