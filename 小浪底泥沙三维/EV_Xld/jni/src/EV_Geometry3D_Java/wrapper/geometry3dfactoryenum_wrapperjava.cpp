/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dfactoryenum.h"
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
			namespace Atlas
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_Geometry3DFactoryEnum_registerFactory_1IGeometry3DFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory *factory = (EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*) factory_j;
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum *pObjectX = (EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum*) pObjXXXX;
					ev_bool __values1 = pObjectX->registerFactory(factory);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Geometry3DFactoryEnum_getFactory_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					ev_uint16 type = (ev_uint16) type_j;
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum *pObjectX = (EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* __values1 = pObjectX->getFactory(type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_Geometry3DFactoryEnum_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum* __values1 = EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
