#pragma once
#include "CoreMinimal.h"
#include "EBillboardMode.generated.h"

UENUM()
enum class EBillboardMode : uint16 {
    ALWAYS_FACE_CAMERA,
    ROTATE_ABOUT_UP,
    RIGID_FACE_CAMERA,
    ALWAYS_FACE_CENTER,
    RIGID_FACE_CENTER,
    BSROTATE_ABOUT_UP,
    ROTATE_ABOUT_UP2 = 9,
};

