#include "VGenericMenuViewModel.h"

UVGenericMenuViewModel::UVGenericMenuViewModel() {
}

bool UVGenericMenuViewModel::ThisIsForPluginCompliance() const {
    return false;
}

void UVGenericMenuViewModel::SetProperties(const FLegacyQuestAddedProperties& NewProperties) {
}

void UVGenericMenuViewModel::RegisterSendClickedButton(int32 Value) {
}

FLegacyQuestAddedProperties UVGenericMenuViewModel::GetProperties() const {
    return FLegacyQuestAddedProperties{};
}


