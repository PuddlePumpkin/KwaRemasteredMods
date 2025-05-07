#include "VLevelSelectDispatcher.h"

AVLevelSelectDispatcher::AVLevelSelectDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UWorld* AVLevelSelectDispatcher::StartPairedGameManually(UObject* WorldContext, const FString& LevelName, const FString& StartupCommand, bool bUseDebugGamemode) {
    return NULL;
}

UWorld* AVLevelSelectDispatcher::StartPairedGame(AVLevelSelectDoor* Door) {
    return NULL;
}


