/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particle.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Particle_00024ParticleTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CParticle::Visual,
					CParticle::Emitter
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Particle_get_1mOwnDimensions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mOwnDimensions);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1mOwnDimensions_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->mOwnDimensions = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_get_1mWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mWidth);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1mWidth_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->mWidth = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_get_1mHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mHeight);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1mHeight_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->mHeight = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_get_1mRotation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mRotation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1mRotation_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->mRotation = *(EarthView::World::Spatial::Math::CRadian*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_get_1position_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->position);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1position_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->position = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_get_1direction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->direction);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1direction_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->direction = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_get_1colour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->colour);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1colour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->colour = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_get_1timeToLive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->timeToLive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1timeToLive_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->timeToLive = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_get_1totalTimeToLive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->totalTimeToLive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1totalTimeToLive_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->totalTimeToLive = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_get_1rotationSpeed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->rotationSpeed);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1rotationSpeed_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->rotationSpeed = *(EarthView::World::Spatial::Math::CRadian*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Particle_get_1particleType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->particleType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1particleType_1ParticleType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->particleType = (EarthView::World::Graphic::CParticle::ParticleType)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Particle_get_1visible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->visible);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_set_1visible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*)pObjXXXX;
				pObjectX->visible = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_setDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				pObjectX->setDimensions(width, height);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Particle_hasOwnDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasOwnDimensions();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_getOwnWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				Real __values1 = pObjectX->getOwnWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Particle_getOwnHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				Real __values1 = pObjectX->getOwnHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_setRotation_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rad_j)
			{
				const EarthView::World::Spatial::Math::CRadian &rad = *(EarthView::World::Spatial::Math::CRadian*) rad_j;
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				pObjectX->setRotation(rad);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle__1notifyOwner_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_owner_j)
			{
				EarthView::World::Graphic::CParticleSystem *ref_owner = (EarthView::World::Graphic::CParticleSystem*) ref_owner_j;
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				pObjectX->_notifyOwner(ref_owner);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle__1notifyVisualData_1CParticleVisualData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_vis_j)
			{
				EarthView::World::Graphic::CParticleVisualData *ref_vis = (EarthView::World::Graphic::CParticleVisualData*) ref_vis_j;
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				pObjectX->_notifyVisualData(ref_vis);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_getVisualData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				EarthView::World::Graphic::CParticleVisualData* __values1 = pObjectX->getVisualData();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Particle_resetDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				pObjectX->resetDimensions();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Particle_getParentSystem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticle *pObjectX = (EarthView::World::Graphic::CParticle*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* __values1 = pObjectX->getParentSystem();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
