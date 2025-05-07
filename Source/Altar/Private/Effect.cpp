#include "Effect.h"

FEffect::FEffect() {
    this->EffectID = EEffectID::NoEffect;
    this->Magnitude = 0;
    this->Area = 0;
    this->Duration = 0;
    this->Range = ERange::Self;
    this->ActorValue = EActorValue::Strength;
}

