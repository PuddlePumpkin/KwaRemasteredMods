#pragma once
#include "CoreMinimal.h"
#include "EProceduralInstanceType.generated.h"

UENUM(BlueprintType)
enum EProceduralInstanceType {
    EProceduralInstanceType_InstancedMesh,
    EProceduralInstanceType_StaticMeshActor,
    EProceduralInstanceType_ActorClass,
    EProceduralInstanceType_Decal,
    EProceduralInstanceType_Level,
    EProceduralInstanceType_Light,
};

