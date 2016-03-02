/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_jsb.py -c chipmunk_jsb.ini" on 2016-02-23
* Script version: v0.10
*/
#include "js_bindings_config.h"
#ifdef JSB_INCLUDE_CHIPMUNK

#include "chipmunk/js_bindings_chipmunk_manual.h"

#ifdef __cplusplus
extern "C" {
#endif
bool JSB_cpArbiterCallWildcardBeginA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardBeginB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardPostSolveA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardPostSolveB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardPreSolveA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardPreSolveB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardSeparateA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterCallWildcardSeparateB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetCount(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetDepth(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetNormal(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetPointA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetPointB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetRestitution(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterGetSurfaceVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterIgnore(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterIsFirstContact(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterIsRemoval(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterSetFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterSetRestitution(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterSetSurfaceVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterTotalImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpArbiterTotalKE(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpAreaForCircle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpAreaForSegment(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBArea(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBCenter(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBClampVect(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBContainsBB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBContainsVect(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBExpand(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBIntersects(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBIntersectsSegment(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBMerge(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBMergedArea(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBNewForCircle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBNewForExtents(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBSegmentQuery(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBBWrapVect(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyActivate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyActivateStatic(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyApplyForceAtLocalPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyApplyForceAtWorldPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyApplyImpulseAtLocalPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyApplyImpulseAtWorldPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyDestroy(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyFree(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetAngularVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetCenterOfGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetForce(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetMass(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetMoment(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetRotation(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetSpace(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetTorque(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetType(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetVelocityAtLocalPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyGetVelocityAtWorldPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyInit(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyIsSleeping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyKineticEnergy(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyLocalToWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyNewKinematic(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyNewStatic(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetAngularVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetCenterOfGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetForce(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetMass(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetMoment(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetTorque(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetType(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySetVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySleep(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodySleepWithGroup(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyUpdatePosition(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyUpdateVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBodyWorldToLocal(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBoxShapeNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpBoxShapeNew2(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpCircleShapeGetOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpCircleShapeGetRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpCircleShapeNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintDestroy(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintFree(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetBodyA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetBodyB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetCollideBodies(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetErrorBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetMaxBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetMaxForce(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintGetSpace(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsDampedRotarySpring(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsDampedSpring(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsGearJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsGrooveJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsPinJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsPivotJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsRatchetJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsRotaryLimitJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsSimpleMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintIsSlideJoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintSetCollideBodies(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintSetErrorBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintSetMaxBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpConstraintSetMaxForce(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringGetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringGetRestAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringGetStiffness(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringSetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringSetRestAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedRotarySpringSetStiffness(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringGetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringGetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringGetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringGetRestLength(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringGetStiffness(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringSetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringSetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringSetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringSetRestLength(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpDampedSpringSetStiffness(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGearJointGetPhase(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGearJointGetRatio(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGearJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGearJointSetPhase(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGearJointSetRatio(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointGetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointGetGrooveA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointGetGrooveB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointSetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointSetGrooveA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpGrooveJointSetGrooveB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpMessage(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpMomentForBox(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpMomentForBox2(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpMomentForCircle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointGetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointGetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointGetDist(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointSetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointSetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPinJointSetDist(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointGetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointGetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointNew2(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointSetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPivotJointSetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPolyShapeGetCount(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPolyShapeGetRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpPolyShapeGetVert(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointGetAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointGetPhase(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointGetRatchet(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointSetAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointSetPhase(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRatchetJointSetRatchet(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRotaryLimitJointGetMax(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRotaryLimitJointGetMin(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRotaryLimitJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRotaryLimitJointSetMax(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpRotaryLimitJointSetMin(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeGetA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeGetB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeGetNormal(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeGetRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSegmentShapeSetNeighbors(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeCacheBB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeDestroy(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeFilterNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeFree(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetArea(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetBB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetCenterOfGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetCollisionType(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetDensity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetElasticity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetFilter(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetMass(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetMoment(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetSensor(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetSpace(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeGetSurfaceVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetCollisionType(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetDensity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetElasticity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetFilter(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetMass(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetSensor(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeSetSurfaceVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpShapeUpdate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSimpleMotorGetRate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSimpleMotorNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSimpleMotorSetRate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointGetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointGetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointGetMax(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointGetMin(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointSetAnchorA(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointSetAnchorB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointSetMax(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSlideJointSetMin(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceAddBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceAddConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceAddShape(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceContainsBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceContainsConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceContainsShape(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceDestroy(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceFree(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetCollisionBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetCollisionPersistence(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetCollisionSlop(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetCurrentTimeStep(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetIdleSpeedThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetSleepTimeThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceGetStaticBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceInit(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceIsLocked(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceReindexShape(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceReindexShapesForBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceReindexStatic(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceRemoveBody(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceRemoveConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceRemoveShape(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetCollisionBias(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetCollisionPersistence(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetCollisionSlop(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetIdleSpeedThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceSetSleepTimeThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceStep(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpSpaceUseSpatialHash(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformAxialScale(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformBoneScale(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformInverse(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformMult(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformNew(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformNewTranspose(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformOrtho(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformRigid(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformRigidInverse(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformRotate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformScale(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformTranslate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformVect(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformWrap(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformWrapInverse(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpTransformbBB(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpfabs(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpfclamp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpfclamp01(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpflerp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpflerpconst(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpfmax(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpfmin(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvadd(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvclamp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvcross(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvdist(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvdistsq(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvdot(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpveql(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvforangle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvlength(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvlengthsq(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvlerp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvlerpconst(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvmult(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvnear(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvneg(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvnormalize(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvperp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvproject(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvrotate(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvrperp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvslerp(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvslerpconst(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvsub(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvtoangle(JSContext *cx, uint32_t argc, jsval *vp);
bool JSB_cpvunrotate(JSContext *cx, uint32_t argc, jsval *vp);

#ifdef __cplusplus
}
#endif


#endif // JSB_INCLUDE_CHIPMUNK
