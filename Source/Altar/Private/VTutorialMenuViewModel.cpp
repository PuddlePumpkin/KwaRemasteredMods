#include "VTutorialMenuViewModel.h"

UVTutorialMenuViewModel::UVTutorialMenuViewModel() {
}

bool UVTutorialMenuViewModel::ThisIsForPluginCompliance() const {
    return false;
}

bool UVTutorialMenuViewModel::IsEmpty() const {
    return false;
}

void UVTutorialMenuViewModel::Enqueue(const FModernTutorialQueueProperties& NewProperties) {
}

FModernTutorialQueueProperties UVTutorialMenuViewModel::Dequeue() {
    return FModernTutorialQueueProperties{};
}

void UVTutorialMenuViewModel::Clear() {
}


