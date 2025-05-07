#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CutParameter.h"
#include "OriginalMaterial.h"
#include "LocalMapComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API ULocalMapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceAllSlotsWithDefaultCutParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCutParameter> CutParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOriginalMaterial> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> OwnerStaticMeshes;
    
public:
    ULocalMapComponent(const FObjectInitializer& ObjectInitializer);

};

