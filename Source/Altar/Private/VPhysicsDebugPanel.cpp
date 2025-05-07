#include "VPhysicsDebugPanel.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AVPhysicsDebugPanel::AVPhysicsDebugPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AnchorComponent"));
    this->AnchorComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->TargetArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("TargetArrowComponent"));
    this->TargetArrowComponent->SetupAttachment(RootComponent);
    this->WidgetComponent->SetupAttachment(RootComponent);
}


