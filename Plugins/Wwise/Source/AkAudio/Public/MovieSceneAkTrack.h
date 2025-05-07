#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, MinimalAPI)
class UMovieSceneAkTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    bool bIsAMasterTrack;
    
public:
    UMovieSceneAkTrack();

};

