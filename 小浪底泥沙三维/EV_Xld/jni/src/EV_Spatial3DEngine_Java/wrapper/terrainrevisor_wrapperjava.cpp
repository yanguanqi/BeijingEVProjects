/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/terrainrevisor.h"
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
			class JITerrainRevisorProxy : public EarthView::World::Spatial3D::ITerrainRevisor
			{
			 private:
				EarthView::World::Core::ev_string m_getKey_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_modifyTerrain_CPoint_callback;
			public:
				JITerrainRevisorProxy(EarthView::World::Core::CNameValuePairList *pList) : ITerrainRevisor(pList)
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
				void register_getKey_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKey_void_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_modifyTerrain_CPoint_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_modifyTerrain_CPoint_callback = __method;
				}
				virtual EVString getKey() const
				{
					if (this->_gRef != NULL && this->m_getKey_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getKey_void_callback");
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
						return this->ITerrainRevisor::getKey();
					}
				}
				virtual EarthView::World::Spatial3D::ITerrainRevisor* clone()
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
						EarthView::World::Spatial3D::ITerrainRevisor *__values1 = (EarthView::World::Spatial3D::ITerrainRevisor*) __values1_j;
						return __values1;
					}
					else
					{
						return this->ITerrainRevisor::clone();
					}
				}
				virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt)
				{
					if (this->_gRef != NULL && this->m_modifyTerrain_CPoint_callback != "" && this->isCustomExtend())
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
						jlong pt_j = (jlong) &pt;
						jmethodID __method = __gr->getMethod("modifyTerrain_CPoint_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pt_j);
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
						return this->ITerrainRevisor::modifyTerrain(pt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JITerrainRevisorProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_getKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITerrainRevisorProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::getKey();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getKey();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_register_1getKey_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITerrainRevisorProxy *pObjectX = (JITerrainRevisorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKey_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKey_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_getKey_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::getKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITerrainRevisorProxy))
				{
					EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITerrainRevisorProxy *pObjectX = (JITerrainRevisorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_modifyTerrain_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j)
			{
				EarthView::World::Spatial::Geometry::CPoint &pt = *(EarthView::World::Spatial::Geometry::CPoint*) pt_j;
				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITerrainRevisorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::modifyTerrain(pt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->modifyTerrain(pt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_register_1modifyTerrain_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITerrainRevisorProxy *pObjectX = (JITerrainRevisorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_modifyTerrain_CPoint_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"modifyTerrain_CPoint_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Iterrainrevisor_modifyTerrain_1CPoint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j)
			{
				EarthView::World::Spatial::Geometry::CPoint &pt = *(EarthView::World::Spatial::Geometry::CPoint*) pt_j;
				EarthView::World::Spatial3D::ITerrainRevisor *pObjectX = (EarthView::World::Spatial3D::ITerrainRevisor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ITerrainRevisor::modifyTerrain(pt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_TerrainReviseModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TRM_Exaggerate,
					TRM_Increase,
					TRM_Unify
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_TerrainRangeModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TRM_Globe,
					TRM_PartialGlobe
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			class JCTerrainRevisorProxy : public EarthView::World::Spatial3D::CTerrainRevisor
			{
			 private:
				EarthView::World::Core::ev_string m_getKey_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_modifyTerrain_CPoint_callback;
			public:
				JCTerrainRevisorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainRevisor(pList)
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
				void register_getKey_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKey_void_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_modifyTerrain_CPoint_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_modifyTerrain_CPoint_callback = __method;
				}
				virtual EVString getKey() const
				{
					if (this->_gRef != NULL && this->m_getKey_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getKey_void_callback");
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
						return this->CTerrainRevisor::getKey();
					}
				}
				virtual ev_bool modifyTerrain(EarthView::World::Spatial::Geometry::CPoint& pt)
				{
					if (this->_gRef != NULL && this->m_modifyTerrain_CPoint_callback != "" && this->isCustomExtend())
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
						jlong pt_j = (jlong) &pt;
						jmethodID __method = __gr->getMethod("modifyTerrain_CPoint_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pt_j);
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
						return this->CTerrainRevisor::modifyTerrain(pt);
					}
				}
				virtual EarthView::World::Spatial3D::ITerrainRevisor* clone()
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
						EarthView::World::Spatial3D::ITerrainRevisor *__values1 = (EarthView::World::Spatial3D::ITerrainRevisor*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTerrainRevisor::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTerrainRevisorProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_OperatorAssign_1CTerrainRevisor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong tr_j )
			{
				EarthView::World::Spatial3D::CTerrainRevisor& pObjectX = *(EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainRevisor &tr = *(EarthView::World::Spatial3D::CTerrainRevisor*) tr_j;
				pObjectX = tr;
				EarthView::World::Spatial3D::CTerrainRevisor& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTerrainRevisorProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::getKey();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getKey();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_register_1getKey_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTerrainRevisorProxy *pObjectX = (JCTerrainRevisorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKey_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKey_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getKey_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::getKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getRangeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				EarthView::World::Spatial3D::TerrainRangeMode __values1 = pObjectX->getRangeMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setRangeMode_1TerrainRangeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint m_j)
			{
				EarthView::World::Spatial3D::TerrainRangeMode m = (EarthView::World::Spatial3D::TerrainRangeMode) m_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setRangeMode(m);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				EarthView::World::Spatial3D::TerrainReviseMode __values1 = pObjectX->getMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setMode_1TerrainReviseMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint m_j)
			{
				EarthView::World::Spatial3D::TerrainReviseMode m = (EarthView::World::Spatial3D::TerrainReviseMode) m_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setMode(m);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				Real __values1 = pObjectX->getFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble factor_j)
			{
				Real factor = (Real) factor_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setFactor(factor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				EarthView::World::Spatial::Geometry::CPolygon* __values1 = pObjectX->getExtent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setExtent_1CPolygon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extent_j)
			{
				EarthView::World::Spatial::Geometry::CPolygon *extent = (EarthView::World::Spatial::Geometry::CPolygon*) extent_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setExtent(extent);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_modifyTerrain_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j)
			{
				EarthView::World::Spatial::Geometry::CPoint &pt = *(EarthView::World::Spatial::Geometry::CPoint*) pt_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTerrainRevisorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::modifyTerrain(pt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->modifyTerrain(pt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_register_1modifyTerrain_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTerrainRevisorProxy *pObjectX = (JCTerrainRevisorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_modifyTerrain_CPoint_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"modifyTerrain_CPoint_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_modifyTerrain_1CPoint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pt_j)
			{
				EarthView::World::Spatial::Geometry::CPoint &pt = *(EarthView::World::Spatial::Geometry::CPoint*) pt_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::modifyTerrain(pt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setEnabled(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_setAltitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble alt_j)
			{
				ev_real64 alt = (ev_real64) alt_j;
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				pObjectX->setAltitude(alt);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_getAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getAltitude();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTerrainRevisorProxy))
				{
					EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTerrainRevisorProxy *pObjectX = (JCTerrainRevisorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TerrainRevisor_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTerrainRevisor *pObjectX = (EarthView::World::Spatial3D::CTerrainRevisor*) pObjXXXX;
				EarthView::World::Spatial3D::ITerrainRevisor* __values1 = pObjectX->EarthView::World::Spatial3D::CTerrainRevisor::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
