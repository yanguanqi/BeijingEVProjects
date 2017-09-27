/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldatadriverfactory.h"
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
			namespace DataExchange
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataDriverFactory_createDriver_1EVModelDataDriverType(JNIEnv *__env , jclass __clazz, jint type_j)
				{
					EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType type = (EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType) type_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver* __values1 = EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory::createDriver(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataDriverFactory_disposeDriver_1CModelDataDriver(JNIEnv *__env , jclass __clazz, jlong driver_j)
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataDriver *driver = (const EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) driver_j;
					EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory::disposeDriver(driver);
				}
			}
		}
	}
}
