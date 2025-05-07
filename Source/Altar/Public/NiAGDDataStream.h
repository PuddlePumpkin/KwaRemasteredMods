#pragma once
#include "CoreMinimal.h"
#include "NiAGDDataStreamFlags.h"
#include "NifType.h"
#include "NiAGDDataStream.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiAGDDataStream : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnitSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Stride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BlockIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BlockOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiAGDDataStreamFlags Flags;
    
    UNiAGDDataStream();

};

