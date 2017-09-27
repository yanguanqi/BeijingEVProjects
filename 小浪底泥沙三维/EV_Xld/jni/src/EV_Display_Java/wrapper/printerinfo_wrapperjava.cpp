/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printerinfo.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageInfo_get_1isPreDefine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->isPreDefine);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageInfo_set_1isPreDefine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				pObjectX->isPreDefine = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PageInfo_get_1evPageSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->evPageSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageInfo_set_1evPageSize_1EVPageSize(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				pObjectX->evPageSize = (EarthView::World::Spatial::Carto::EVPageSize)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_PageInfo_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageInfo_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageInfo_get_1width_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->width);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageInfo_set_1width_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				pObjectX->width = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageInfo_get_1height_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->height);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageInfo_set_1height_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Display::PageInfo *pObjectX = (EarthView::World::Display::PageInfo*)pObjXXXX;
				pObjectX->height = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_OperatorAssign_1CPrinterInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Display::CPrinterInfo& pObjectX = *(EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				const EarthView::World::Display::CPrinterInfo &other = *(EarthView::World::Display::CPrinterInfo*) other_j;
				pObjectX = other;
				EarthView::World::Display::CPrinterInfo& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_PrinterInfo_printerName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				EVString __values1 = pObjectX->printerName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrinterInfo_isDefault_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				bool __values1 = pObjectX->isDefault();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrinterInfo_getAvailablePrinters_1CStringArray(JNIEnv *__env , jclass __clazz, jlong printers_j)
			{
				EarthView::World::Core::CStringArray &printers = *(EarthView::World::Core::CStringArray*) printers_j;
				EarthView::World::Display::CPrinterInfo::getAvailablePrinters(printers);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_defaultPrinter_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Display::CPrinterInfo __values1 = EarthView::World::Display::CPrinterInfo::defaultPrinter();
				EarthView::World::Display::CPrinterInfo *returnvalues = new EarthView::World::Display::CPrinterInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedPaperSizesCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSupportedPaperSizesCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedPaperSize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				EarthView::World::Display::PageInfo __values1 = pObjectX->getSupportedPaperSize(index);
				EarthView::World::Display::PageInfo *returnvalues = new EarthView::World::Display::PageInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedPaperSourceCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSupportedPaperSourceCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedPaperSource_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPaperSource __values1 = pObjectX->getSupportedPaperSource(index);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedResolutionCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSupportedResolutionCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrinterInfo_getSupportedResolution_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Display::CPrinterInfo *pObjectX = (EarthView::World::Display::CPrinterInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSupportedResolution(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
