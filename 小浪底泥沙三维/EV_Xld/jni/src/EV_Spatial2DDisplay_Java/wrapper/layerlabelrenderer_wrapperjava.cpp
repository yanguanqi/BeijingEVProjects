/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/layerlabelrenderer.h"
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
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LayerLabelRenderer_startDraw_1ISpatialDisplay_1IFeatureClass_1ITheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong fc_j, jlong pTheme_j, jstring filter_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::GeoDataset::IFeatureClass *fc = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) fc_j;
					EarthView::World::Spatial::Theme::ITheme *pTheme = (EarthView::World::Spatial::Theme::ITheme*) pTheme_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filter_ch = (const ev_char*)__env->GetStringUTFChars(filter_j,JNI_FALSE);
					const EVString filter = filter_ch;
					__env->ReleaseStringUTFChars(filter_j, (const char *)filter_ch);
					#else
					const ev_wchar* filter_ch = (const ev_wchar*)__env->GetStringChars(filter_j,JNI_FALSE);
					const EVString filter = filter_ch;
					__env->ReleaseStringChars(filter_j, (const jchar *)filter_ch);
					#endif
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjXXXX;
					pObjectX->startDraw(display, fc, pTheme, filter);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_renderer_LayerLabelRenderer_draw_1ILabelProperty(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLabelPorperty_j)
				{
					EarthView::World::Spatial::Display::ILabelProperty *pLabelPorperty = (EarthView::World::Spatial::Display::ILabelProperty*) pLabelPorperty_j;
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjXXXX;
					ev_bool __values1 = pObjectX->draw(pLabelPorperty);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_renderer_LayerLabelRenderer_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer *pObjectX = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjXXXX;
					pObjectX->endDraw();
				}
			}
		}
	}
}
