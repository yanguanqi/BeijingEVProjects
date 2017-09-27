/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/positioncolor.h"
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
			namespace KmlManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_PositionColor_get_1Position_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor *pObjectX = (EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->Position);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_PositionColor_set_1Position_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor *pObjectX = (EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjXXXX;
					pObjectX->Position = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_PositionColor_get_1Color_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor *pObjectX = (EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->Color);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_PositionColor_set_1Color_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor *pObjectX = (EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjXXXX;
					pObjectX->Color = *(EarthView::World::Graphic::CColourValue*) __values1_j;
				}
			}
		}
	}
}
