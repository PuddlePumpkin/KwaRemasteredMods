#include "OblivionActorFactory.h"

UOblivionActorFactory::UOblivionActorFactory() {
}

AActor* UOblivionActorFactory::SpawnActorFromFormAtLocationInBlueprint(UObject* WorldContextObject, UTESForm* InObject, const FVector& Translation, float RefScale, const FRotator& Rotation) {
    return NULL;
}

bool UOblivionActorFactory::InitializeActor(AActor* Actor, UTESForm* InObject, const bool bIsDefaultObject, int32 NumberToSpawn) {
    return false;
}


