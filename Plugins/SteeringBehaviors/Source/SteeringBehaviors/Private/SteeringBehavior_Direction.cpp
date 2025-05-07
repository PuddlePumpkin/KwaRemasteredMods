#include "SteeringBehavior_Direction.h"

USteeringBehavior_Direction::USteeringBehavior_Direction() {
    this->MaxInterest = 1.00f;
    this->MinInterest = 0.35f;
}

void USteeringBehavior_Direction::SetDirection(const FVector& NewDirection) {
}

FVector USteeringBehavior_Direction::GetDirection() const {
    return FVector{};
}


