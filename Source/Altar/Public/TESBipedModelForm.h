#pragma once
#include "CoreMinimal.h"
#include "TESBaseFormComponent.h"
#include "Templates/SubclassOf.h"
#include "TESBipedModelForm.generated.h"

class AVModularBodyPartBase;
class UStreamableRenderAsset;
class UTESIcon;
class UTESModel;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESBipedModelForm : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BipedObjectSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVModularBodyPartBase> BodyPartActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStreamableRenderAsset>> NewWorldModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> NewInventoryIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTESModel*> BipedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTESModel*> WorldModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTESIcon*> InventoryIcon;
    
    UTESBipedModelForm();

};

