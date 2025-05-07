#include "VAltarRichInputActionDecorator.h"

UVAltarRichInputActionDecorator::UVAltarRichInputActionDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->BoundActionClass = NULL;
    this->DT_InputActions = NULL;
}


