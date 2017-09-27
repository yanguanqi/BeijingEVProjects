/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtslayerinfo.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_setIdentifier_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				pObjectX->setIdentifier(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_setMinTileRow_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				pObjectX->setMinTileRow(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_getMinTileRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinTileRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_setMaxTileRow_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				pObjectX->setMaxTileRow(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_getMaxTileRow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxTileRow();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_setMinTileCol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				pObjectX->setMinTileCol(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_getMinTileCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMinTileCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_setMaxTileCol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				pObjectX->setMaxTileCol(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_getMaxTileCol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxTileCol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixlimits_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixLimits *pObjectX = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjXXXX;
				EarthView::World::Spatial::COGCTileMatrixLimits* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixsetlink_getTileMatrixSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCTileMatrixSetLink *pObjectX = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTileMatrixSet();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixsetlink_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCTileMatrixSetLink *pObjectX = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjXXXX;
				EarthView::World::Spatial::COGCTileMatrixSetLink* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixsetlink_getTileMatrixLimitsCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCTileMatrixSetLink *pObjectX = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTileMatrixLimitsCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogctilematrixsetlink_getTileMatrixLimitsRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCTileMatrixSetLink *pObjectX = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjXXXX;
				const EarthView::World::Spatial::COGCTileMatrixLimits* __values1 = pObjectX->getTileMatrixLimitsRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_setFormat_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				pObjectX->setFormat(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_getFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFormat();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_setResourceType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				pObjectX->setResourceType(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_getResourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getResourceType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_setTemplate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				pObjectX->setTemplate(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_getTemplate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTemplate();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcresourceurl_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCResourceURL *pObjectX = (EarthView::World::Spatial::COGCResourceURL*) pObjXXXX;
				EarthView::World::Spatial::COGCResourceURL* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getUOM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUOM();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getUnitSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUnitSymbol();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getDefault_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getDefault();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_isCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const ev_bool* __values1 = pObjectX->isCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getKeyword_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeyword(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getKeywordCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getValue(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_getValueCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getValueCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsdimensioninfo_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMTSDimensionInfo *pObjectX = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjXXXX;
				EarthView::World::Spatial::COGCWMTSDimensionInfo* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCWMTSLayerInfoProxy : public EarthView::World::Spatial::CWMTSLayerInfo
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
				JCWMTSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSLayerInfo(pList)
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
						return this->CWMTSLayerInfo::getEnvelopeRef();
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
						return this->CWMTSLayerInfo::getSpatialReference();
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
						return this->CWMTSLayerInfo::getDataFormat(index);
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
						return this->CWMTSLayerInfo::getDataFormatCount();
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
						return this->CWMTSLayerInfo::getInfoFormat(index);
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
						return this->CWMTSLayerInfo::getInfoFormatCount();
					}
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
						return this->CWMTSLayerInfo::getName();
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
						return this->CWMTSLayerInfo::getDatasetType();
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
						return this->CWMTSLayerInfo::getBoundingBoxCount();
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
						return this->CWMTSLayerInfo::getBoundingBoxRef(index);
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
						return this->CWMTSLayerInfo::getStyleCount();
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
						return this->CWMTSLayerInfo::getStyle(index);
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
						return this->CWMTSLayerInfo::getStyleDetailsRef(index);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWMTSLayerInfoProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getEnvelopeRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getSpatialReference();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDataFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormat(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getDataFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDataFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDataFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormatCount();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getDataFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDataFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getInfoFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormat(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getInfoFormat_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getInfoFormat_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getInfoFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSLayerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormatCount();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getInfoFormatCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getInfoFormatCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getMetaData_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getMetaData(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getMetaDataCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMetaDataCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getResourceURL_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCResourceURL* __values1 = pObjectX->getResourceURL(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getResourceURLCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getResourceURLCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDimensionInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* __values1 = pObjectX->getDimensionInfo(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getDimensionInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDimensionInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getTileMatrixSetLinkCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTileMatrixSetLinkCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getTileMatrixSetLinkRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCTileMatrixSetLink* __values1 = pObjectX->getTileMatrixSetLinkRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getTileMatrixSetLinkRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tilematrixset_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* tilematrixset_ch = (const ev_char*)__env->GetStringUTFChars(tilematrixset_j,JNI_FALSE);
				const EVString tilematrixset = tilematrixset_ch;
				__env->ReleaseStringUTFChars(tilematrixset_j, (const char *)tilematrixset_ch);
				#else
				const ev_wchar* tilematrixset_ch = (const ev_wchar*)__env->GetStringChars(tilematrixset_j,JNI_FALSE);
				const EVString tilematrixset = tilematrixset_ch;
				__env->ReleaseStringChars(tilematrixset_j, (const jchar *)tilematrixset_ch);
				#endif
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::COGCTileMatrixSetLink* __values1 = pObjectX->getTileMatrixSetLinkRef(tilematrixset);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_getTileMatrixSetRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tilematrixset_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* tilematrixset_ch = (const ev_char*)__env->GetStringUTFChars(tilematrixset_j,JNI_FALSE);
				const EVString tilematrixset = tilematrixset_ch;
				__env->ReleaseStringUTFChars(tilematrixset_j, (const char *)tilematrixset_ch);
				#else
				const ev_wchar* tilematrixset_ch = (const ev_wchar*)__env->GetStringChars(tilematrixset_j,JNI_FALSE);
				const EVString tilematrixset = tilematrixset_ch;
				__env->ReleaseStringChars(tilematrixset_j, (const jchar *)tilematrixset_ch);
				#endif
				const 				EarthView::World::Spatial::CWMTSLayerInfo *pObjectX = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CTileMatrixSet* __values1 = pObjectX->getTileMatrixSetRef(tilematrixset);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getBoundingBoxCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getBoundingBoxRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getStyleCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getStyle_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getStyleDetailsRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtslayerinfo_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSLayerInfoProxy *pObjectX = (JCWMTSLayerInfoProxy*) pObjXXXX;
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
		}
	}
}
