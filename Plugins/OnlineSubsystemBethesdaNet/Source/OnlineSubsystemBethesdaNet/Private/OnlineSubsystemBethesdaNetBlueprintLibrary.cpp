#include "OnlineSubsystemBethesdaNetBlueprintLibrary.h"

UOnlineSubsystemBethesdaNetBlueprintLibrary::UOnlineSubsystemBethesdaNetBlueprintLibrary() {
}

bool UOnlineSubsystemBethesdaNetBlueprintLibrary::IsLastErrorAConnectionIssue() {
    return false;
}

FString UOnlineSubsystemBethesdaNetBlueprintLibrary::GetUserEmailAddress(int32 LocalUserNum) {
    return TEXT("");
}

BNetPlatform UOnlineSubsystemBethesdaNetBlueprintLibrary::GetPlatform() {
    return BNetPlatform::Unknown;
}

FString UOnlineSubsystemBethesdaNetBlueprintLibrary::GetPersistentUserId(int32 LocalUserNum) {
    return TEXT("");
}

BNetLoggingPlatform UOnlineSubsystemBethesdaNetBlueprintLibrary::GetLoggingPlatform() {
    return BNetLoggingPlatform::Invalid;
}

BNetLoginResult UOnlineSubsystemBethesdaNetBlueprintLibrary::GetLastLoginResult() {
    return BNetLoginResult::LoginSuccessful;
}

FString UOnlineSubsystemBethesdaNetBlueprintLibrary::GetLastErrorAsString() {
    return TEXT("");
}

FString UOnlineSubsystemBethesdaNetBlueprintLibrary::GetAccountBUID(int32 LocalUserNum) {
    return TEXT("");
}


