#include "VUINavigationGlobalSubsystem.h"

UVUINavigationGlobalSubsystem::UVUINavigationGlobalSubsystem() {
    this->GenericNavigationInputMappingContext = NULL;
}

void UVUINavigationGlobalSubsystem::NavigateToWidget(const TScriptInterface<IVEnhancedInputNavigable>& Widget) {
}

void UVUINavigationGlobalSubsystem::NavigateToPreviousLayer() {
}

void UVUINavigationGlobalSubsystem::NavigateBack() {
}

bool UVUINavigationGlobalSubsystem::IsWidgetTopMostFocusedOne(const TScriptInterface<IVEnhancedInputNavigable>& Widget) const {
    return false;
}

bool UVUINavigationGlobalSubsystem::IsWidgetInTopMostFocusedStack(const TScriptInterface<IVEnhancedInputNavigable>& Widget) const {
    return false;
}

UInputMappingContext* UVUINavigationGlobalSubsystem::GetGenericNavigationInputMappingContext() const {
    return NULL;
}

FVGenericInputActionData UVUINavigationGlobalSubsystem::GetGenericInputAction(EVGenericNavigationAction GenericInputActionType) const {
    return FVGenericInputActionData{};
}


