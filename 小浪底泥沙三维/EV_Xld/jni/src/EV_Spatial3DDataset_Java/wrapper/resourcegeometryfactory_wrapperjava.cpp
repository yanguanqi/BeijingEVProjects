/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/resourcegeometryfactory.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ResourceGeometryFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* __values1 = EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ResourceGeometryFactory_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory::releaseSingleton();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ResourceGeometryFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CResourceGeometry* __values1 = pObjectX->createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ResourceGeometryFactory_releaseInstance_1CResourceGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometry *geom = (EarthView::World::Spatial3D::Dataset::CResourceGeometry*) geom_j;
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory*) pObjXXXX;
					pObjectX->releaseInstance(geom);
				}
			}
		}
	}
}
