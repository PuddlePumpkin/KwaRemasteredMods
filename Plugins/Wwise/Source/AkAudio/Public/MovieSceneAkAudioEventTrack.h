#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS()
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    // FIXME?
    // UMovieSceneAkAudioRTPCTrack();

	virtual UMovieSceneSection* CreateNewSection() override { return NULL; }
	virtual bool SupportsMultipleRows() const override { return true; }
	virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override { return true; }
	virtual FName GetTrackName() const override { return FName(""); }

	virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }

};

