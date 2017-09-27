/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/star.h"
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
			namespace Effect3D
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Stars_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Effect3D::CStars *pObjectX = (EarthView::World::Spatial::Effect3D::CStars*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_effect3d_Stars_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Effect3D::CStars *pObjectX = (EarthView::World::Spatial::Effect3D::CStars*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_effect3d_Stars_setStarsBrightness_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble brightness_j)
				{
					Real brightness = (Real) brightness_j;
					EarthView::World::Spatial::Effect3D::CStars *pObjectX = (EarthView::World::Spatial::Effect3D::CStars*) pObjXXXX;
					pObjectX->setStarsBrightness(brightness);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_effect3d_Stars_getStarsBrightness_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Effect3D::CStars *pObjectX = (EarthView::World::Spatial::Effect3D::CStars*) pObjXXXX;
					Real __values1 = pObjectX->getStarsBrightness();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
		}
	}
}
