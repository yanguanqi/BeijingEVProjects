/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/RotorWash.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_RotorWash_Update_1CVector3_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPosition_j, jdouble pVelocity_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pPosition = *(EarthView::World::Spatial::Math::CVector3*) pPosition_j;
				double pVelocity = (double) pVelocity_j;
				EarthView::World::Spatial3D::RotorWash *pObjectX = (EarthView::World::Spatial3D::RotorWash*) pObjXXXX;
				pObjectX->Update(pPosition, pVelocity);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_RotorWash_GetPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::RotorWash *pObjectX = (EarthView::World::Spatial3D::RotorWash*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->GetPosition();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_RotorWash_GetVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::RotorWash *pObjectX = (EarthView::World::Spatial3D::RotorWash*) pObjXXXX;
				double __values1 = pObjectX->GetVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_RotorWash_OceanDestroyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::RotorWash *pObjectX = (EarthView::World::Spatial3D::RotorWash*) pObjXXXX;
				pObjectX->OceanDestroyed();
			}
		}
	}
}
