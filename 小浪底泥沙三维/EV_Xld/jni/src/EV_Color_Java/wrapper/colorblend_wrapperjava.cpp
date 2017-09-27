/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorblend.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorBlend_setBlendOperationMode_1EVColorBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Display::EVColorBlendOperation mode = (EarthView::World::Spatial::Display::EVColorBlendOperation) mode_j;
					EarthView::World::Spatial::Display::CColorBlend *pObjectX = (EarthView::World::Spatial::Display::CColorBlend*) pObjXXXX;
					pObjectX->setBlendOperationMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ColorBlend_getBlendOperationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CColorBlend *pObjectX = (EarthView::World::Spatial::Display::CColorBlend*) pObjXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = pObjectX->getBlendOperationMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorBlend_getBlendResult_1IColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong arg1_j, jlong arg2_j)
				{
					const EarthView::World::Spatial::Display::IColor *arg1 = (const EarthView::World::Spatial::Display::IColor*) arg1_j;
					const EarthView::World::Spatial::Display::IColor *arg2 = (const EarthView::World::Spatial::Display::IColor*) arg2_j;
					const 					EarthView::World::Spatial::Display::CColorBlend *pObjectX = (EarthView::World::Spatial::Display::CColorBlend*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBlendResult(arg1, arg2);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
