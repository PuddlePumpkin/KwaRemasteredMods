#include "bhkRigidBodyCInfo2010.h"

UbhkRigidBodyCInfo2010::UbhkRigidBodyCInfo2010() {
    this->Filter = NULL;
    this->CollisionResponse = hkResponseType::RESPONSE_INVALID;
    this->ProcessContactCallbackDelay = 0;
    this->InertiaTensor = NULL;
    this->Mass = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->TimeFactor = 0.00f;
    this->GravityFactor = 0.00f;
    this->Friction = 0.00f;
    this->RollingFrictionMultiplier = 0.00f;
    this->Restitution = 0.00f;
    this->MaxLinearVelocity = 0.00f;
    this->MaxAngularVelocity = 0.00f;
    this->PenetrationDepth = 0.00f;
    this->MotionSystem = hkMotionType::MO_SYS_INVALID;
    this->EnableDeactivation = false;
    this->SolverDeactivation = hkSolverDeactivation::SOLVER_DEACTIVATION_INVALID;
    this->QualityType = hkQualityType::MO_QUAL_INVALID;
    this->AutoRemoveLevel = 0;
    this->ResponseModifierFlags = 0;
    this->NumShapeKeysInContactPoint = 0;
    this->ForceCollidedOntoPPU = false;
}


