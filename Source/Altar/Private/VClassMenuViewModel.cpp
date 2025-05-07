#include "VClassMenuViewModel.h"

UVClassMenuViewModel::UVClassMenuViewModel() {
    this->FirstSelectedClassIndex = 0;
}

void UVClassMenuViewModel::SetFirstSelectedClassIndex(int32 NewFirstSelectedClassIndex) {
}

void UVClassMenuViewModel::RegisterSendOnHoveredItemHandler(int32 InButtonIndex) {
}

void UVClassMenuViewModel::RegisterSendClickedItemHandler(int32 InButtonIndex) {
}

void UVClassMenuViewModel::RegisterSendClickedDoneButtonHandler() {
}

void UVClassMenuViewModel::RegisterSendClickedCreateButtonHandler() {
}

int32 UVClassMenuViewModel::GetFirstSelectedClassIndex() const {
    return 0;
}

TArray<FPlayerClassItemProperties> UVClassMenuViewModel::GetClassList() const {
    return TArray<FPlayerClassItemProperties>();
}


