/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/serverlayerinfo.h"
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_get_1strType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_set_1strType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_get_1strFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strFormat;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_set_1strFormat_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strFormat = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_get_1strHref_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strHref;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_set_1strHref_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strHref = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcmetadataurlinfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo *pObjectX = (EarthView::World::Spatial::COGCMetaDataURLInfo*) pObjXXXX;
				EarthView::World::Spatial::COGCMetaDataURLInfo* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebserviceboundingbox_getSRSName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceBoundingBox *pObjectX = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjXXXX;
				const EVString& __values1 = pObjectX->getSRSName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_Ogcwebserviceboundingbox_getResX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceBoundingBox *pObjectX = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getResX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_Ogcwebserviceboundingbox_getResY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceBoundingBox *pObjectX = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getResY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebserviceboundingbox_getBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceBoundingBox *pObjectX = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getBoundingBox();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebserviceboundingbox_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceBoundingBox *pObjectX = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjXXXX;
				EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1strFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strFormat;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1strFormat_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strFormat = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1strHref_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->strHref;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1strHref_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->strHref = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1pdfMinScaleDenominator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pdfMinScaleDenominator);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1pdfMinScaleDenominator_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				pObjectX->pdfMinScaleDenominator = (ev_real64*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1pdfMaxScaleDenominator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pdfMaxScaleDenominator);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1pdfMaxScaleDenominator_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				pObjectX->pdfMaxScaleDenominator = (ev_real64*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1pnWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pnWidth);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1pnWidth_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				pObjectX->pnWidth = (ev_uint32*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_get_1pnHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pnHeight);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_set_1pnHeight_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjXXXX;
				pObjectX->pnHeight = (ev_uint32*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_getMinScaleDenominator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjXXXX;
				const ev_real64* __values1 = pObjectX->getMinScaleDenominator();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_getMaxScaleDenominator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjXXXX;
				const ev_real64* __values1 = pObjectX->getMaxScaleDenominator();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjXXXX;
				const ev_uint32* __values1 = pObjectX->getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjXXXX;
				const ev_uint32* __values1 = pObjectX->getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicelegendurl_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL *pObjectX = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjXXXX;
				EarthView::World::Spatial::COGCWebServiceLegendURL* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getKeywordCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getLegendURLCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLegendURLCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getStyleSheetURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getStyleSheetURL();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_isDefault_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const ev_bool* __values1 = pObjectX->isDefault();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EVString __values1 = pObjectX->getTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EVString __values1 = pObjectX->getAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getKeyword_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeyword(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getLegendURLRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceLegendURL* __values1 = pObjectX->getLegendURLRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_getStyleSheetURLRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* __values1 = pObjectX->getStyleSheetURLRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwebservicestyle_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWebServiceStyle *pObjectX = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjXXXX;
				EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCServerLayerInfoProxy : public EarthView::World::Spatial::CServerLayerInfo
			{
			 private:
				EarthView::World::Core::ev_string m_getDataFormat_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getDataFormatCount_void_callback;
				EarthView::World::Core::ev_string m_getInfoFormat_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getInfoFormatCount_void_callback;
				EarthView::World::Core::ev_string m_getBoundingBoxCount_void_callback;
				EarthView::World::Core::ev_string m_getBoundingBoxRef_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getStyleCount_void_callback;
				EarthView::World::Core::ev_string m_getStyle_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getStyleDetailsRef_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getDatasetType_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
				EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
			public:
				JCServerLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CServerLayerInfo(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getDataFormat_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataFormat_ev_uint32_callback = __method;
				}
				void register_getDataFormatCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataFormatCount_void_callback = __method;
				}
				void register_getInfoFormat_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInfoFormat_ev_uint32_callback = __method;
				}
				void register_getInfoFormatCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInfoFormatCount_void_callback = __method;
				}
				void register_getBoundingBoxCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBoundingBoxCount_void_callback = __method;
				}
				void register_getBoundingBoxRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBoundingBoxRef_ev_uint32_callback = __method;
				}
				void register_getStyleCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyleCount_void_callback = __method;
				}
				void register_getStyle_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyle_ev_uint32_callback = __method;
				}
				void register_getStyleDetailsRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStyleDetailsRef_ev_uint32_callback = __method;
				}
				void register_getDatasetType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetType_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEnvelopeRef_void_callback = __method;
				}
				void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpatialReference_void_callback = __method;
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getName();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if (this->_gRef != NULL && this->m_getDatasetType_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDatasetType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getDatasetType();
					}
				}
				virtual const EVString getDataFormat(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getDataFormat_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getDataFormat_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getDataFormat(index);
					}
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if (this->_gRef != NULL && this->m_getDataFormatCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDataFormatCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getDataFormatCount();
					}
				}
				virtual const EVString getInfoFormat(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getInfoFormat_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getInfoFormat_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getInfoFormat(index);
					}
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if (this->_gRef != NULL && this->m_getInfoFormatCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInfoFormatCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getInfoFormatCount();
					}
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if (this->_gRef != NULL && this->m_getBoundingBoxCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getBoundingBoxCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getBoundingBoxCount();
					}
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getBoundingBoxRef_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getBoundingBoxRef_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::COGCWebServiceBoundingBox *__values1 = (const EarthView::World::Spatial::COGCWebServiceBoundingBox*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getBoundingBoxRef(index);
					}
				}
				virtual ev_uint32 getStyleCount() const
				{
					if (this->_gRef != NULL && this->m_getStyleCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStyleCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getStyleCount();
					}
				}
				virtual const EVString getStyle(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getStyle_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getStyle_ev_uint32_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getStyle(index);
					}
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getStyleDetailsRef_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getStyleDetailsRef_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::COGCWebServiceStyle *__values1 = (const EarthView::World::Spatial::COGCWebServiceStyle*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getStyleDetailsRef(index);
					}
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getEnvelopeRef();
					}
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CServerLayerInfo::getSpatialReference();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCServerLayerInfoProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDatasetType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDatasetType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				EarthView::World::Spatial::EVServerLayerInfoType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getLayerName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getLayerName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getLayerTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getLayerTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getLayerTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLayerTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getLayerAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLayerAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getLayerAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getLayerAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDataFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDataFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getDataFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getDataFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataFormat_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataFormat_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDataFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDataFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDataFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDataFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getDataFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getDataFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataFormatCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataFormatCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getDataFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getDataFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getInfoFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getInfoFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getInfoFormat(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getInfoFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInfoFormat_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInfoFormat_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getInfoFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getInfoFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getInfoFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getInfoFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getInfoFormatCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getInfoFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInfoFormatCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInfoFormatCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getInfoFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getInfoFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getKeywords_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeywords(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getKeywordsCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordsCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getBoundingBoxCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getBoundingBoxCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getBoundingBoxCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBoundingBoxCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingBoxCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getBoundingBoxCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getBoundingBoxRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->getBoundingBoxRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getBoundingBoxRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBoundingBoxRef_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingBoxRef_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getBoundingBoxRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getStyleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getStyleCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyleCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyleCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyleCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyle(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getStyle(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getStyle_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyle_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyle_ev_uint32_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyle_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyleDetailsRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCServerLayerInfoProxy))
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyleDetailsRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->getStyleDetailsRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getStyleDetailsRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStyleDetailsRef_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStyleDetailsRef_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_getStyleDetailsRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CServerLayerInfo *pObjectX = (EarthView::World::Spatial::CServerLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWebServiceStyle* __values1 = pObjectX->EarthView::World::Spatial::CServerLayerInfo::getStyleDetailsRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEnvelopeRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerLayerInfo_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCServerLayerInfoProxy *pObjectX = (JCServerLayerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpatialReference_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
