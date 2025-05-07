#include "bhkRigidBodyCInfo550_660.h"

UbhkRigidBodyCInfo550_660::UbhkRigidBodyCInfo550_660() {
    this->Filter = NULL;
    this->CollisionResponse = hkResponseType::RESPONSE_INVALID;
    this->ProcessContactCallbackDelay = 0;
    this->Rotation = NULL;
    this->InertiaTensor = NULL;
    this->Mass = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->Friction = 0.00f;
    this->Restitution = 0.00f;
    this->MaxLinearVelocity = 0.00f;
    this->MaxAngularVelocity = 0.00f;
    this->Penetration = 0.00f;
    this->MotionSystem = hkMotionType::MO_SYS_INVALID;
    this->DeactivatorType = hkDeactivatorType::DEACTIVATOR_INVALID;
    this->SloverDeactivation = hkSolverDeactivation::SOLVER_DEACTIVATION_INVALID;
    this->QualityType = hkQualityType::MO_QUAL_INVALID;
}


