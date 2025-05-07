#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnTextureEffectStartDelegate.generated.h"

class UStaticMeshComponent;
class UTESEffectShader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTextureEffectStart, UTESEffectShader*, form, const TArray<FLinearColor>&, VFXColors, const TArray<UStaticMeshComponent*>&, MeshIgnoreList, float, StatusEffectValue);

