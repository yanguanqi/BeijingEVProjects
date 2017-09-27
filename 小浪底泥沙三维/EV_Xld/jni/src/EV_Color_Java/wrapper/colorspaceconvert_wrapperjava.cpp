/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorspaceconvert.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Cieyxy_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = new EarthView::World::Spatial::Display::CCIEYxy();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cieyxy_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cieyxy_get_1Y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cieyxy_set_1Y_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					pObjectX->Y = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cieyxy_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cieyxy_set_1x_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					pObjectX->x = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cieyxy_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cieyxy_set_1y_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEYxy *pObjectX = (EarthView::World::Spatial::Display::CCIEYxy*)pObjXXXX;
					pObjectX->y = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ciexyz_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = new EarthView::World::Spatial::Display::CCIEXYZ();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciexyz_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciexyz_get_1X_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->X);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciexyz_set_1X_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					pObjectX->X = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciexyz_get_1Y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciexyz_set_1Y_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					pObjectX->Y = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciexyz_get_1Z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->Z);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciexyz_set_1Z_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIEXYZ *pObjectX = (EarthView::World::Spatial::Display::CCIEXYZ*)pObjXXXX;
					pObjectX->Z = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ciergb_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = new EarthView::World::Spatial::Display::CCIERGB();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciergb_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciergb_get_1R_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->R);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciergb_set_1R_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					pObjectX->R = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciergb_get_1G_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->G);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciergb_set_1G_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					pObjectX->G = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ciergb_get_1B_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->B);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ciergb_set_1B_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIERGB *pObjectX = (EarthView::World::Spatial::Display::CCIERGB*)pObjXXXX;
					pObjectX->B = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Cielab_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = new EarthView::World::Spatial::Display::CCIELab();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cielab_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cielab_get_1L_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->L);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cielab_set_1L_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					pObjectX->L = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cielab_get_1a_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->a);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cielab_set_1a_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					pObjectX->a = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Cielab_get_1b_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->b);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Cielab_set_1b_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Display::CCIELab *pObjectX = (EarthView::World::Spatial::Display::CCIELab*)pObjXXXX;
					pObjectX->b = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_setMonitorParameter_1CMonitorParameter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					EarthView::World::Spatial::Display::CMonitorParameter *param = (EarthView::World::Spatial::Display::CMonitorParameter*) param_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->setMonitorParameter(param);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_getMonitorParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					EarthView::World::Spatial::Display::CMonitorParameter* __values1 = pObjectX->getMonitorParameter();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_CIELabToRGB_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble CIELab_L_j, jdouble CIELab_a_j, jdouble CIELab_b_j, jlong RGB_r_j, jlong RGB_g_j, jlong RGB_b_j)
				{
					ev_real64 CIELab_L = (ev_real64) CIELab_L_j;
					ev_real64 CIELab_a = (ev_real64) CIELab_a_j;
					ev_real64 CIELab_b = (ev_real64) CIELab_b_j;
					ev_uint8 &RGB_r = *(ev_uint8*) RGB_r_j;
					ev_uint8 &RGB_g = *(ev_uint8*) RGB_g_j;
					ev_uint8 &RGB_b = *(ev_uint8*) RGB_b_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->CIELabToRGB(CIELab_L, CIELab_a, CIELab_b, RGB_r, RGB_g, RGB_b);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_rgbToCIELab_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint RGB_r_j, jint RGB_g_j, jint RGB_b_j, jlong CIELab_L_j, jlong CIELab_a_j, jlong CIELab_b_j)
				{
					ev_int32 RGB_r = (ev_int32) RGB_r_j;
					ev_int32 RGB_g = (ev_int32) RGB_g_j;
					ev_int32 RGB_b = (ev_int32) RGB_b_j;
					ev_real64 &CIELab_L = *(ev_real64*) CIELab_L_j;
					ev_real64 &CIELab_a = *(ev_real64*) CIELab_a_j;
					ev_real64 &CIELab_b = *(ev_real64*) CIELab_b_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->rgbToCIELab(RGB_r, RGB_g, RGB_b, CIELab_L, CIELab_a, CIELab_b);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_CIELabToHsv_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble L_j, jdouble a_j, jdouble b_j, jlong h_j, jlong s_j, jlong v_j)
				{
					ev_real64 L = (ev_real64) L_j;
					ev_real64 a = (ev_real64) a_j;
					ev_real64 b = (ev_real64) b_j;
					ev_real64 &h = *(ev_real64*) h_j;
					ev_real64 &s = *(ev_real64*) s_j;
					ev_real64 &v = *(ev_real64*) v_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->CIELabToHsv(L, a, b, h, s, v);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_hsvToCIELab_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble h_j, jdouble s_j, jdouble v_j, jlong L_j, jlong a_j, jlong b_j)
				{
					ev_real64 h = (ev_real64) h_j;
					ev_real64 s = (ev_real64) s_j;
					ev_real64 v = (ev_real64) v_j;
					ev_real64 &L = *(ev_real64*) L_j;
					ev_real64 &a = *(ev_real64*) a_j;
					ev_real64 &b = *(ev_real64*) b_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->hsvToCIELab(h, s, v, L, a, b);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_rgbToHsv_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint RGB_r_j, jint RGB_g_j, jint RGB_b_j, jlong Hsv_h_j, jlong Hsv_s_j, jlong Hsv_v_j)
				{
					ev_int32 RGB_r = (ev_int32) RGB_r_j;
					ev_int32 RGB_g = (ev_int32) RGB_g_j;
					ev_int32 RGB_b = (ev_int32) RGB_b_j;
					ev_real64 &Hsv_h = *(ev_real64*) Hsv_h_j;
					ev_real64 &Hsv_s = *(ev_real64*) Hsv_s_j;
					ev_real64 &Hsv_v = *(ev_real64*) Hsv_v_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->rgbToHsv(RGB_r, RGB_g, RGB_b, Hsv_h, Hsv_s, Hsv_v);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_hsvToRGB_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble Hsv_h_j, jdouble Hsv_s_j, jdouble Hsv_v_j, jlong RGB_r_j, jlong RGB_g_j, jlong RGB_b_j)
				{
					ev_real64 Hsv_h = (ev_real64) Hsv_h_j;
					ev_real64 Hsv_s = (ev_real64) Hsv_s_j;
					ev_real64 Hsv_v = (ev_real64) Hsv_v_j;
					ev_int32 &RGB_r = *(ev_int32*) RGB_r_j;
					ev_int32 &RGB_g = *(ev_int32*) RGB_g_j;
					ev_int32 &RGB_b = *(ev_int32*) RGB_b_j;
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					pObjectX->hsvToRGB(Hsv_h, Hsv_s, Hsv_v, RGB_r, RGB_g, RGB_b);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ColorSpaceConvert_canConvert_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert *pObjectX = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjXXXX;
					ev_bool __values1 = pObjectX->canConvert();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
