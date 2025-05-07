#pragma once
#include "CoreMinimal.h"
#include "VWeapon.h"
#include "VQuiver.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVQuiver : public AVWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ArrowMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ArrowMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrowCount;
    
public:
    AVQuiver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnArrowCountChange(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArrowCount() const;
    
};

