#pragma once
#include "CoreMinimal.h"
#include "NiPSysData.h"
#include "NiMeshPSysData.generated.h"

class UNiNode;

UCLASS(Blueprintable)
class ALTAR_API UNiMeshPSysData : public UNiPSysData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DefaultPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FillPoolsOnLoad;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumGenerations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Generations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiNode* ParticleMeshes;
    
    UNiMeshPSysData();

};

