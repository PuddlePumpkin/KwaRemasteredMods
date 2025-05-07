#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NifString.h"
#include "NiSequence.generated.h"

class UControlledBlock;
class UNiTextKeyExtraData;

UCLASS(Blueprintable)
class ALTAR_API UNiSequence : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString AccumRootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTextKeyExtraData* TextKeys;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumDIV2Ints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DIV2Ints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiObject* DIV2Ref;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumControlledBlocks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ArrayGrowBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UControlledBlock*> ControlledBlocks;
    
    UNiSequence();

};

