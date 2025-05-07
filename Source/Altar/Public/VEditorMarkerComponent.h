#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "VEditorMarkerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVEditorMarkerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UVEditorMarkerComponent(const FObjectInitializer& ObjectInitializer);

};

