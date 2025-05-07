#include "VAudioStatics.h"

UVAudioStatics::UVAudioStatics() {
}

void UVAudioStatics::UnloadAudioEvent(UAkAudioEvent* EventToUnload, bool bAsync) {
}

void UVAudioStatics::SetSwitch(AActor* Actor, FName SwitchGroup, FName SwitchValue) {
}

void UVAudioStatics::SetState(FName StateGroup, FName StateValue) {
}

void UVAudioStatics::SetRTPCValue(AActor* Actor, FName RTPCName, float RTPCValue, int32 InterpolationTimeInMs) {
}

void UVAudioStatics::SetGlobalRTPCValue(FName RTPCName, float RTPCValue, int32 InterpolationTimeInMs) {
}

bool UVAudioStatics::PrepareAudioEvent(UAkAudioEvent* EventToPrepare, bool bWhitelist) {
    return false;
}

void UVAudioStatics::BPF_PostAudioEventWithComponent(UAkAudioEvent* EventToPost, UAkComponent* Component) {
}

void UVAudioStatics::BPF_PostAudioEventOnActor(UAkAudioEvent* EventToPost, AActor* Actor) {
}

void UVAudioStatics::BPF_PostAudioEventAtLocation(UAkAudioEvent* EventToPost, FVector Location, UObject* WorldContext) {
}

void UVAudioStatics::BPF_PostAudioEvent(UAkAudioEvent* EventToPost) {
}


