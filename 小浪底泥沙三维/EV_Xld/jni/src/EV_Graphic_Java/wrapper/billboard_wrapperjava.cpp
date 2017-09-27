/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/billboard.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_get_1mPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mPosition);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mPosition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_get_1mDirection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mDirection);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mDirection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mDirection = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_get_1mParentSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mParentSet);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mParentSet_1CBillboardSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mParentSet = (EarthView::World::Graphic::CBillboardSet*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_get_1mColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mColour);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mColour = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_get_1mRotation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mRotation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mRotation_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mRotation = *(EarthView::World::Spatial::Math::CRadian*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Billboard_get_1mVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mVisible);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mVisible = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Billboard_get_1mBeyondDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mBeyondDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_set_1mBeyondDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*)pObjXXXX;
				pObjectX->mBeyondDistance = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setRotation_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rotation_j)
			{
				const EarthView::World::Spatial::Math::CRadian &rotation = *(EarthView::World::Spatial::Math::CRadian*) rotation_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setRotation(rotation);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setPosition(position);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setPosition_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setPosition(x, y, z);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_getPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setDimensions(width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_resetDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->resetDimensions();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setColour(colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_getColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Billboard_hasOwnDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasOwnDimensions();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Billboard_getOwnWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				Real __values1 = pObjectX->getOwnWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Billboard_getOwnHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				Real __values1 = pObjectX->getOwnHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard__1notifyOwner_1CBillboardSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_owner_j)
			{
				EarthView::World::Graphic::CBillboardSet *ref_owner = (EarthView::World::Graphic::CBillboardSet*) ref_owner_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->_notifyOwner(ref_owner);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Billboard_isUseTexcoordRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				ev_bool __values1 = pObjectX->isUseTexcoordRect();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setTexcoordIndex_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint texcoordIndex_j)
			{
				ev_uint16 texcoordIndex = (ev_uint16) texcoordIndex_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setTexcoordIndex(texcoordIndex);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Billboard_getTexcoordIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getTexcoordIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setTexcoordRect_1FloatRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texcoordRect_j)
			{
				const EarthView::World::Graphic::FloatRect &texcoordRect = *(EarthView::World::Graphic::FloatRect*) texcoordRect_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setTexcoordRect(texcoordRect);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Billboard_setTexcoordRect_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble u0_j, jdouble v0_j, jdouble u1_j, jdouble v1_j)
			{
				Real u0 = (Real) u0_j;
				Real v0 = (Real) v0_j;
				Real u1 = (Real) u1_j;
				Real v1 = (Real) v1_j;
				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				pObjectX->setTexcoordRect(u0, v0, u1, v1);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Billboard_getTexcoordRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBillboard *pObjectX = (EarthView::World::Graphic::CBillboard*) pObjXXXX;
				const EarthView::World::Graphic::FloatRect& __values1 = pObjectX->getTexcoordRect();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
