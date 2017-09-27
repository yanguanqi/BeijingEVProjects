/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geodetictheme.h"
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
			namespace Utility
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_GeodeticTheme_gaussSeriesForward_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lon1_j, jdouble lat1_j, jdouble pazi1_j, jdouble s12_j, jlong lon2_j, jlong lat2_j, jlong pazi2_j)
				{
					ev_real64 lon1 = (ev_real64) lon1_j;
					ev_real64 lat1 = (ev_real64) lat1_j;
					ev_real64 pazi1 = (ev_real64) pazi1_j;
					ev_real64 s12 = (ev_real64) s12_j;
					ev_real64 &lon2 = *(ev_real64*) lon2_j;
					ev_real64 &lat2 = *(ev_real64*) lat2_j;
					ev_real64 &pazi2 = *(ev_real64*) pazi2_j;
					EarthView::World::Spatial::Utility::CGeodeticTheme *pObjectX = (EarthView::World::Spatial::Utility::CGeodeticTheme*) pObjXXXX;
					pObjectX->gaussSeriesForward(lon1, lat1, pazi1, s12, lon2, lat2, pazi2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_GeodeticTheme_gaussSeriesBackward_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lon1_j, jdouble lat1_j, jdouble lon2_j, jdouble lat2_j, jlong pazi1_j, jlong pazi2_j, jlong s12_j)
				{
					ev_real64 lon1 = (ev_real64) lon1_j;
					ev_real64 lat1 = (ev_real64) lat1_j;
					ev_real64 lon2 = (ev_real64) lon2_j;
					ev_real64 lat2 = (ev_real64) lat2_j;
					ev_real64 &pazi1 = *(ev_real64*) pazi1_j;
					ev_real64 &pazi2 = *(ev_real64*) pazi2_j;
					ev_real64 &s12 = *(ev_real64*) s12_j;
					EarthView::World::Spatial::Utility::CGeodeticTheme *pObjectX = (EarthView::World::Spatial::Utility::CGeodeticTheme*) pObjXXXX;
					pObjectX->gaussSeriesBackward(lon1, lat1, lon2, lat2, pazi1, pazi2, s12);
				}
			}
		}
	}
}
