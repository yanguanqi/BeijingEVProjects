/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/workcommand.h"
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
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommand_getData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommand *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommand*) pObjXXXX;
					EarthView::World::Core::CBaseObject* __values1 = pObjectX->getData();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommand_setData_1CBaseObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_data_j)
				{
					EarthView::World::Core::CBaseObject *ref_data = (EarthView::World::Core::CBaseObject*) ref_data_j;
					EarthView::World::Spatial::GeoDataset::CWorkCommand *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommand*) pObjXXXX;
					pObjectX->setData(ref_data);
				}
			}
		}
	}
}
