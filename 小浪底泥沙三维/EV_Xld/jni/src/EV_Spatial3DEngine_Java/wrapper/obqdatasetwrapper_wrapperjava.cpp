/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqdatasetwrapper.h"
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
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
				class JCObqDatasetWrapperProxy : public EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_readInitData_OBQInitData_callback;
				public:
					JCObqDatasetWrapperProxy(EarthView::World::Core::CNameValuePairList *pList) : CObqDatasetWrapper(pList)
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
					void register_readInitData_OBQInitData_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readInitData_OBQInitData_callback = __method;
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
							return this->CObqDatasetWrapper::getType();
						}
					}
					virtual ev_int32 readInitData(EarthView::World::Spatial3D::ModelManager::OBQInitData& initData)
					{
						if (this->_gRef != NULL && this->m_readInitData_OBQInitData_callback != "" && this->isCustomExtend())
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
							jlong initData_j = (jlong) &initData;
							jmethodID __method = __gr->getMethod("readInitData_OBQInitData_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , initData_j);
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
							return this->CObqDatasetWrapper::readInitData(initData);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCObqDatasetWrapperProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCObqDatasetWrapperProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCObqDatasetWrapperProxy *pObjectX = (JCObqDatasetWrapperProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getGUID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					EVString __values1 = pObjectX->getGUID();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_initBILCache_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pointNumberPerSide_j)
				{
					ev_int32 pointNumberPerSide = (ev_int32) pointNumberPerSide_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					pObjectX->initBILCache(pointNumberPerSide);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readInitData_1OBQInitData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong initData_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData &initData = *(EarthView::World::Spatial3D::ModelManager::OBQInitData*) initData_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCObqDatasetWrapperProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::readInitData(initData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->readInitData(initData);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_register_1readInitData_1OBQInitData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCObqDatasetWrapperProxy *pObjectX = (JCObqDatasetWrapperProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readInitData_OBQInitData_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readInitData_OBQInitData_callback", "(J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readInitData_1OBQInitData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong initData_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData &initData = *(EarthView::World::Spatial3D::ModelManager::OBQInitData*) initData_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper::readInitData(initData);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readTileData_1EVString_1EVString_1ev_1uint32_1MeshStream_1LodIndexVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring tileName_j, jlong lodID_j, jlong meshStream_j, jlong childIndexVec_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					ev_uint32 lodID = (ev_uint32) lodID_j;
					EarthView::World::Spatial::MeshStream &meshStream = *(EarthView::World::Spatial::MeshStream*) meshStream_j;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector &childIndexVec = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*) childIndexVec_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_int32 __values1 = pObjectX->readTileData(filename, tileName, lodID, meshStream, childIndexVec);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readTileMeshData_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring tileName_j, jlong meshStream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
					#else
					const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
					const EVString filename = filename_ch;
					__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tileName_ch = (const ev_char*)__env->GetStringUTFChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringUTFChars(tileName_j, (const char *)tileName_ch);
					#else
					const ev_wchar* tileName_ch = (const ev_wchar*)__env->GetStringChars(tileName_j,JNI_FALSE);
					const EVString tileName = tileName_ch;
					__env->ReleaseStringChars(tileName_j, (const jchar *)tileName_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr &meshStream = *(EarthView::World::Core::MemoryDataStreamPtr*) meshStream_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_int32 __values1 = pObjectX->readTileMeshData(filename, tileName, meshStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readDem_1ev_1uint32_1ev_1uint32_1ev_1uint32_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong level_j, jlong row_j, jlong col_j, jlong bilStream_j)
				{
					ev_uint32 level = (ev_uint32) level_j;
					ev_uint32 row = (ev_uint32) row_j;
					ev_uint32 col = (ev_uint32) col_j;
					EarthView::World::Core::MemoryDataStreamPtr &bilStream = *(EarthView::World::Core::MemoryDataStreamPtr*) bilStream_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_int32 __values1 = pObjectX->readDem(level, row, col, bilStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readMetaDataInfo_1OBQMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->readMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_readDemMetaDataInfo_1OBQDemMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->readDemMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_updateMetaDataInfo_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble altitude_j)
				{
					ev_real64 altitude = (ev_real64) altitude_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMetaDataInfo(altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_updateMetaDataInfo_1OBQMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &info = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) info_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateMetaDataInfo(info);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_ObqDatasetWrapper_getHeightFromBIL_1ev_1uint32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong level_j, jfloat x_j, jfloat z_j)
				{
					ev_uint32 level = (ev_uint32) level_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 z = (ev_real32) z_j;
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper *pObjectX = (EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getHeightFromBIL(level, x, z);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
		}
	}
}
