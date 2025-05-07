#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "IntergridConnection.h"
#include "PathGridPointData.h"
#include "VPathGridComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVPathGridComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathGridPointData> PathGridPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntergridConnection> IntergridConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathGridPointData> LinkedPoints;
    
    UVPathGridComponent(const FObjectInitializer& ObjectInitializer);

};

