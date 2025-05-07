#pragma once
#include "CoreMinimal.h"
#include "AccumFlags.h"
#include "CycleType.h"
#include "NiSequence.h"
#include "NifString.h"
#include "NiControllerSequence.generated.h"

class UBSAnimNotes;
class UNiControllerManager;
class UNiStringPalette;
class UNiTextKeyExtraData;

UCLASS(Blueprintable)
class ALTAR_API UNiControllerSequence : public UNiSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTextKeyExtraData* TextKeysNiControllerSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    CycleType Cycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayBackwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiControllerManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString AccumRootNameNiControllerSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AccumFlags Accum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiStringPalette* StringPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBSAnimNotes* AnimNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAnimNoteArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBSAnimNotes*> AnimNoteArrays;
    
    UNiControllerSequence();

};

