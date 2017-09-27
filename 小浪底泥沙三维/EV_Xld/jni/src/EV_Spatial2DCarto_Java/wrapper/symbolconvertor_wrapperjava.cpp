/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/symbolconvertor.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_SymbolConvertor_resetLineSymbolWidth_1CLineSymbol_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pLineSymbol_j, jdouble dPageScale_j)
				{
					EarthView::World::Spatial::Display::CLineSymbol *pLineSymbol = (EarthView::World::Spatial::Display::CLineSymbol*) pLineSymbol_j;
					ev_real64 dPageScale = (ev_real64) dPageScale_j;
					EarthView::World::Spatial::Carto::CSymbolConvertor *pObjectX = (EarthView::World::Spatial::Carto::CSymbolConvertor*) pObjXXXX;
					EarthView::World::Spatial::Display::CLineSymbol* __values1 = pObjectX->resetLineSymbolWidth(pLineSymbol, dPageScale);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_SymbolConvertor_resetTextSymbolSize_1CTextSymbol_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTextSymbol_j, jdouble dPageScale_j)
				{
					EarthView::World::Spatial::Display::CTextSymbol *pTextSymbol = (EarthView::World::Spatial::Display::CTextSymbol*) pTextSymbol_j;
					ev_real64 dPageScale = (ev_real64) dPageScale_j;
					EarthView::World::Spatial::Carto::CSymbolConvertor *pObjectX = (EarthView::World::Spatial::Carto::CSymbolConvertor*) pObjXXXX;
					EarthView::World::Spatial::Display::CTextSymbol* __values1 = pObjectX->resetTextSymbolSize(pTextSymbol, dPageScale);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
