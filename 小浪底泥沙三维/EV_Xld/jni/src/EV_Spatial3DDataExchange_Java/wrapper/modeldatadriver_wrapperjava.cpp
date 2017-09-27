/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldatadriver.h"
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataexchange_ModelDataDriver_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver *pObjectX = (EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) pObjXXXX;
					EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
