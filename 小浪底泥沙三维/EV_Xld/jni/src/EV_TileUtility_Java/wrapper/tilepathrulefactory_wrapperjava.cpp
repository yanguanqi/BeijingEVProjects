/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepathrulefactory.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilePathRuleFactory_createTilePathRule_1EVTileDataType_1EVTilePathType_1EVTileModeType(JNIEnv *__env , jclass __clazz, jint dataType_j, jint tilePathType_j, jint tileModeType_j)
			{
				EarthView::World::Spatial::EVTileDataType dataType = (EarthView::World::Spatial::EVTileDataType) dataType_j;
				EarthView::World::Spatial::EVTilePathType tilePathType = (EarthView::World::Spatial::EVTilePathType) tilePathType_j;
				EarthView::World::Spatial::EVTileModeType tileModeType = (EarthView::World::Spatial::EVTileModeType) tileModeType_j;
				EarthView::World::Spatial::CTilePathRule* __values1 = EarthView::World::Spatial::CTilePathRuleFactory::createTilePathRule(dataType, tilePathType, tileModeType);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
