#include "VPhysicsControllableWidget.h"

UVPhysicsControllableWidget::UVPhysicsControllableWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DisplayedDataIndex = 0;
}



FString UVPhysicsControllableWidget::GetCurrentMapName() const {
    return TEXT("");
}


