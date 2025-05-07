#include "VModernSettingsFunctionLibrary.h"

UVModernSettingsFunctionLibrary::UVModernSettingsFunctionLibrary() {
}

bool UVModernSettingsFunctionLibrary::IsRunningOnSteamDeck() {
    return false;
}

bool UVModernSettingsFunctionLibrary::IsRunningOnSteam() {
    return false;
}

bool UVModernSettingsFunctionLibrary::IsPlatformValidForSetting(int32 ModernCategoryPlatormFlag) {
    return false;
}

FString UVModernSettingsFunctionLibrary::GetCommandValue(const FString& CommandName) {
    return TEXT("");
}

int32 UVModernSettingsFunctionLibrary::GetCommandIntegerValue(const FString& CommandName) {
    return 0;
}

float UVModernSettingsFunctionLibrary::GetCommandFloatValue(const FString& CommandName) {
    return 0.0f;
}

FString UVModernSettingsFunctionLibrary::FixBooleen(const FString& Input) {
    return TEXT("");
}

FString UVModernSettingsFunctionLibrary::CreateCommand(const FString& CommandName, const FString& CommandValue) {
    return TEXT("");
}


