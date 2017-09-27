/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/pagesize.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageSize_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEmpty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageSize_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageSize_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				ev_real64 __values1 = pObjectX->width();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageSize_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				ev_real64 __values1 = pObjectX->height();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageSize_setWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j)
			{
				ev_real64 w = (ev_real64) w_j;
				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				pObjectX->setWidth(w);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageSize_setHeight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble h_j)
			{
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				pObjectX->setHeight(h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageSize_scale_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j, jdouble h_j)
			{
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				pObjectX->scale(w, h);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageSize_expandedTo_1CPageSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Display::CPageSize &other = *(EarthView::World::Display::CPageSize*) other_j;
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				EarthView::World::Display::CPageSize __values1 = pObjectX->expandedTo(other);
				EarthView::World::Display::CPageSize *returnvalues = new EarthView::World::Display::CPageSize(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageSize_boundedTo_1CPageSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Display::CPageSize &other = *(EarthView::World::Display::CPageSize*) other_j;
				const 				EarthView::World::Display::CPageSize *pObjectX = (EarthView::World::Display::CPageSize*) pObjXXXX;
				EarthView::World::Display::CPageSize __values1 = pObjectX->boundedTo(other);
				EarthView::World::Display::CPageSize *returnvalues = new EarthView::World::Display::CPageSize(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
