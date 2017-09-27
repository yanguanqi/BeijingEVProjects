/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/lodstrategy.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCLodStrategyProxy : public EarthView::World::Graphic::CLodStrategy
			{
			 private:
				EarthView::World::Core::ev_string m_getValueImpl_CMovableObject_CCamera_callback;
				EarthView::World::Core::ev_string m_getBaseValue_void_callback;
				EarthView::World::Core::ev_string m_transformBias_Real_callback;
				EarthView::World::Core::ev_string m_transformUserValue_Real_callback;
				EarthView::World::Core::ev_string m_getIndex_Real_MeshLodUsageList_callback;
				EarthView::World::Core::ev_string m_getIndex_Real_LodValueList_callback;
				EarthView::World::Core::ev_string m_sort_MeshLodUsageList_callback;
				EarthView::World::Core::ev_string m_isSorted_LodValueList_callback;
			public:
				JCLodStrategyProxy(EarthView::World::Core::CNameValuePairList *pList) : CLodStrategy(pList)
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
				void register_getValueImpl_CMovableObject_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValueImpl_CMovableObject_CCamera_callback = __method;
				}
				void register_getBaseValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBaseValue_void_callback = __method;
				}
				void register_transformBias_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_transformBias_Real_callback = __method;
				}
				void register_transformUserValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_transformUserValue_Real_callback = __method;
				}
				void register_getIndex_Real_MeshLodUsageList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getIndex_Real_MeshLodUsageList_callback = __method;
				}
				void register_getIndex_Real_LodValueList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getIndex_Real_LodValueList_callback = __method;
				}
				void register_sort_MeshLodUsageList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_sort_MeshLodUsageList_callback = __method;
				}
				void register_isSorted_LodValueList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isSorted_LodValueList_callback = __method;
				}
				virtual Real getValueImpl(const EarthView::World::Graphic::CMovableObject* movableObject, const EarthView::World::Graphic::CCamera* camera) const
				{
					if (this->_gRef != NULL && this->m_getValueImpl_CMovableObject_CCamera_callback != "" && this->isCustomExtend())
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
						jlong movableObject_j = (jlong) movableObject;
						jlong camera_j = (jlong) camera;
						jmethodID __method = __gr->getMethod("getValueImpl_CMovableObject_CCamera_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , movableObject_j, camera_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLodStrategy::getValueImpl(movableObject, camera);
					}
				}
				virtual Real getBaseValue() const
				{
					if (this->_gRef != NULL && this->m_getBaseValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBaseValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLodStrategy::getBaseValue();
					}
				}
				virtual Real transformBias(Real factor) const
				{
					if (this->_gRef != NULL && this->m_transformBias_Real_callback != "" && this->isCustomExtend())
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
						jdouble factor_j = (jdouble) factor;
						jmethodID __method = __gr->getMethod("transformBias_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , factor_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLodStrategy::transformBias(factor);
					}
				}
				virtual Real transformUserValue(Real userValue) const
				{
					if (this->_gRef != NULL && this->m_transformUserValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble userValue_j = (jdouble) userValue;
						jmethodID __method = __gr->getMethod("transformUserValue_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , userValue_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CLodStrategy::transformUserValue(userValue);
					}
				}
				virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList& meshLodUsageList) const
				{
					if (this->_gRef != NULL && this->m_getIndex_Real_MeshLodUsageList_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jlong meshLodUsageList_j = (jlong) &meshLodUsageList;
						jmethodID __method = __gr->getMethod("getIndex_Real_MeshLodUsageList_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , value_j, meshLodUsageList_j);
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
						return this->CLodStrategy::getIndex(value, meshLodUsageList);
					}
				}
				virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::LodValueList& materialLodValueList) const
				{
					if (this->_gRef != NULL && this->m_getIndex_Real_LodValueList_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jlong materialLodValueList_j = (jlong) &materialLodValueList;
						jmethodID __method = __gr->getMethod("getIndex_Real_LodValueList_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , value_j, materialLodValueList_j);
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
						return this->CLodStrategy::getIndex(value, materialLodValueList);
					}
				}
				virtual void sort(EarthView::World::Graphic::CMesh::MeshLodUsageList& meshLodUsageList) const
				{
					if (this->_gRef != NULL && this->m_sort_MeshLodUsageList_callback != "" && this->isCustomExtend())
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
						jlong meshLodUsageList_j = (jlong) &meshLodUsageList;
						jmethodID __method = __gr->getMethod("sort_MeshLodUsageList_callback");
						__env->CallVoidMethod(__obj, __method , meshLodUsageList_j);
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
						return this->CLodStrategy::sort(meshLodUsageList);
					}
				}
				virtual ev_bool isSorted(const EarthView::World::Graphic::LodValueList& values) const
				{
					if (this->_gRef != NULL && this->m_isSorted_LodValueList_callback != "" && this->isCustomExtend())
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
						jlong values_j = (jlong) &values;
						jmethodID __method = __gr->getMethod("isSorted_LodValueList_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , values_j);
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
						return this->CLodStrategy::isSorted(values);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLodStrategyProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_getValueImpl_1CMovableObject_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movableObject_j, jlong camera_j)
			{
				const EarthView::World::Graphic::CMovableObject *movableObject = (const EarthView::World::Graphic::CMovableObject*) movableObject_j;
				const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getValueImpl(movableObject, camera);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValueImpl(movableObject, camera);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1getValueImpl_1CMovableObject_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValueImpl_CMovableObject_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValueImpl_CMovableObject_CCamera_callback", "(JJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_getValueImpl_1CMovableObject_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movableObject_j, jlong camera_j)
			{
				const EarthView::World::Graphic::CMovableObject *movableObject = (const EarthView::World::Graphic::CMovableObject*) movableObject_j;
				const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getValueImpl(movableObject, camera);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_getBaseValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getBaseValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getBaseValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1getBaseValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBaseValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBaseValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_getBaseValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getBaseValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_transformBias_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble factor_j)
			{
				Real factor = (Real) factor_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::transformBias(factor);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->transformBias(factor);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1transformBias_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_transformBias_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"transformBias_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_transformBias_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble factor_j)
			{
				Real factor = (Real) factor_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::transformBias(factor);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_transformUserValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble userValue_j)
			{
				Real userValue = (Real) userValue_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::transformUserValue(userValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->transformUserValue(userValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1transformUserValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_transformUserValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"transformUserValue_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_transformUserValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble userValue_j)
			{
				Real userValue = (Real) userValue_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::transformUserValue(userValue);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LodStrategy_getValue_1CMovableObject_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong movableObject_j, jlong camera_j)
			{
				const EarthView::World::Graphic::CMovableObject *movableObject = (const EarthView::World::Graphic::CMovableObject*) movableObject_j;
				const EarthView::World::Graphic::CCamera *camera = (const EarthView::World::Graphic::CCamera*) camera_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				Real __values1 = pObjectX->getValue(movableObject, camera);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LodStrategy_getIndex_1Real_1MeshLodUsageList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong meshLodUsageList_j)
			{
				Real value = (Real) value_j;
				const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) meshLodUsageList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getIndex(value, meshLodUsageList);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getIndex(value, meshLodUsageList);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1getIndex_1Real_1MeshLodUsageList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getIndex_Real_MeshLodUsageList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getIndex_Real_MeshLodUsageList_callback", "(DJ)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LodStrategy_getIndex_1Real_1MeshLodUsageList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong meshLodUsageList_j)
			{
				Real value = (Real) value_j;
				const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) meshLodUsageList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getIndex(value, meshLodUsageList);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LodStrategy_getIndex_1Real_1LodValueList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong materialLodValueList_j)
			{
				Real value = (Real) value_j;
				const EarthView::World::Graphic::LodValueList &materialLodValueList = *(EarthView::World::Graphic::LodValueList*) materialLodValueList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getIndex(value, materialLodValueList);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getIndex(value, materialLodValueList);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1getIndex_1Real_1LodValueList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getIndex_Real_LodValueList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getIndex_Real_LodValueList_callback", "(DJ)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LodStrategy_getIndex_1Real_1LodValueList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong materialLodValueList_j)
			{
				Real value = (Real) value_j;
				const EarthView::World::Graphic::LodValueList &materialLodValueList = *(EarthView::World::Graphic::LodValueList*) materialLodValueList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::getIndex(value, materialLodValueList);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_sort_1MeshLodUsageList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshLodUsageList_j)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) meshLodUsageList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					pObjectX->EarthView::World::Graphic::CLodStrategy::sort(meshLodUsageList);
				}
				else
				{
					pObjectX->sort(meshLodUsageList);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1sort_1MeshLodUsageList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_sort_MeshLodUsageList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"sort_MeshLodUsageList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_sort_1MeshLodUsageList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshLodUsageList_j)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) meshLodUsageList_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLodStrategy::sort(meshLodUsageList);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodStrategy_isSorted_1LodValueList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong values_j)
			{
				const EarthView::World::Graphic::LodValueList &values = *(EarthView::World::Graphic::LodValueList*) values_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLodStrategyProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::isSorted(values);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isSorted(values);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_register_1isSorted_1LodValueList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLodStrategyProxy *pObjectX = (JCLodStrategyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isSorted_LodValueList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isSorted_LodValueList_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LodStrategy_isSorted_1LodValueList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong values_j)
			{
				const EarthView::World::Graphic::LodValueList &values = *(EarthView::World::Graphic::LodValueList*) values_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CLodStrategy::isSorted(values);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategy_assertSorted_1LodValueList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong values_j)
			{
				const EarthView::World::Graphic::LodValueList &values = *(EarthView::World::Graphic::LodValueList*) values_j;
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				pObjectX->assertSorted(values);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategy_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLodStrategy *pObjectX = (EarthView::World::Graphic::CLodStrategy*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
