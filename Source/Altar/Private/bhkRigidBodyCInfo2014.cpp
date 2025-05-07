#include "bhkRigidBodyCInfo2014.h"

UbhkRigidBodyCInfo2014::UbhkRigidBodyCInfo2014() {
    this->Filter = NULL;
    this->InertiaTensor = NULL;
    this->Mass = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->GravityFactor = 0.00f;
    this->Friction = 0.00f;
    this->RollingFrictionMultiplier = 0.00f;
    this->Restitution = 0.00f;
    this->MaxLinearVelocity = 0.00f;
    this->MaxAngularVelocity = 0.00f;
    this->MotionSystem = hkMotionType::MO_SYS_INVALID;
    this->EnableDeactivation = false;
    this->SolverDeactivation = hkSolverDeactivation::SOLVER_DEACTIVATION_INVALID;
    this->PenetrationDepth = 0.00f;
    this->TimeFactor = 0.00f;
    this->CollisionResponse = hkResponseType::RESPONSE_INVALID;
    this->ProcessContactCallbackDelay3 = 0;
    this->QualityType = hkQualityType::MO_QUAL_INVALID;
    this->AutoRemoveLevel = 0;
    this->ResponseModifierFlags = 0;
    this->NumShapeKeysInContactPoint = 0;
    this->ForceCollidedOntoPPU = false;
}


