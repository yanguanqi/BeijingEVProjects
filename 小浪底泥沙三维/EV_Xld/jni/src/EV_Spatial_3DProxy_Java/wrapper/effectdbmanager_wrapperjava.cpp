/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effectdbmanager.h"
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
			namespace EffectManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_EffectDBManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial3DProxy::CEffectDBManager* __values1 = EarthView::World::Spatial3DProxy::CEffectDBManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_EffectDBManager_getStringInterface_1CEffectObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Spatial3D::EffectManager::CEffectObject *obj = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) obj_j;
				EarthView::World::Spatial3DProxy::CEffectDBManager *pObjectX = (EarthView::World::Spatial3DProxy::CEffectDBManager*) pObjXXXX;
				EarthView::World::Core::CStringInterface* __values1 = pObjectX->getStringInterface(obj);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
