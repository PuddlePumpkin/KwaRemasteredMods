#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPreviewDefaultObjectType.h"
#include "Templates/SubclassOf.h"
#include "VInventoryPreviewPositionOverride.h"
#include "VPreviewClassTypeLocationRotationTableRow.generated.h"

class AVActor;

USTRUCT(BlueprintType)
struct ALTAR_API FVPreviewClassTypeLocationRotationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewDefaultObjectType TypeToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVInventoryPreviewPositionOverride DefaultParameters;
    
    FVPreviewClassTypeLocationRotationTableRow();
};

