/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/pageunitconverter.h"
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
			namespace Carto
			{
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_PageUnitConverter_othersUnitToPixel_1EVPageUnits_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pageUnits_j, jdouble dValue_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits pageUnits = (EarthView::World::Spatial::Carto::EVPageUnits) pageUnits_j;
					ev_real64 dValue = (ev_real64) dValue_j;
					EarthView::World::Spatial::Carto::CPageUnitConverter *pObjectX = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->othersUnitToPixel(pageUnits, dValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_PageUnitConverter_pixelToOthersUnit_1EVPageUnits_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pageUnits_j, jdouble dValue_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits pageUnits = (EarthView::World::Spatial::Carto::EVPageUnits) pageUnits_j;
					ev_real64 dValue = (ev_real64) dValue_j;
					EarthView::World::Spatial::Carto::CPageUnitConverter *pObjectX = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->pixelToOthersUnit(pageUnits, dValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_PageUnitConverter_getPageUnitString_1EVPageUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint lengthUnit_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits lengthUnit = (EarthView::World::Spatial::Carto::EVPageUnits) lengthUnit_j;
					EarthView::World::Spatial::Carto::CPageUnitConverter *pObjectX = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjXXXX;
					EVString __values1 = pObjectX->getPageUnitString(lengthUnit);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_PageUnitConverter_getPageUnitType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strUnit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strUnit_ch = (const ev_char*)__env->GetStringUTFChars(strUnit_j,JNI_FALSE);
					EVString strUnit = strUnit_ch;
					__env->ReleaseStringUTFChars(strUnit_j, (const char *)strUnit_ch);
					#else
					const ev_wchar* strUnit_ch = (const ev_wchar*)__env->GetStringChars(strUnit_j,JNI_FALSE);
					EVString strUnit = strUnit_ch;
					__env->ReleaseStringChars(strUnit_j, (const jchar *)strUnit_ch);
					#endif
					EarthView::World::Spatial::Carto::CPageUnitConverter *pObjectX = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits __values1 = pObjectX->getPageUnitType(strUnit);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
