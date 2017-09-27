/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/itiledataset.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileDatasetTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					EV_TileDatasetType_Unknown,
					EV_TileDatasetType_Image,
					EV_TileDatasetType_DEM,
					EV_TileDatasetType_Vector
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileFormatTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					EV_TileFormatType_Unknown,
					EV_TileFormatType_JPG,
					EV_TileFormatType_EVG,
					EV_TileFormatType_BMP_7Z,
					EV_TileFormatType_EVV,
					EV_TileFormatType_EVV_7Z,
					EV_TileFormatType_PNG,
					EV_TileFormatType_EVP,
					EV_TileFormatType_EVP_7Z,
					EV_TileFormatType_BIL,
					EV_TileFormatType_BIL_7Z
				};
				jintArray array = __env->NewIntArray(11);
				__env->SetIntArrayRegion(array, 0, 11, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileRasterDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					EV_TileDataType_Unknown,
					EV_TileDataType_Image_Multi,
					EV_TileDataType_Image_Single,
					EV_TileDataType_DEM_int32,
					EV_TileDataType_DEM_Float,
					EV_TileDataType_DEM_int8,
					EV_TileDataType_DEM_int16,
					EV_TileDataType_DEM_uint32,
					EV_TileDataType_DEM_uint16
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			class JITileDatasetProxy : public EarthView::World::Spatial::ITileDataset
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getDataVersion_void_callback;
				EarthView::World::Core::ev_string m_getDescription_void_callback;
				EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
				EarthView::World::Core::ev_string m_getMetaInfo_void_callback;
				EarthView::World::Core::ev_string m_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback;
			public:
				JITileDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : ITileDataset(pList)
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
				void register_getMetaInfo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMetaInfo_void_callback = __method;
				}
				void register_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback = __method;
				}
				virtual EarthView::World::Spatial::EVTileDatasetType getType() const
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
						EarthView::World::Spatial::EVTileDatasetType __values1 = (EarthView::World::Spatial::EVTileDatasetType) __values1_j;
						return __values1;
					}
					else
					{
						return this->ITileDataset::getType();
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
						return this->ITileDataset::getName();
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
						return this->ITileDataset::getDataVersion();
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
						return this->ITileDataset::getDescription();
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
						return this->ITileDataset::getUpdateTime();
					}
				}
				virtual const EarthView::World::Spatial::ITileMetaInfo* getMetaInfo() const
				{
					if (this->_gRef != NULL && this->m_getMetaInfo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMetaInfo_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::ITileMetaInfo *__values1 = (const EarthView::World::Spatial::ITileMetaInfo*) __values1_j;
						return __values1;
					}
					else
					{
						return this->ITileDataset::getMetaInfo();
					}
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr getTileStream(ev_int32 level, ev_int32 row, ev_int32 col, EarthView::World::Spatial::EVTileFormatType& format)
				{
					if (this->_gRef != NULL && this->m_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback != "" && this->isCustomExtend())
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
						jint row_j = (jint) row;
						jint col_j = (jint) col;
						jlong format_j = (jlong) &format;
						jmethodID __method = __gr->getMethod("getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , level_j, row_j, col_j, format_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->ITileDataset::getTileStream(level, row, col, format);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JITileDatasetProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Itiledataset_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					EarthView::World::Spatial::EVTileDatasetType __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::EVTileDatasetType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Itiledataset_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				EarthView::World::Spatial::EVTileDatasetType __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getName();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getDataVersion();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getDescription();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getUpdateTime();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Itiledataset_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getUpdateTime();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Itiledataset_getMetaInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					const EarthView::World::Spatial::ITileMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getMetaInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::ITileMetaInfo* __values1 = pObjectX->getMetaInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getMetaInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMetaInfo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMetaInfo_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Itiledataset_getMetaInfo_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				const EarthView::World::Spatial::ITileMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getMetaInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Itiledataset_getTileStream_1ev_1int32_1ev_1int32_1ev_1int32_1EVTileFormatType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jint row_j, jint col_j, jlong format_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_int32 row = (ev_int32) row_j;
				ev_int32 col = (ev_int32) col_j;
				EarthView::World::Spatial::EVTileFormatType &format = *(EarthView::World::Spatial::EVTileFormatType*) format_j;
				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileDatasetProxy))
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getTileStream(level, row, col, format);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTileStream(level, row, col, format);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itiledataset_register_1getTileStream_1ev_1int32_1ev_1int32_1ev_1int32_1EVTileFormatType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileDatasetProxy *pObjectX = (JITileDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTileStream_ev_int32_ev_int32_ev_int32_EVTileFormatType_callback", "(IIIJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Itiledataset_getTileStream_1ev_1int32_1ev_1int32_1ev_1int32_1EVTileFormatType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jint row_j, jint col_j, jlong format_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_int32 row = (ev_int32) row_j;
				ev_int32 col = (ev_int32) col_j;
				EarthView::World::Spatial::EVTileFormatType &format = *(EarthView::World::Spatial::EVTileFormatType*) format_j;
				EarthView::World::Spatial::ITileDataset *pObjectX = (EarthView::World::Spatial::ITileDataset*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::ITileDataset::getTileStream(level, row, col, format);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
