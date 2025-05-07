#include "AdjustedPathPoint.h"

FAdjustedPathPoint::FAdjustedPathPoint() {
    this->NextPathPointDistance2D = 0.00f;
    this->PathPointType = EAvoidanceNavigationPathPointType::StartPathPoint;
}

