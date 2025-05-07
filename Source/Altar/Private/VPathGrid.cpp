#include "VPathGrid.h"
#include "VPathGridComponent.h"

AVPathGrid::AVPathGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FormID = 0;
    this->PathGridComponent = CreateDefaultSubobject<UVPathGridComponent>(TEXT("PathGridComponent"));
}


