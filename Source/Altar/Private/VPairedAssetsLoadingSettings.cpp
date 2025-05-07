#include "VPairedAssetsLoadingSettings.h"

UVPairedAssetsLoadingSettings::UVPairedAssetsLoadingSettings() {
    this->bEnableAllSyncMapFormsPreloadingAtGameStartup = false;
    this->bEnableCachingOfBlueprintClasses = false;
    this->NPCPreloadingDistanceMax = 300.00f;
    this->NPCPreloadingDistanceMedium = 150.00f;
    this->NPCPreloadingDistanceCritical = 50.00f;
    this->MaxTotalNumberOfCachedAssets = 250;
    this->MaxNumberOfHeavyWeightCachedAssets = 50;
    this->MaxNumberOfMediumWeightCachedAssets = 100;
    this->MinNumberOfGarbagedAssets = 75;
    this->HeavyWeightCachedAssetsGarbageRatio = 0.80f;
    this->MediumWeightCachedAssetsGarbageRatio = 0.80f;
    this->DefaultCacheEntryLifetime = 30.00f;
    this->ShortCacheEntryLifetime = 5.00f;
    this->LongCacheEntryLifetime = 300.00f;
    this->CacheCleanupUpdateFrequency = 1.00f;
}


