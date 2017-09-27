/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scenequery.h"
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
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCSceneQueryProxy : public EarthView::World::Graphic::CSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneQuery(pList)
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
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSceneQueryProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CSceneQuery::WFT_NONE,
					CSceneQuery::WFT_PLANE_BOUNDED_REGION,
					CSceneQuery::WFT_SINGLE_INTERSECTION,
					CSceneQuery::WFT_CUSTOM_GEOMETRY,
					CSceneQuery::WFT_RENDER_OPERATION
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_get_1fragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->fragmentType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_set_1fragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				pObjectX->fragmentType = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_get_1singleIntersection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->singleIntersection);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_set_1singleIntersection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				pObjectX->singleIntersection = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_get_1planes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->planes);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_set_1planes_1Planes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				pObjectX->planes = (EarthView::World::Spatial::Math::Planes*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_get_1geometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->geometry);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_set_1geometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				pObjectX->geometry = (void*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_get_1renderOp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->renderOp);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragment_set_1renderOp_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragment*)pObjXXXX;
				pObjectX->renderOp = (EarthView::World::Graphic::CRenderOperation*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_push_1WorldFragmentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentType key = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentType) key_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_exist_1WorldFragmentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentType key = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentType) key_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_erase_1WorldFragmentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentType key = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentType) key_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQuery_00024WorldFragmentTypeSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *pObjectX = (EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setQueryMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneQuery::setQueryMask(mask);
				}
				else
				{
					pObjectX->setQueryMask(mask);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setQueryMask_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneQuery::setQueryMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getQueryMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getQueryMask();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getQueryMask();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getQueryMask_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getQueryMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setQueryTypeMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneQuery::setQueryTypeMask(mask);
				}
				else
				{
					pObjectX->setQueryTypeMask(mask);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setQueryTypeMask_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneQuery::setQueryTypeMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getQueryTypeMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getQueryTypeMask();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getQueryTypeMask();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getQueryTypeMask_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getQueryTypeMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setWorldFragmentType_1WorldFragmentType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint wft_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) wft_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneQuery::setWorldFragmentType(wft);
				}
				else
				{
					pObjectX->setWorldFragmentType(wft);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_setWorldFragmentType_1WorldFragmentType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint wft_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) wft_j;
				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneQuery::setWorldFragmentType(wft);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SceneQuery_getWorldFragmentType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getWorldFragmentType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = pObjectX->getWorldFragmentType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SceneQuery_getWorldFragmentType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getWorldFragmentType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getSupportedWorldFragmentTypes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryProxy))
				{
					const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getSupportedWorldFragmentTypes();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* __values1 = pObjectX->getSupportedWorldFragmentTypes();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryProxy *pObjectX = (JCSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQuery_getSupportedWorldFragmentTypes_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneQuery *pObjectX = (EarthView::World::Graphic::CSceneQuery*) pObjXXXX;
				const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* __values1 = pObjectX->EarthView::World::Graphic::CSceneQuery::getSupportedWorldFragmentTypes();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCSceneQueryListenerProxy : public EarthView::World::Graphic::CSceneQueryListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
			public:
				JCSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneQueryListener(pList)
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
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* object)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong object_j = (jlong) object;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , object_j);
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
						return this->CSceneQueryListener::queryResult(object);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* object, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong object_j = (jlong) object;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , object_j, indexVec_j);
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
						return this->CSceneQueryListener::queryResult(object, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CSceneQueryListener::queryResult(fragment);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSceneQueryListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
			{
				EarthView::World::Graphic::CMovableObject *object = (EarthView::World::Graphic::CMovableObject*) object_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(object);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(object);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryListener_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryListenerProxy *pObjectX = (JCSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
			{
				EarthView::World::Graphic::CMovableObject *object = (EarthView::World::Graphic::CMovableObject*) object_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(object);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1CMovableObject_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *object = (EarthView::World::Graphic::CMovableObject*) object_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(object, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(object, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryListener_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryListenerProxy *pObjectX = (JCSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1CMovableObject_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *object = (EarthView::World::Graphic::CMovableObject*) object_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(object, indexVec);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryListener_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneQueryListenerProxy *pObjectX = (JCSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryListener_queryResult_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CSceneQueryListener *pObjectX = (EarthView::World::Graphic::CSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneQueryListener::queryResult(fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_push_1back_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CMovableObject *&ref_t = *(EarthView::World::Graphic::CMovableObject**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_push_1front_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CMovableObject *&ref_t = *(EarthView::World::Graphic::CMovableObject**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->push_front(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_insert_1ev_1uint32_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CMovableObject *&ref_t = *(EarthView::World::Graphic::CMovableObject**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableList *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_push_1back_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *&ref_t = *(EarthView::World::Graphic::CSceneQuery::WorldFragment**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_push_1front_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *&ref_t = *(EarthView::World::Graphic::CSceneQuery::WorldFragment**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->push_front(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				EarthView::World::Graphic::CSceneQuery::WorldFragment*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_insert_1ev_1uint32_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *&ref_t = *(EarthView::World::Graphic::CSceneQuery::WorldFragment**) ref_t_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultWorldFragmentList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultWorldFragmentList *pObjectX = (EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultEntry_get_1movable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::SceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->movable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultEntry_set_1movable_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::SceneQueryResultEntry*)pObjXXXX;
				pObjectX->movable = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultEntry_get_1objIndexVec_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::SceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->objIndexVec);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultEntry_set_1objIndexVec_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::SceneQueryResultEntry*)pObjXXXX;
				pObjectX->objIndexVec = *(EarthView::World::Core::IntVector*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_push_1back_1SceneQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::SceneQueryResultEntry &t = *(EarthView::World::Graphic::SceneQueryResultEntry*) t_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_push_1front_1SceneQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::SceneQueryResultEntry &t = *(EarthView::World::Graphic::SceneQueryResultEntry*) t_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResultEntry& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_insert_1ev_1uint32_1SceneQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryResultEntry &t = *(EarthView::World::Graphic::SceneQueryResultEntry*) t_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResultMovableListEx_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResultMovableListEx *pObjectX = (EarthView::World::Graphic::SceneQueryResultMovableListEx*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResult_get_1movables_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->movables);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResult_set_1movables_1SceneQueryResultMovableList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				pObjectX->movables = *(EarthView::World::Graphic::SceneQueryResultMovableList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResult_get_1movablesEx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->movablesEx);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResult_set_1movablesEx_1SceneQueryResultMovableListEx(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				pObjectX->movablesEx = *(EarthView::World::Graphic::SceneQueryResultMovableListEx*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryResult_get_1worldFragments_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->worldFragments);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryResult_set_1worldFragments_1SceneQueryResultWorldFragmentList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryResult *pObjectX = (EarthView::World::Graphic::SceneQueryResult*)pObjXXXX;
				pObjectX->worldFragments = *(EarthView::World::Graphic::SceneQueryResultWorldFragmentList*) __values1_j;
			}
			class JCRegionSceneQueryProxy : public EarthView::World::Graphic::CRegionSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCRegionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRegionSceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRegionSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRegionSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRegionSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CRegionSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CRegionSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CRegionSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRegionSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CRegionSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRegionSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CRegionSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRegionSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRegionSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRegionSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRegionSceneQueryProxy);
			class JCRegionSceneQueryListenerProxy : public EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
			public:
				JCRegionSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionSceneQueryListener(pList)
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
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CRegionSceneQueryListener::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CRegionSceneQueryListener::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CRegionSceneQueryListener::queryResult(fragment);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRegionSceneQueryListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryListenerProxy *pObjectX = (JCRegionSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1CMovableObject_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryListenerProxy *pObjectX = (JCRegionSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1CMovableObject_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(first, indexVec);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryListenerProxy *pObjectX = (JCRegionSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_00024RegionSceneQueryListener_queryResult_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener::queryResult(fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_getListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener* __values1 = pObjectX->getListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRegionSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRegionSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_getLastResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_getLastResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::getLastResults();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRegionSceneQuery::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRegionSceneQuery::clearResults();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1CMovableObject_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first, indexVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1CMovableObject_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong indexVec_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Core::IntVector &indexVec = *(EarthView::World::Core::IntVector*) indexVec_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(first, indexVec);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRegionSceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_queryResult_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CRegionSceneQuery *pObjectX = (EarthView::World::Graphic::CRegionSceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRegionSceneQuery::queryResult(fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RegionSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRegionSceneQueryProxy *pObjectX = (JCRegionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCAxisAlignedBoxSceneQueryProxy : public EarthView::World::Graphic::CAxisAlignedBoxSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCAxisAlignedBoxSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAxisAlignedBoxSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CAxisAlignedBoxSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CAxisAlignedBoxSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CAxisAlignedBoxSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CAxisAlignedBoxSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CAxisAlignedBoxSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAxisAlignedBoxSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAxisAlignedBoxSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_setBox_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *pObjectX = (EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjXXXX;
				pObjectX->setBox(box);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_getBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *pObjectX = (EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBox();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AxisAlignedBoxSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAxisAlignedBoxSceneQueryProxy *pObjectX = (JCAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCSphereSceneQueryProxy : public EarthView::World::Graphic::CSphereSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCSphereSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereSceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSphereSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSphereSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CSphereSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CSphereSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CSphereSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSphereSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CSphereSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSphereSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CSphereSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSphereSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSphereSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_setSphere_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sphere_j)
			{
				const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
				EarthView::World::Graphic::CSphereSceneQuery *pObjectX = (EarthView::World::Graphic::CSphereSceneQuery*) pObjXXXX;
				pObjectX->setSphere(sphere);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_getSphere_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereSceneQuery *pObjectX = (EarthView::World::Graphic::CSphereSceneQuery*) pObjXXXX;
				const EarthView::World::Spatial::Math::CSphere& __values1 = pObjectX->getSphere();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSceneQueryProxy *pObjectX = (JCSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCPlaneBoundedVolumeListSceneQueryProxy : public EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCPlaneBoundedVolumeListSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlaneBoundedVolumeListSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CPlaneBoundedVolumeListSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CPlaneBoundedVolumeListSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CPlaneBoundedVolumeListSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPlaneBoundedVolumeListSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPlaneBoundedVolumeListSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_setVolumes_1PlaneBoundedVolumeList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong volumes_j)
			{
				const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &volumes = *(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*) volumes_j;
				EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery *pObjectX = (EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjXXXX;
				pObjectX->setVolumes(volumes);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_getVolumes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery *pObjectX = (EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*) pObjXXXX;
				const EarthView::World::Spatial::Math::PlaneBoundedVolumeList& __values1 = pObjectX->getVolumes();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PlaneBoundedVolumeListSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCRaySceneQueryListenerProxy : public EarthView::World::Graphic::CRaySceneQueryListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_Real_callback;
			public:
				JCRaySceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQueryListener(pList)
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
				void register_queryResult_CMovableObject_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_WorldFragment_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_Real_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j);
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
						return this->CRaySceneQueryListener::queryResult(obj, distance);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_int32 objIndex, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jint objIndex_j = (jint) objIndex;
						jint submeshIndex_j = (jint) submeshIndex;
						jint instanceIndex_j = (jint) instanceIndex;
						jint segmentIndex_j = (jint) segmentIndex;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_real32 e, ev_uint8 c, ev_uint16 i, ev_uint16 r, EarthView::World::Graphic::CColourValue& cv, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jfloat e_j = (jfloat) e;
						jshort c_j = (jshort) c;
						jint i_j = (jint) i;
						jint r_j = (jint) r;
						jlong cv_j = (jlong) &cv;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, e_j, c_j, i_j, r_j, cv_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_Real_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j, distance_j);
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
						return this->CRaySceneQueryListener::queryResult(fragment, distance);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRaySceneQueryListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryListenerProxy *pObjectX = (JCRaySceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryListenerProxy *pObjectX = (JCRaySceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback", "(JDIIIIJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryListenerProxy *pObjectX = (JCRaySceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback", "(JDFSIIJJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1WorldFragment_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryListenerProxy *pObjectX = (JCRaySceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryListener_queryResult_1WorldFragment_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQueryListener *pObjectX = (EarthView::World::Graphic::CRaySceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQueryListener::queryResult(fragment, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1distance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->distance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1distance_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->distance = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1movable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->movable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1movable_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->movable = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1objectIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->objectIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1objectIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->objectIndex = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1submeshIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->submeshIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1submeshIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->submeshIndex = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1instanceIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->instanceIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1instanceIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->instanceIndex = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1segmentIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->segmentIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1segmentIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->segmentIndex = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1elevation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->elevation);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1elevation_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->elevation = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1classification_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jshort __values1_j = (jshort) (pObjectX->classification);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1classification_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->classification = (ev_uint8)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1intensity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->intensity);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1intensity_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->intensity = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1returnNumber_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->returnNumber);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1returnNumber_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->returnNumber = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1color_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->color);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1color_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->color = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1pointOfIntersection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->pointOfIntersection);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1pointOfIntersection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->pointOfIntersection = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1pixelPointOfIntersection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->pixelPointOfIntersection);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1pixelPointOfIntersection_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->pixelPointOfIntersection = *(EarthView::World::Spatial::Math::CVector2*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_get_1worldFragment_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->worldFragment);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_set_1worldFragment_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry *pObjectX = (EarthView::World::Graphic::RaySceneQueryResultEntry*)pObjXXXX;
				pObjectX->worldFragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_OperatorLessThan_1RaySceneQueryResultEntry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry& pObjectX = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjXXXX;
				const EarthView::World::Graphic::RaySceneQueryResultEntry &rhs = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) rhs_j;
				ev_bool __values1 = (pObjectX < rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryResultEntry_OperatorGreaterThan_1RaySceneQueryResultEntry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry& pObjectX = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) pObjXXXX;
				const EarthView::World::Graphic::RaySceneQueryResultEntry &rhs = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) rhs_j;
				ev_bool __values1 = (pObjectX > rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_push_1back_1RaySceneQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::RaySceneQueryResultEntry &t = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) t_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_insert_1ev_1uint32_1RaySceneQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::RaySceneQueryResultEntry &t = *(EarthView::World::Graphic::RaySceneQueryResultEntry*) t_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_swap_1RaySceneQueryResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::RaySceneQueryResult &res = *(EarthView::World::Graphic::RaySceneQueryResult*) res_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->swap(res);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::RaySceneQueryResult& pObjectX = *(EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RaySceneQueryResultEntry& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResultEntry& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQueryResult_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RaySceneQueryResult *pObjectX = (EarthView::World::Graphic::RaySceneQueryResult*) pObjXXXX;
				pObjectX->clear();
			}
			class JCRaySceneQueryProxy : public EarthView::World::Graphic::CRaySceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_Real_callback;
				EarthView::World::Core::ev_string m_getListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_setRay_CRay_callback;
				EarthView::World::Core::ev_string m_getRay_void_callback;
				EarthView::World::Core::ev_string m_setSortByDistance_ev_bool_ev_uint16_callback;
				EarthView::World::Core::ev_string m_setSortByDistance_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSortByDistance_void_callback;
				EarthView::World::Core::ev_string m_getMaxResults_void_callback;
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CRaySceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCRaySceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQuery(pList)
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
				void register_queryResult_CMovableObject_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_WorldFragment_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_Real_callback = __method;
				}
				void register_getListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerPtr_void_callback = __method;
				}
				void register_setRay_CRay_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRay_CRay_callback = __method;
				}
				void register_getRay_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRay_void_callback = __method;
				}
				void register_setSortByDistance_ev_bool_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSortByDistance_ev_bool_ev_uint16_callback = __method;
				}
				void register_setSortByDistance_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSortByDistance_ev_bool_callback = __method;
				}
				void register_getSortByDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSortByDistance_void_callback = __method;
				}
				void register_getMaxResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxResults_void_callback = __method;
				}
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CRaySceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CRaySceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j);
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
						return this->CRaySceneQuery::queryResult(obj, distance);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_int32 objIndex, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jint objIndex_j = (jint) objIndex;
						jint submeshIndex_j = (jint) submeshIndex;
						jint instanceIndex_j = (jint) instanceIndex;
						jint segmentIndex_j = (jint) segmentIndex;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_real32 e, ev_uint8 c, ev_uint16 i, ev_uint16 r, EarthView::World::Graphic::CColourValue& cv, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jfloat e_j = (jfloat) e;
						jshort c_j = (jshort) c;
						jint i_j = (jint) i;
						jint r_j = (jint) r;
						jlong cv_j = (jlong) &cv;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, e_j, c_j, i_j, r_j, cv_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_Real_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j, distance_j);
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
						return this->CRaySceneQuery::queryResult(fragment, distance);
					}
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *__values1 = (const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getListenerPtr();
					}
				}
				virtual void setRay(const EarthView::World::Spatial::Math::CRay& ray)
				{
					if (this->_gRef != NULL && this->m_setRay_CRay_callback != "" && this->isCustomExtend())
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
						jlong ray_j = (jlong) &ray;
						jmethodID __method = __gr->getMethod("setRay_CRay_callback");
						__env->CallVoidMethod(__obj, __method , ray_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setRay(ray);
					}
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if (this->_gRef != NULL && this->m_getRay_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRay_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CRay &__values1 = *(const EarthView::World::Spatial::Math::CRay*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getRay();
					}
				}
				virtual void setSortByDistance(ev_bool sort, ev_uint16 maxresults)
				{
					if (this->_gRef != NULL && this->m_setSortByDistance_ev_bool_ev_uint16_callback != "" && this->isCustomExtend())
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
						jboolean sort_j = (jboolean) sort;
						jint maxresults_j = (jint) maxresults;
						jmethodID __method = __gr->getMethod("setSortByDistance_ev_bool_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , sort_j, maxresults_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setSortByDistance(sort, maxresults);
					}
				}
				virtual void setSortByDistance(ev_bool sort)
				{
					if (this->_gRef != NULL && this->m_setSortByDistance_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean sort_j = (jboolean) sort;
						jmethodID __method = __gr->getMethod("setSortByDistance_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , sort_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setSortByDistance(sort);
					}
				}
				virtual ev_bool getSortByDistance() const
				{
					if (this->_gRef != NULL && this->m_getSortByDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSortByDistance_void_callback");
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
						return this->CRaySceneQuery::getSortByDistance();
					}
				}
				virtual ev_uint16 getMaxResults() const
				{
					if (this->_gRef != NULL && this->m_getMaxResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaxResults_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getMaxResults();
					}
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RaySceneQueryResult &__values1 = *(EarthView::World::Graphic::RaySceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CRaySceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CRaySceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RaySceneQueryResult &__values1 = *(EarthView::World::Graphic::RaySceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::clearResults();
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CRaySceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CRaySceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CRaySceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRaySceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRaySceneQueryProxy);
			class JCRaySceneQueryInternalListenerProxy : public EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_Real_callback;
			public:
				JCRaySceneQueryInternalListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySceneQueryInternalListener(pList)
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
				void register_queryResult_CMovableObject_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_WorldFragment_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_Real_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j);
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
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_int32 objIndex, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jint objIndex_j = (jint) objIndex;
						jint submeshIndex_j = (jint) submeshIndex;
						jint instanceIndex_j = (jint) instanceIndex;
						jint segmentIndex_j = (jint) segmentIndex;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_real32 e, ev_uint8 c, ev_uint16 i, ev_uint16 r, EarthView::World::Graphic::CColourValue& cv, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jdouble distance_j = (jdouble) distance;
						jfloat e_j = (jfloat) e;
						jshort c_j = (jshort) c;
						jint i_j = (jint) i;
						jint r_j = (jint) r;
						jlong cv_j = (jlong) &cv;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, e_j, c_j, i_j, r_j, cv_j, point_j, pixelpoint_j);
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
						return this->CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_Real_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j, distance_j);
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
						return this->CRaySceneQueryInternalListener::queryResult(fragment, distance);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRaySceneQueryInternalListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryInternalListenerProxy *pObjectX = (JCRaySceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryInternalListenerProxy *pObjectX = (JCRaySceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback", "(JDIIIIJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryInternalListenerProxy *pObjectX = (JCRaySceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback", "(JDFSIIJJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1WorldFragment_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryInternalListenerProxy *pObjectX = (JCRaySceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_00024RaySceneQueryInternalListener_queryResult_1WorldFragment_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener::queryResult(fragment, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback", "(JDIIIIJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jint objIndex_j, jint submeshIndex_j, jint instanceIndex_j, jint segmentIndex_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_int32 objIndex = (ev_int32) objIndex_j;
				ev_int32 submeshIndex = (ev_int32) submeshIndex_j;
				ev_int32 instanceIndex = (ev_int32) instanceIndex_j;
				ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback", "(JDFSIIJJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j, jdouble distance_j, jfloat e_j, jshort c_j, jint i_j, jint r_j, jlong cv_j, jlong point_j, jlong pixelpoint_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				Real distance = (Real) distance_j;
				ev_real32 e = (ev_real32) e_j;
				ev_uint8 c = (ev_uint8) c_j;
				ev_uint16 i = (ev_uint16) i_j;
				ev_uint16 r = (ev_uint16) r_j;
				EarthView::World::Graphic::CColourValue &cv = *(EarthView::World::Graphic::CColourValue*) cv_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Spatial::Math::CVector2 &pixelpoint = *(EarthView::World::Spatial::Math::CVector2*) pixelpoint_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1WorldFragment_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(fragment, distance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_queryResult_1WorldFragment_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fragment_j, jdouble distance_j)
			{
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::queryResult(fragment, distance);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* __values1 = pObjectX->getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getListenerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setRay_1CRay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySceneQuery::setRay(ray);
				}
				else
				{
					pObjectX->setRay(ray);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setRay_1CRay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRay_CRay_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRay_CRay_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setRay_1CRay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySceneQuery::setRay(ray);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getRay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					const EarthView::World::Spatial::Math::CRay& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getRay();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CRay& __values1 = pObjectX->getRay();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getRay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRay_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRay_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getRay_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRay& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getRay();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setSortByDistance_1ev_1bool_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean sort_j, jint maxresults_j)
			{
				ev_bool sort = (ev_bool) sort_j;
				ev_uint16 maxresults = (ev_uint16) maxresults_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort, maxresults);
				}
				else
				{
					pObjectX->setSortByDistance(sort, maxresults);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setSortByDistance_1ev_1bool_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSortByDistance_ev_bool_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSortByDistance_ev_bool_ev_uint16_callback", "(ZI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setSortByDistance_1ev_1bool_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean sort_j, jint maxresults_j)
			{
				ev_bool sort = (ev_bool) sort_j;
				ev_uint16 maxresults = (ev_uint16) maxresults_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort, maxresults);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setSortByDistance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean sort_j)
			{
				ev_bool sort = (ev_bool) sort_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort);
				}
				else
				{
					pObjectX->setSortByDistance(sort);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setSortByDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSortByDistance_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSortByDistance_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_setSortByDistance_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean sort_j)
			{
				ev_bool sort = (ev_bool) sort_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySceneQuery::setSortByDistance(sort);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getSortByDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getSortByDistance();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getSortByDistance();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getSortByDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSortByDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSortByDistance_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getSortByDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getSortByDistance();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getMaxResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getMaxResults();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getMaxResults();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getMaxResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxResults_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getMaxResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getMaxResults();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_execute_1CRaySceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1execute_1CRaySceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CRaySceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CRaySceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_execute_1CRaySceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getLastResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySceneQuery_getLastResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySceneQuery::getLastResults();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySceneQuery::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySceneQuery *pObjectX = (EarthView::World::Graphic::CRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySceneQuery::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySceneQueryProxy *pObjectX = (JCRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCIntersectionSceneQueryListenerProxy : public EarthView::World::Graphic::CIntersectionSceneQueryListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_WorldFragment_callback;
			public:
				JCIntersectionSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQueryListener(pList)
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
				void register_queryResult_CMovableObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_WorldFragment_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Graphic::CMovableObject* second)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong second_j = (jlong) second;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, second_j);
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
						return this->CIntersectionSceneQueryListener::queryResult(first, second);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* movable, EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong movable_j = (jlong) movable;
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , movable_j, fragment_j);
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
						return this->CIntersectionSceneQueryListener::queryResult(movable, fragment);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCIntersectionSceneQueryListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_register_1queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryListenerProxy *pObjectX = (JCIntersectionSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_CMovableObject_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_queryResult_1CMovableObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(first, second);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_register_1queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryListenerProxy *pObjectX = (JCIntersectionSceneQueryListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_WorldFragment_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryListener_queryResult_1CMovableObject_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQueryListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQueryListener::queryResult(movable, fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectPair_set_1first_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjXXXX;
				pObjectX->first = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectPair_set_1second_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectWorldFragmentPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectWorldFragmentPair_set_1first_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjXXXX;
				pObjectX->first = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectWorldFragmentPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableObjectWorldFragmentPair_set_1second_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair *pObjectX = (EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_push_1back_1SceneQueryMovableObjectPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectPair &t = *(EarthView::World::Graphic::SceneQueryMovableObjectPair*) t_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_insert_1ev_1uint32_1SceneQueryMovableObjectPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryMovableObjectPair &t = *(EarthView::World::Graphic::SceneQueryMovableObjectPair*) t_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList& pObjectX = *(EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectPair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableIntersectionList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableIntersectionList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_push_1back_1SceneQueryMovableObjectWorldFragmentPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &t = *(EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*) t_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_insert_1ev_1uint32_1SceneQueryMovableObjectWorldFragmentPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &t = *(EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair*) t_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList& pObjectX = *(EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneQueryMovableWorldFragmentIntersectionList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList *pObjectX = (EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryResult_get_1movables2movables_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult *pObjectX = (EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->movables2movables);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryResult_set_1movables2movables_1SceneQueryMovableIntersectionList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult *pObjectX = (EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjXXXX;
				pObjectX->movables2movables = *(EarthView::World::Graphic::SceneQueryMovableIntersectionList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryResult_get_1movables2world_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult *pObjectX = (EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->movables2world);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQueryResult_set_1movables2world_1SceneQueryMovableWorldFragmentIntersectionList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::IntersectionSceneQueryResult *pObjectX = (EarthView::World::Graphic::IntersectionSceneQueryResult*)pObjXXXX;
				pObjectX->movables2world = *(EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList*) __values1_j;
			}
			class JCIntersectionSceneQueryProxy : public EarthView::World::Graphic::CIntersectionSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_WorldFragment_callback;
				EarthView::World::Core::ev_string m_getListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CIntersectionSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCIntersectionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQuery(pList)
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
				void register_queryResult_CMovableObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_WorldFragment_callback = __method;
				}
				void register_getListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerPtr_void_callback = __method;
				}
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CIntersectionSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CIntersectionSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Graphic::CMovableObject* second)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong second_j = (jlong) second;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, second_j);
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
						return this->CIntersectionSceneQuery::queryResult(first, second);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* movable, EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong movable_j = (jlong) movable;
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , movable_j, fragment_j);
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
						return this->CIntersectionSceneQuery::queryResult(movable, fragment);
					}
				}
				virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* getListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *__values1 = (const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CIntersectionSceneQuery::getListenerPtr();
					}
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::IntersectionSceneQueryResult &__values1 = *(EarthView::World::Graphic::IntersectionSceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CIntersectionSceneQuery::execute();
					}
				}
				virtual void execute(EarthView::World::Graphic::CIntersectionSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CIntersectionSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CIntersectionSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CIntersectionSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::IntersectionSceneQueryResult &__values1 = *(EarthView::World::Graphic::IntersectionSceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CIntersectionSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CIntersectionSceneQuery::clearResults();
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CIntersectionSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
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
						return this->CIntersectionSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CIntersectionSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
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
						return this->CIntersectionSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CIntersectionSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CIntersectionSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CIntersectionSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCIntersectionSceneQueryProxy);
			class JCIntersectionSceneQueryInternalListenerProxy : public EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_WorldFragment_callback;
			public:
				JCIntersectionSceneQueryInternalListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntersectionSceneQueryInternalListener(pList)
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
				void register_queryResult_CMovableObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_WorldFragment_callback = __method;
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Graphic::CMovableObject* second)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong second_j = (jlong) second;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, second_j);
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
						return this->CIntersectionSceneQueryInternalListener::queryResult(first, second);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* movable, EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong movable_j = (jlong) movable;
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , movable_j, fragment_j);
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
						return this->CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCIntersectionSceneQueryInternalListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_register_1queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryInternalListenerProxy *pObjectX = (JCIntersectionSceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_CMovableObject_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_queryResult_1CMovableObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(first, second);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryInternalListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_register_1queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryInternalListenerProxy *pObjectX = (JCIntersectionSceneQueryInternalListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_WorldFragment_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_00024IntersectionSceneQueryInternalListener_queryResult_1CMovableObject_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener::queryResult(movable, fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(first, second);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_CMovableObject_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_queryResult_1CMovableObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong first_j, jlong second_j)
			{
				EarthView::World::Graphic::CMovableObject *first = (EarthView::World::Graphic::CMovableObject*) first_j;
				EarthView::World::Graphic::CMovableObject *second = (EarthView::World::Graphic::CMovableObject*) second_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(first, second);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->queryResult(movable, fragment);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_WorldFragment_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_queryResult_1CMovableObject_1WorldFragment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movable_j, jlong fragment_j)
			{
				EarthView::World::Graphic::CMovableObject *movable = (EarthView::World::Graphic::CMovableObject*) movable_j;
				EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment = (EarthView::World::Graphic::CSceneQuery::WorldFragment*) fragment_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::queryResult(movable, fragment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_getListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* __values1 = pObjectX->getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_getListenerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::getListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_execute_1CIntersectionSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener *listener = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1execute_1CIntersectionSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CIntersectionSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CIntersectionSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_execute_1CIntersectionSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener *listener = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_getLastResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->getLastResults();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_getLastResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				EarthView::World::Graphic::IntersectionSceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::getLastResults();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCIntersectionSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CIntersectionSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CIntersectionSceneQuery::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntersectionSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCIntersectionSceneQueryProxy *pObjectX = (JCIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
