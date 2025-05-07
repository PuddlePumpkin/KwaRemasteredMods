#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysMeshUpdateModifier.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysMeshUpdateModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAvObject*> Meshes;
    
    UNiPSysMeshUpdateModifier();

};

