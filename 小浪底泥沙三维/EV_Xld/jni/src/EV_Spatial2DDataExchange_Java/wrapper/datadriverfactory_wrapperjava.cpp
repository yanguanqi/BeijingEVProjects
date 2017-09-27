/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/datadriverfactory.h"
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
			namespace Convertor
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_DataDriverFactory_createDriver_1EVDataDriverType(JNIEnv *__env , jclass __clazz, jint type_j)
				{
					EarthView::World::Spatial::Convertor::EVDataDriverType type = (EarthView::World::Spatial::Convertor::EVDataDriverType) type_j;
					EarthView::World::Spatial::Convertor::CDataDriver* __values1 = EarthView::World::Spatial::Convertor::CDataDriverFactory::createDriver(type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_DataDriverFactory_disposeDriver_1CDataDriver(JNIEnv *__env , jclass __clazz, jlong driver_j)
				{
					const EarthView::World::Spatial::Convertor::CDataDriver *driver = (const EarthView::World::Spatial::Convertor::CDataDriver*) driver_j;
					EarthView::World::Spatial::Convertor::CDataDriverFactory::disposeDriver(driver);
				}
			}
		}
	}
}
