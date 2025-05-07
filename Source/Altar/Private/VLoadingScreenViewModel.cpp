#include "VLoadingScreenViewModel.h"

UVLoadingScreenViewModel::UVLoadingScreenViewModel() {
    this->LoadingScreenType = ELoadingScreenType::FromLevelChange;
}

bool UVLoadingScreenViewModel::ThisIsForPluginCompliance() const {
    return false;
}

void UVLoadingScreenViewModel::SetPlayerData(const FLoadScreenPlayerData& NewPlayerData) {
}

void UVLoadingScreenViewModel::SetLoadingScreenType(ELoadingScreenType NewLoadingScreenType) {
}

void UVLoadingScreenViewModel::SetHints(const TArray<FHintData>& NewHints) {
}

FLoadScreenPlayerData UVLoadingScreenViewModel::GetPlayerData() const {
    return FLoadScreenPlayerData{};
}

ELoadingScreenType UVLoadingScreenViewModel::GetLoadingScreenType() const {
    return ELoadingScreenType::FromLoadingGame;
}

TArray<FHintData> UVLoadingScreenViewModel::GetHints() const {
    return TArray<FHintData>();
}


