/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/localimagedataset.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageCacheReader_readTileByType_1EVTileModeType_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tilemode_j, jstring layerName_j, jint tilelevel_j, jint row_j, jint col_j, jint type_j)
			{
				EarthView::World::Spatial::EVTileModeType tilemode = (EarthView::World::Spatial::EVTileModeType) tilemode_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerName_ch = (const ev_char*)__env->GetStringUTFChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringUTFChars(layerName_j, (const char *)layerName_ch);
				#else
				const ev_wchar* layerName_ch = (const ev_wchar*)__env->GetStringChars(layerName_j,JNI_FALSE);
				const EVString layerName = layerName_ch;
				__env->ReleaseStringChars(layerName_j, (const jchar *)layerName_ch);
				#endif
				const ev_int32 tilelevel = (ev_int32) tilelevel_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				const ev_int32 type = (ev_int32) type_j;
				EarthView::World::Spatial3D::CImageCacheReader *pObjectX = (EarthView::World::Spatial3D::CImageCacheReader*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->readTileByType(tilemode, layerName, tilelevel, row, col, type);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageCacheReader_readTile_1EVTileModeType_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tilemode_j, jstring layerPath_j, jint tilelevel_j, jint row_j, jint col_j, jlong type_j)
			{
				EarthView::World::Spatial::EVTileModeType tilemode = (EarthView::World::Spatial::EVTileModeType) tilemode_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerPath_ch = (const ev_char*)__env->GetStringUTFChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringUTFChars(layerPath_j, (const char *)layerPath_ch);
				#else
				const ev_wchar* layerPath_ch = (const ev_wchar*)__env->GetStringChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringChars(layerPath_j, (const jchar *)layerPath_ch);
				#endif
				const ev_int32 tilelevel = (ev_int32) tilelevel_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				ev_int32 &type = *(ev_int32*) type_j;
				EarthView::World::Spatial3D::CImageCacheReader *pObjectX = (EarthView::World::Spatial3D::CImageCacheReader*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->readTile(tilemode, layerPath, tilelevel, row, col, type);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ImageCacheReader_readTile_1EVTileModeType_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1MemoryDataStreamPtr_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tilemode_j, jstring layerPath_j, jint tilelevel_j, jint row_j, jint col_j, jlong tileType_j, jlong dataValue_j, jlong property_j)
			{
				EarthView::World::Spatial::EVTileModeType tilemode = (EarthView::World::Spatial::EVTileModeType) tilemode_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerPath_ch = (const ev_char*)__env->GetStringUTFChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringUTFChars(layerPath_j, (const char *)layerPath_ch);
				#else
				const ev_wchar* layerPath_ch = (const ev_wchar*)__env->GetStringChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringChars(layerPath_j, (const jchar *)layerPath_ch);
				#endif
				const ev_int32 tilelevel = (ev_int32) tilelevel_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				ev_int32 &tileType = *(ev_int32*) tileType_j;
				EarthView::World::Core::MemoryDataStreamPtr &dataValue = *(EarthView::World::Core::MemoryDataStreamPtr*) dataValue_j;
				EarthView::World::Core::MemoryDataStreamPtr &property = *(EarthView::World::Core::MemoryDataStreamPtr*) property_j;
				EarthView::World::Spatial3D::CImageCacheReader *pObjectX = (EarthView::World::Spatial3D::CImageCacheReader*) pObjXXXX;
				ev_bool __values1 = pObjectX->readTile(tilemode, layerPath, tilelevel, row, col, tileType, dataValue, property);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ImageCacheReader_readTileInfo_1EVTileModeType_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1bool_1CCoreTime_1CCoreTime_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tilemode_j, jstring layerPath_j, jint tilelevel_j, jint row_j, jint col_j, jlong isLastest_j, jlong updateTime_j, jlong dateTime_j, jlong property_j)
			{
				EarthView::World::Spatial::EVTileModeType tilemode = (EarthView::World::Spatial::EVTileModeType) tilemode_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerPath_ch = (const ev_char*)__env->GetStringUTFChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringUTFChars(layerPath_j, (const char *)layerPath_ch);
				#else
				const ev_wchar* layerPath_ch = (const ev_wchar*)__env->GetStringChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringChars(layerPath_j, (const jchar *)layerPath_ch);
				#endif
				const ev_int32 tilelevel = (ev_int32) tilelevel_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				ev_bool &isLastest = *(ev_bool*) isLastest_j;
				EarthView::World::Core::CCoreTime &updateTime = *(EarthView::World::Core::CCoreTime*) updateTime_j;
				EarthView::World::Core::CCoreTime &dateTime = *(EarthView::World::Core::CCoreTime*) dateTime_j;
				EarthView::World::Core::MemoryDataStreamPtr &property = *(EarthView::World::Core::MemoryDataStreamPtr*) property_j;
				EarthView::World::Spatial3D::CImageCacheReader *pObjectX = (EarthView::World::Spatial3D::CImageCacheReader*) pObjXXXX;
				ev_bool __values1 = pObjectX->readTileInfo(tilemode, layerPath, tilelevel, row, col, isLastest, updateTime, dateTime, property);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ImageCacheReader_getSinglePtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial3D::CImageCacheReader* __values1 = EarthView::World::Spatial3D::CImageCacheReader::getSinglePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCLocalImageDatasetProxy : public EarthView::World::Spatial3D::CLocalImageDataset
			{
			 private:
				EarthView::World::Core::ev_string m_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback;
				EarthView::World::Core::ev_string m_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback;
				EarthView::World::Core::ev_string m_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback;
				EarthView::World::Core::ev_string m_getOGCWMTSCapabilitiesRef_void_callback;
				EarthView::World::Core::ev_string m_getEVWMTSCapabilities_EVString_callback;
				EarthView::World::Core::ev_string m_getLayerInfoRef_void_callback;
				EarthView::World::Core::ev_string m_getCacheDataType_void_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getDataVersion_void_callback;
				EarthView::World::Core::ev_string m_getDescription_void_callback;
				EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
				EarthView::World::Core::ev_string m_hasSubDataset_void_callback;
				EarthView::World::Core::ev_string m_getDataSourceRef_void_callback;
				EarthView::World::Core::ev_string m_canEdit_void_callback;
				EarthView::World::Core::ev_string m_isEditing_void_callback;
				EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_isBeginEditingOperation_void_callback;
				EarthView::World::Core::ev_string m_beginEditingOperation_void_callback;
				EarthView::World::Core::ev_string m_endEditingOperation_ev_bool_callback;
			public:
				JCLocalImageDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CLocalImageDataset(pList)
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
				void register_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback = __method;
				}
				void register_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback = __method;
				}
				void register_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback = __method;
				}
				void register_getOGCWMTSCapabilitiesRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOGCWMTSCapabilitiesRef_void_callback = __method;
				}
				void register_getEVWMTSCapabilities_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEVWMTSCapabilities_EVString_callback = __method;
				}
				void register_getLayerInfoRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLayerInfoRef_void_callback = __method;
				}
				void register_getCacheDataType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCacheDataType_void_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getDataVersion_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataVersion_void_callback = __method;
				}
				void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDescription_void_callback = __method;
				}
				void register_getUpdateTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUpdateTime_void_callback = __method;
				}
				void register_hasSubDataset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasSubDataset_void_callback = __method;
				}
				void register_getDataSourceRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataSourceRef_void_callback = __method;
				}
				void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canEdit_void_callback = __method;
				}
				void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEditing_void_callback = __method;
				}
				void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startEditing_ev_bool_callback = __method;
				}
				void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_stopEditing_ev_bool_callback = __method;
				}
				void register_isBeginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBeginEditingOperation_void_callback = __method;
				}
				void register_beginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beginEditingOperation_void_callback = __method;
				}
				void register_endEditingOperation_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_endEditingOperation_ev_bool_callback = __method;
				}
				virtual ev_int32 getTile(const EVString& style, const EVString& format, ev_int32 level, ev_uint32 row, ev_uint32 col, ev_bool getoriginformat, ev_bool gettime, EarthView::World::Spatial::CEVTileInfo& tileInfo)
				{
					if (this->_gRef != NULL && this->m_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring style_wch = style;
						jstring style_j = __env->NewString((const jchar*)style_wch.getString(), style_wch.size());
						EarthView::World::Core::ev_wstring format_wch = format;
						jstring format_j = __env->NewString((const jchar*)format_wch.getString(), format_wch.size());
						jint level_j = (jint) level;
						jlong row_j = (jlong) row;
						jlong col_j = (jlong) col;
						jboolean getoriginformat_j = (jboolean) getoriginformat;
						jboolean gettime_j = (jboolean) gettime;
						jlong tileInfo_j = (jlong) &tileInfo;
						jmethodID __method = __gr->getMethod("getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , style_j, format_j, level_j, row_j, col_j, getoriginformat_j, gettime_j, tileInfo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getTile(style, format, level, row, col, getoriginformat, gettime, tileInfo);
					}
				}
				virtual ev_int32 getTileProperty(ev_int32 level, ev_uint32 row, ev_uint32 col, const EVString& fieldname, EarthView::World::Spatial::CMemoryStreamResult& serverresult)
				{
					if (this->_gRef != NULL && this->m_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback != "" && this->isCustomExtend())
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
						jint level_j = (jint) level;
						jlong row_j = (jlong) row;
						jlong col_j = (jlong) col;
						EarthView::World::Core::ev_wstring fieldname_wch = fieldname;
						jstring fieldname_j = __env->NewString((const jchar*)fieldname_wch.getString(), fieldname_wch.size());
						jlong serverresult_j = (jlong) &serverresult;
						jmethodID __method = __gr->getMethod("getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , level_j, row_j, col_j, fieldname_j, serverresult_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getTileProperty(level, row, col, fieldname, serverresult);
					}
				}
				virtual ev_int32 getFeatureInfo(ev_int32 level, ev_uint32 tilerow, ev_uint32 tilecol, ev_int32 x, ev_int32 y, const EVString& infoformat, EarthView::World::Spatial::CMemoryStreamResult& serverresult)
				{
					if (this->_gRef != NULL && this->m_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback != "" && this->isCustomExtend())
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
						jint level_j = (jint) level;
						jlong tilerow_j = (jlong) tilerow;
						jlong tilecol_j = (jlong) tilecol;
						jint x_j = (jint) x;
						jint y_j = (jint) y;
						EarthView::World::Core::ev_wstring infoformat_wch = infoformat;
						jstring infoformat_j = __env->NewString((const jchar*)infoformat_wch.getString(), infoformat_wch.size());
						jlong serverresult_j = (jlong) &serverresult;
						jmethodID __method = __gr->getMethod("getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , level_j, tilerow_j, tilecol_j, x_j, y_j, infoformat_j, serverresult_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat, serverresult);
					}
				}
				virtual const EarthView::World::Spatial::CWMTSServerInfo* getOGCWMTSCapabilitiesRef()
				{
					if (this->_gRef != NULL && this->m_getOGCWMTSCapabilitiesRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getOGCWMTSCapabilitiesRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::CWMTSServerInfo *__values1 = (const EarthView::World::Spatial::CWMTSServerInfo*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getOGCWMTSCapabilitiesRef();
					}
				}
				virtual ev_int32 getEVWMTSCapabilities(EVString& value)
				{
					if (this->_gRef != NULL && this->m_getEVWMTSCapabilities_EVString_callback != "" && this->isCustomExtend())
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
						jlong value_j = (jlong) &value;
						jmethodID __method = __gr->getMethod("getEVWMTSCapabilities_EVString_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , value_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getEVWMTSCapabilities(value);
					}
				}
				virtual const EarthView::World::Spatial::CEVWMTSLayerInfo* getLayerInfoRef() const
				{
					if (this->_gRef != NULL && this->m_getLayerInfoRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLayerInfoRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::CEVWMTSLayerInfo *__values1 = (const EarthView::World::Spatial::CEVWMTSLayerInfo*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getLayerInfoRef();
					}
				}
				virtual EVString getUpdateTime() const
				{
					if (this->_gRef != NULL && this->m_getUpdateTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUpdateTime_void_callback");
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
						return this->CLocalImageDataset::getUpdateTime();
					}
				}
				virtual EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType()
				{
					if (this->_gRef != NULL && this->m_getCacheDataType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCacheDataType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::EVSSCCacheDataType __values1 = (EarthView::World::Spatial::EVSSCCacheDataType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getCacheDataType();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getType_void_callback");
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
						return this->CLocalImageDataset::getType();
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
						return this->CLocalImageDataset::getName();
					}
				}
				virtual ev_uint64 getDataVersion() const
				{
					if (this->_gRef != NULL && this->m_getDataVersion_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDataVersion_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getDataVersion();
					}
				}
				virtual EVString getDescription() const
				{
					if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDescription_void_callback");
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
						return this->CLocalImageDataset::getDescription();
					}
				}
				virtual ev_bool hasSubDataset() const
				{
					if (this->_gRef != NULL && this->m_hasSubDataset_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasSubDataset_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::hasSubDataset();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if (this->_gRef != NULL && this->m_getDataSourceRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDataSourceRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::getDataSourceRef();
					}
				}
				virtual ev_bool canEdit() const
				{
					if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canEdit_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::canEdit();
					}
				}
				virtual ev_bool isEditing() const
				{
					if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isEditing_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::isEditing();
					}
				}
				virtual ev_bool startEditing(ev_bool withUndo)
				{
					if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean withUndo_j = (jboolean) withUndo;
						jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::startEditing(withUndo);
					}
				}
				virtual ev_bool stopEditing(ev_bool isSave)
				{
					if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isSave_j = (jboolean) isSave;
						jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isSave_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::stopEditing(isSave);
					}
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if (this->_gRef != NULL && this->m_isBeginEditingOperation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isBeginEditingOperation_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::isBeginEditingOperation();
					}
				}
				virtual ev_bool beginEditingOperation()
				{
					if (this->_gRef != NULL && this->m_beginEditingOperation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("beginEditingOperation_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::beginEditingOperation();
					}
				}
				virtual ev_bool endEditingOperation(ev_bool isConfirm)
				{
					if (this->_gRef != NULL && this->m_endEditingOperation_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isConfirm_j = (jboolean) isConfirm;
						jmethodID __method = __gr->getMethod("endEditingOperation_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isConfirm_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLocalImageDataset::endEditingOperation(isConfirm);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLocalImageDatasetProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getTile_1EVString_1EVString_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1bool_1ev_1bool_1CEVTileInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring style_j, jstring format_j, jint level_j, jlong row_j, jlong col_j, jboolean getoriginformat_j, jboolean gettime_j, jlong tileInfo_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* style_ch = (const ev_char*)__env->GetStringUTFChars(style_j,JNI_FALSE);
				const EVString style = style_ch;
				__env->ReleaseStringUTFChars(style_j, (const char *)style_ch);
				#else
				const ev_wchar* style_ch = (const ev_wchar*)__env->GetStringChars(style_j,JNI_FALSE);
				const EVString style = style_ch;
				__env->ReleaseStringChars(style_j, (const jchar *)style_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				ev_bool getoriginformat = (ev_bool) getoriginformat_j;
				ev_bool gettime = (ev_bool) gettime_j;
				EarthView::World::Spatial::CEVTileInfo &tileInfo = *(EarthView::World::Spatial::CEVTileInfo*) tileInfo_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getTile(style, format, level, row, col, getoriginformat, gettime, tileInfo);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getTile(style, format, level, row, col, getoriginformat, gettime, tileInfo);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getTile_1EVString_1EVString_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1bool_1ev_1bool_1CEVTileInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTile_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_callback", "(Ljava/lang/String;Ljava/lang/String;IJJZZJ)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getTile_1EVString_1EVString_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1bool_1ev_1bool_1CEVTileInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring style_j, jstring format_j, jint level_j, jlong row_j, jlong col_j, jboolean getoriginformat_j, jboolean gettime_j, jlong tileInfo_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* style_ch = (const ev_char*)__env->GetStringUTFChars(style_j,JNI_FALSE);
				const EVString style = style_ch;
				__env->ReleaseStringUTFChars(style_j, (const char *)style_ch);
				#else
				const ev_wchar* style_ch = (const ev_wchar*)__env->GetStringChars(style_j,JNI_FALSE);
				const EVString style = style_ch;
				__env->ReleaseStringChars(style_j, (const jchar *)style_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				ev_bool getoriginformat = (ev_bool) getoriginformat_j;
				ev_bool gettime = (ev_bool) gettime_j;
				EarthView::World::Spatial::CEVTileInfo &tileInfo = *(EarthView::World::Spatial::CEVTileInfo*) tileInfo_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getTile(style, format, level, row, col, getoriginformat, gettime, tileInfo);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getTileProperty_1ev_1int32_1ev_1uint32_1ev_1uint32_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong row_j, jlong col_j, jstring fieldname_j, jlong serverresult_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldname_ch = (const ev_char*)__env->GetStringUTFChars(fieldname_j,JNI_FALSE);
				const EVString fieldname = fieldname_ch;
				__env->ReleaseStringUTFChars(fieldname_j, (const char *)fieldname_ch);
				#else
				const ev_wchar* fieldname_ch = (const ev_wchar*)__env->GetStringChars(fieldname_j,JNI_FALSE);
				const EVString fieldname = fieldname_ch;
				__env->ReleaseStringChars(fieldname_j, (const jchar *)fieldname_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getTileProperty(level, row, col, fieldname, serverresult);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getTileProperty(level, row, col, fieldname, serverresult);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getTileProperty_1ev_1int32_1ev_1uint32_1ev_1uint32_1EVString_1CMemoryStreamResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTileProperty_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_callback", "(IJJLjava/lang/String;J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getTileProperty_1ev_1int32_1ev_1uint32_1ev_1uint32_1EVString_1CMemoryStreamResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong row_j, jlong col_j, jstring fieldname_j, jlong serverresult_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldname_ch = (const ev_char*)__env->GetStringUTFChars(fieldname_j,JNI_FALSE);
				const EVString fieldname = fieldname_ch;
				__env->ReleaseStringUTFChars(fieldname_j, (const char *)fieldname_ch);
				#else
				const ev_wchar* fieldname_ch = (const ev_wchar*)__env->GetStringChars(fieldname_j,JNI_FALSE);
				const EVString fieldname = fieldname_ch;
				__env->ReleaseStringChars(fieldname_j, (const jchar *)fieldname_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getTileProperty(level, row, col, fieldname, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getFeatureInfo_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1int32_1ev_1int32_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong tilerow_j, jlong tilecol_j, jint x_j, jint y_j, jstring infoformat_j, jlong serverresult_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 tilerow = (ev_uint32) tilerow_j;
				ev_uint32 tilecol = (ev_uint32) tilecol_j;
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* infoformat_ch = (const ev_char*)__env->GetStringUTFChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringUTFChars(infoformat_j, (const char *)infoformat_ch);
				#else
				const ev_wchar* infoformat_ch = (const ev_wchar*)__env->GetStringChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringChars(infoformat_j, (const jchar *)infoformat_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat, serverresult);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getFeatureInfo(level, tilerow, tilecol, x, y, infoformat, serverresult);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getFeatureInfo_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1int32_1ev_1int32_1EVString_1CMemoryStreamResult(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureInfo_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_callback", "(IJJIILjava/lang/String;J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getFeatureInfo_1ev_1int32_1ev_1uint32_1ev_1uint32_1ev_1int32_1ev_1int32_1EVString_1CMemoryStreamResult_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong tilerow_j, jlong tilecol_j, jint x_j, jint y_j, jstring infoformat_j, jlong serverresult_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 tilerow = (ev_uint32) tilerow_j;
				ev_uint32 tilecol = (ev_uint32) tilecol_j;
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* infoformat_ch = (const ev_char*)__env->GetStringUTFChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringUTFChars(infoformat_j, (const char *)infoformat_ch);
				#else
				const ev_wchar* infoformat_ch = (const ev_wchar*)__env->GetStringChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringChars(infoformat_j, (const jchar *)infoformat_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getOGCWMTSCapabilitiesRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					const EarthView::World::Spatial::CWMTSServerInfo* __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getOGCWMTSCapabilitiesRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::CWMTSServerInfo* __values1 = pObjectX->getOGCWMTSCapabilitiesRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getOGCWMTSCapabilitiesRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOGCWMTSCapabilitiesRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOGCWMTSCapabilitiesRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getOGCWMTSCapabilitiesRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getOGCWMTSCapabilitiesRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getEVWMTSCapabilities_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EVString &value = *(EVString*) value_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getEVWMTSCapabilities(value);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getEVWMTSCapabilities(value);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getEVWMTSCapabilities_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEVWMTSCapabilities_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEVWMTSCapabilities_EVString_callback", "(J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getEVWMTSCapabilities_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EVString &value = *(EVString*) value_j;
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getEVWMTSCapabilities(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getLayerInfoRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					const EarthView::World::Spatial::CEVWMTSLayerInfo* __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getLayerInfoRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::CEVWMTSLayerInfo* __values1 = pObjectX->getLayerInfoRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getLayerInfoRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLayerInfoRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLayerInfoRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getLayerInfoRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				const EarthView::World::Spatial::CEVWMTSLayerInfo* __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getLayerInfoRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUpdateTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUpdateTime_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getUpdateTime();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getCacheDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLocalImageDatasetProxy))
				{
					EarthView::World::Spatial::EVSSCCacheDataType __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getCacheDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::EVSSCCacheDataType __values1 = pObjectX->getCacheDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getCacheDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCacheDataType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCacheDataType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_getCacheDataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLocalImageDataset *pObjectX = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType __values1 = pObjectX->EarthView::World::Spatial3D::CLocalImageDataset::getCacheDataType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataVersion_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataVersion_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDescription_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasSubDataset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasSubDataset_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataSourceRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canEdit_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_stopEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBeginEditingOperation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBeginEditingOperation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beginEditingOperation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beginEditingOperation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_LocalImageDataset_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLocalImageDatasetProxy *pObjectX = (JCLocalImageDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_endEditingOperation_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"endEditingOperation_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
