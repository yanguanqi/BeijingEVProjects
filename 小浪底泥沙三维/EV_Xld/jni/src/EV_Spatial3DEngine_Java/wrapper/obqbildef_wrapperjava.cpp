/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqbildef.h"
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
			namespace ModelManager
			{
				class JCMeshxUserDataProxy : public EarthView::World::Spatial3D::ModelManager::CMeshxUserData
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCMeshxUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshxUserData(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMovableObject::CUserData *__values1 = (EarthView::World::Graphic::CMovableObject::CUserData*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CMeshxUserData::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMeshxUserDataProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_MeshxUserData_get_1mObjectHandle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMeshxUserData *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMeshxUserData*)pObjXXXX;
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<(pObjectX->mObjectHandle);
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MeshxUserData_set_1mObjectHandle_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::CMeshxUserData *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMeshxUserData*)pObjXXXX;
					pObjectX->mObjectHandle = *(ev_uint64*) __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MeshxUserData_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshxUserDataProxy *pObjectX = (JCMeshxUserDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilcache_getBILStruct_1EVString_1BILStruct(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring bilName_j, jlong bil_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* bilName_ch = (const ev_char*)__env->GetStringUTFChars(bilName_j,JNI_FALSE);
					const EVString bilName = bilName_ch;
					__env->ReleaseStringUTFChars(bilName_j, (const char *)bilName_ch);
					#else
					const ev_wchar* bilName_ch = (const ev_wchar*)__env->GetStringChars(bilName_j,JNI_FALSE);
					const EVString bilName = bilName_ch;
					__env->ReleaseStringChars(bilName_j, (const jchar *)bilName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::BILStruct *bil = (EarthView::World::Spatial3D::ModelManager::BILStruct*) bil_j;
					EarthView::World::Spatial3D::ModelManager::CBILCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CBILCache*) pObjXXXX;
					ev_bool __values1 = pObjectX->getBILStruct(bilName, bil);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilcache_addCache_1EVString_1BILStruct(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring bilName_j, jlong bil_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* bilName_ch = (const ev_char*)__env->GetStringUTFChars(bilName_j,JNI_FALSE);
					const EVString bilName = bilName_ch;
					__env->ReleaseStringUTFChars(bilName_j, (const char *)bilName_ch);
					#else
					const ev_wchar* bilName_ch = (const ev_wchar*)__env->GetStringChars(bilName_j,JNI_FALSE);
					const EVString bilName = bilName_ch;
					__env->ReleaseStringChars(bilName_j, (const jchar *)bilName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::BILStruct *bil = (EarthView::World::Spatial3D::ModelManager::BILStruct*) bil_j;
					EarthView::World::Spatial3D::ModelManager::CBILCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CBILCache*) pObjXXXX;
					pObjectX->addCache(bilName, bil);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_OperatorAssign_1BILStruct(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct& pObjectX = *(EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjXXXX;
					const EarthView::World::Spatial3D::ModelManager::BILStruct &rhs = *(EarthView::World::Spatial3D::ModelManager::BILStruct*) rhs_j;
					pObjectX = rhs;
					EarthView::World::Spatial3D::ModelManager::BILStruct& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_findLegalityData_1ev_1real32_1ev_1real32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong height_j, jlong allNoData_j)
				{
					ev_real32 *data = (ev_real32*) data_j;
					ev_real32 &height = *(ev_real32*) height_j;
					ev_bool &allNoData = *(ev_bool*) allNoData_j;
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjXXXX;
					ev_bool __values1 = pObjectX->findLegalityData(data, height, allNoData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_getHeight_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j, jfloat z_j)
				{
					ev_real32 x = (ev_real32) x_j;
					ev_real32 z = (ev_real32) z_j;
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getHeight(x, z);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_readBIL_1EVString_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1int32_1ev_1real32_1ev_1int32_1ev_1int32_1CBILCache_1BILStruct(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desFolder_j, jint level_j, jfloat x_j, jfloat z_j, jfloat zeroStartX_j, jfloat zeroStartZ_j, jint startQuadLevel_j, jfloat zeroTileWidth_j, jint zeroLevelRowCount_j, jint zeroLevelColCount_j, jlong cache_j, jlong bilStruct_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
					#else
					const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
					#endif
					ev_int32 level = (ev_int32) level_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 z = (ev_real32) z_j;
					ev_real32 zeroStartX = (ev_real32) zeroStartX_j;
					ev_real32 zeroStartZ = (ev_real32) zeroStartZ_j;
					ev_int32 startQuadLevel = (ev_int32) startQuadLevel_j;
					ev_real32 zeroTileWidth = (ev_real32) zeroTileWidth_j;
					ev_int32 zeroLevelRowCount = (ev_int32) zeroLevelRowCount_j;
					ev_int32 zeroLevelColCount = (ev_int32) zeroLevelColCount_j;
					EarthView::World::Spatial3D::ModelManager::CBILCache *cache = (EarthView::World::Spatial3D::ModelManager::CBILCache*) cache_j;
					EarthView::World::Spatial3D::ModelManager::BILStruct &bilStruct = *(EarthView::World::Spatial3D::ModelManager::BILStruct*) bilStruct_j;
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjXXXX;
					ev_bool __values1 = pObjectX->readBIL(desFolder, level, x, z, zeroStartX, zeroStartZ, startQuadLevel, zeroTileWidth, zeroLevelRowCount, zeroLevelColCount, cache, bilStruct);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mData_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mData = (ev_real32*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mLevel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mLevel = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mRow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mRow);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mRow_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mRow = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mCol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mCol);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mCol_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mCol = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mStartX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mStartX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mStartX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mStartX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mStartZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mStartZ);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mStartZ_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mStartZ = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mTileWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mTileWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mTileWidth_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mTileWidth = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_get_1mPointNumberPerSide_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mPointNumberPerSide);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Bilstruct_set_1mPointNumberPerSide_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct *pObjectX = (EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjXXXX;
					pObjectX->mPointNumberPerSide = (ev_int32)__values1_j;
				}
			}
		}
	}
}
