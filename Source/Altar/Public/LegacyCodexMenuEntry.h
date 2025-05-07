#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LegacyCodexMenuEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyCodexMenuEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CardTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTexture;
    
    ALTAR_API FLegacyCodexMenuEntry();
};

