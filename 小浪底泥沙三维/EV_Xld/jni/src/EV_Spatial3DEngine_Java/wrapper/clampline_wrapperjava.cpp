/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/clampline.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_appendGeoObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->appendGeoObject(ref_geoObject);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->setVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->destroy();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_setRenderingMinDistance_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat min_j)
			{
				ev_real32 min = (ev_real32) min_j;
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->setRenderingMinDistance(min);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_setRenderingMaxDistance_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat max_j)
			{
				ev_real32 max = (ev_real32) max_j;
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->setRenderingMaxDistance(max);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_getRenderingMinDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getRenderingMinDistance();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_getRenderingMaxDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getRenderingMaxDistance();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_getRealExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* __values1 = pObjectX->getRealExtension();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ClampLineExtension_setSelectionColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				EarthView::World::Graphic::CColourValue color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Spatial3D::CClampLineExtension *pObjectX = (EarthView::World::Spatial3D::CClampLineExtension*) pObjXXXX;
				pObjectX->setSelectionColor(color);
			}
		}
	}
}
