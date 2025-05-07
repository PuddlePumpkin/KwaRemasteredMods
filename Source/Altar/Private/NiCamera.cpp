#include "NiCamera.h"

UNiCamera::UNiCamera() {
    this->CameraFlags = 0;
    this->FrustumLeft = 0.00f;
    this->FrustumRight = 0.00f;
    this->FrustumTop = 0.00f;
    this->FrustumBottom = 0.00f;
    this->FrustumNear = 0.00f;
    this->FrustumFar = 0.00f;
    this->UseOrthographicProjection = false;
    this->ViewportLeft = 0.00f;
    this->ViewportRight = 0.00f;
    this->ViewportTop = 0.00f;
    this->ViewportBottom = 0.00f;
    this->LODAdjust = 0.00f;
    this->Scene = NULL;
    this->NumScreenPolygons = 0;
    this->NumScreenTextures = 0;
    this->UnknownInt3 = 0;
}


