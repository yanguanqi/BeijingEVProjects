/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/imagerender.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_load_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j)
			{
				EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->load(ref_device);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_load_1IPaintDevice_1IDisplayOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j, jlong ref_displayOptions_j)
			{
				EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
				EarthView::World::Display::IDisplayOptions *ref_displayOptions = (EarthView::World::Display::IDisplayOptions*) ref_displayOptions_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->load(ref_device, ref_displayOptions);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->unload();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offsetX_j, jdouble offsetY_j)
			{
				ev_real64 offsetX = (ev_real64) offsetX_j;
				ev_real64 offsetY = (ev_real64) offsetY_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->translate(offsetX, offsetY);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_scale_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scaleX_j, jdouble scaleY_j)
			{
				ev_real64 scaleX = (ev_real64) scaleX_j;
				ev_real64 scaleY = (ev_real64) scaleY_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->scale(scaleX, scaleY);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_rotate_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
			{
				ev_real64 angle = (ev_real64) angle_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->rotate(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_rotateAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
			{
				ev_real64 angle = (ev_real64) angle_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->rotateAt(angle, x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_setClip_1CDataPath(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j)
			{
				EarthView::World::Display::CDataPath *path = (EarthView::World::Display::CDataPath*) path_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->setClip(path);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_setClip_1CDataRegion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong region_j)
			{
				EarthView::World::Display::CDataRegion *region = (EarthView::World::Display::CDataRegion*) region_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->setClip(region);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jlong destExt_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, destExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1IEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jlong destExt_j, jlong srcExt_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *srcExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) srcExt_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, destExt, srcExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jdouble x_j, jdouble y_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jdouble x_j, jdouble y_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, x, y, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1IBitmap_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(bmp, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawImage_1CMetaFile_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong metafile_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::CMetaFile *metafile = (EarthView::World::Display::CMetaFile*) metafile_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawImage(metafile, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_ImageRender_drawCacheBitmap_1ICachedBitmap_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jdouble x_j, jdouble y_j)
			{
				EarthView::World::Display::ICachedBitmap *bmp = (EarthView::World::Display::ICachedBitmap*) bmp_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CImageRender *pObjectX = (EarthView::World::Display::CImageRender*) pObjXXXX;
				pObjectX->drawCacheBitmap(bmp, x, y);
			}
		}
	}
}
