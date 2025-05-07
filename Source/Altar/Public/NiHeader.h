#pragma once
#include "CoreMinimal.h"
#include "EndianType.h"
#include "NiObject.h"
#include "NiHeader.generated.h"

class UBSStreamHeader;

UCLASS(Blueprintable)
class ALTAR_API UNiHeader : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeaderString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EndianType EndianTypeValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UserVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBSStreamHeader* BSHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBlockTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BlockTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BlockTypeIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumGroups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Groups;
    
    UNiHeader();

};

