/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/prefabfactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_PrefabFactory_createPrefab_1CMesh(JNIEnv *__env , jclass __clazz, jlong mesh_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				ev_bool __values1 = EarthView::World::Graphic::CPrefabFactory::createPrefab(mesh);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
