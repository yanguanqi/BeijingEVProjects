/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/subsimpleline.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class JCSubSimplelineProxy : public EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline
			{
			 private:
				EarthView::World::Core::ev_string m_addPoint_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getPoint_ev_int32_callback;
				EarthView::World::Core::ev_string m_removePoint_ev_int32_callback;
				EarthView::World::Core::ev_string m_removeAllPoints_void_callback;
				EarthView::World::Core::ev_string m_getCount_void_callback;
				EarthView::World::Core::ev_string m_getBeginVertexPos_void_callback;
				EarthView::World::Core::ev_string m_setBeginVertexPos_ev_int32_callback;
				EarthView::World::Core::ev_string m_getEndVertexPos_void_callback;
				EarthView::World::Core::ev_string m_setEndVertexPos_ev_int32_callback;
				EarthView::World::Core::ev_string m_getBeginIndicePos_void_callback;
				EarthView::World::Core::ev_string m_setBeginIndicePos_ev_int32_callback;
				EarthView::World::Core::ev_string m_getEndIndicePos_void_callback;
				EarthView::World::Core::ev_string m_setEndIndicePos_ev_int32_callback;
				EarthView::World::Core::ev_string m_containVertex_ev_uint32_callback;
			public:
				JCSubSimplelineProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubSimpleline(pList)
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
				void register_addPoint_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPoint_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getPoint_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPoint_ev_int32_callback = __method;
				}
				void register_removePoint_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removePoint_ev_int32_callback = __method;
				}
				void register_removeAllPoints_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllPoints_void_callback = __method;
				}
				void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCount_void_callback = __method;
				}
				void register_getBeginVertexPos_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBeginVertexPos_void_callback = __method;
				}
				void register_setBeginVertexPos_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBeginVertexPos_ev_int32_callback = __method;
				}
				void register_getEndVertexPos_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEndVertexPos_void_callback = __method;
				}
				void register_setEndVertexPos_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEndVertexPos_ev_int32_callback = __method;
				}
				void register_getBeginIndicePos_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBeginIndicePos_void_callback = __method;
				}
				void register_setBeginIndicePos_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBeginIndicePos_ev_int32_callback = __method;
				}
				void register_getEndIndicePos_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEndIndicePos_void_callback = __method;
				}
				void register_setEndIndicePos_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEndIndicePos_ev_int32_callback = __method;
				}
				void register_containVertex_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_containVertex_ev_uint32_callback = __method;
				}
				virtual void addPoint(const ev_real64& x, const ev_real64& y, const ev_real64& z)
				{
					if (this->_gRef != NULL && this->m_addPoint_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("addPoint_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
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
						return this->CSubSimpleline::addPoint(x, y, z);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getPoint(const ev_int32& index)
				{
					if (this->_gRef != NULL && this->m_getPoint_ev_int32_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getPoint_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSubSimpleline::getPoint(index);
					}
				}
				virtual void removePoint(const ev_int32& index)
				{
					if (this->_gRef != NULL && this->m_removePoint_ev_int32_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removePoint_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CSubSimpleline::removePoint(index);
					}
				}
				virtual void removeAllPoints()
				{
					if (this->_gRef != NULL && this->m_removeAllPoints_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllPoints_void_callback");
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
						return this->CSubSimpleline::removeAllPoints();
					}
				}
				virtual ev_int32 getCount()
				{
					if (this->_gRef != NULL && this->m_getCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCount_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSubSimpleline::getCount();
					}
				}
				virtual ev_int32 getBeginVertexPos()
				{
					if (this->_gRef != NULL && this->m_getBeginVertexPos_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBeginVertexPos_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSubSimpleline::getBeginVertexPos();
					}
				}
				virtual void setBeginVertexPos(const ev_int32& beginVertexPos)
				{
					if (this->_gRef != NULL && this->m_setBeginVertexPos_ev_int32_callback != "" && this->isCustomExtend())
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
						jint beginVertexPos_j = (jint) beginVertexPos;
						jmethodID __method = __gr->getMethod("setBeginVertexPos_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , beginVertexPos_j);
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
						return this->CSubSimpleline::setBeginVertexPos(beginVertexPos);
					}
				}
				virtual ev_int32 getEndVertexPos()
				{
					if (this->_gRef != NULL && this->m_getEndVertexPos_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEndVertexPos_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSubSimpleline::getEndVertexPos();
					}
				}
				virtual void setEndVertexPos(const ev_int32& endVertexPos)
				{
					if (this->_gRef != NULL && this->m_setEndVertexPos_ev_int32_callback != "" && this->isCustomExtend())
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
						jint endVertexPos_j = (jint) endVertexPos;
						jmethodID __method = __gr->getMethod("setEndVertexPos_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , endVertexPos_j);
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
						return this->CSubSimpleline::setEndVertexPos(endVertexPos);
					}
				}
				virtual ev_int32 getBeginIndicePos()
				{
					if (this->_gRef != NULL && this->m_getBeginIndicePos_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBeginIndicePos_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSubSimpleline::getBeginIndicePos();
					}
				}
				virtual void setBeginIndicePos(const ev_int32& beginIndicePos)
				{
					if (this->_gRef != NULL && this->m_setBeginIndicePos_ev_int32_callback != "" && this->isCustomExtend())
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
						jint beginIndicePos_j = (jint) beginIndicePos;
						jmethodID __method = __gr->getMethod("setBeginIndicePos_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , beginIndicePos_j);
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
						return this->CSubSimpleline::setBeginIndicePos(beginIndicePos);
					}
				}
				virtual ev_int32 getEndIndicePos()
				{
					if (this->_gRef != NULL && this->m_getEndIndicePos_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEndIndicePos_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSubSimpleline::getEndIndicePos();
					}
				}
				virtual void setEndIndicePos(const ev_int32& endIndicePos)
				{
					if (this->_gRef != NULL && this->m_setEndIndicePos_ev_int32_callback != "" && this->isCustomExtend())
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
						jint endIndicePos_j = (jint) endIndicePos;
						jmethodID __method = __gr->getMethod("setEndIndicePos_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , endIndicePos_j);
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
						return this->CSubSimpleline::setEndIndicePos(endIndicePos);
					}
				}
				virtual ev_bool containVertex(const ev_uint32& indexPos)
				{
					if (this->_gRef != NULL && this->m_containVertex_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong indexPos_j = (jlong) indexPos;
						jmethodID __method = __gr->getMethod("containVertex_ev_uint32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , indexPos_j);
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
						return this->CSubSimpleline::containVertex(indexPos);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSubSimplelineProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_addPoint_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				const ev_real64 x = (const ev_real64) x_j;
				const ev_real64 y = (const ev_real64) y_j;
				const ev_real64 z = (const ev_real64) z_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::addPoint(x, y, z);
				}
				else
				{
					pObjectX->addPoint(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1addPoint_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPoint_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPoint_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_addPoint_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				const ev_real64 x = (const ev_real64) x_j;
				const ev_real64 y = (const ev_real64) y_j;
				const ev_real64 z = (const ev_real64) z_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::addPoint(x, y, z);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getPoint_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getPoint(index);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPoint(index);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getPoint_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPoint_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPoint_ev_int32_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getPoint_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getPoint(index);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_removePoint_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removePoint(index);
				}
				else
				{
					pObjectX->removePoint(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1removePoint_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removePoint_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removePoint_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_removePoint_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removePoint(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_removeAllPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removeAllPoints();
				}
				else
				{
					pObjectX->removeAllPoints();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1removeAllPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllPoints_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllPoints_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_removeAllPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::removeAllPoints();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCount_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getBeginVertexPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginVertexPos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getBeginVertexPos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getBeginVertexPos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBeginVertexPos_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBeginVertexPos_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getBeginVertexPos_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginVertexPos();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setBeginVertexPos_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint beginVertexPos_j)
			{
				const ev_int32 beginVertexPos = (const ev_int32) beginVertexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginVertexPos(beginVertexPos);
				}
				else
				{
					pObjectX->setBeginVertexPos(beginVertexPos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1setBeginVertexPos_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBeginVertexPos_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBeginVertexPos_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setBeginVertexPos_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint beginVertexPos_j)
			{
				const ev_int32 beginVertexPos = (const ev_int32) beginVertexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginVertexPos(beginVertexPos);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getEndVertexPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndVertexPos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getEndVertexPos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getEndVertexPos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEndVertexPos_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEndVertexPos_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getEndVertexPos_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndVertexPos();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setEndVertexPos_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint endVertexPos_j)
			{
				const ev_int32 endVertexPos = (const ev_int32) endVertexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndVertexPos(endVertexPos);
				}
				else
				{
					pObjectX->setEndVertexPos(endVertexPos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1setEndVertexPos_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEndVertexPos_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEndVertexPos_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setEndVertexPos_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint endVertexPos_j)
			{
				const ev_int32 endVertexPos = (const ev_int32) endVertexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndVertexPos(endVertexPos);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getBeginIndicePos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginIndicePos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getBeginIndicePos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getBeginIndicePos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBeginIndicePos_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBeginIndicePos_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getBeginIndicePos_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getBeginIndicePos();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setBeginIndicePos_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint beginIndicePos_j)
			{
				const ev_int32 beginIndicePos = (const ev_int32) beginIndicePos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginIndicePos(beginIndicePos);
				}
				else
				{
					pObjectX->setBeginIndicePos(beginIndicePos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1setBeginIndicePos_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBeginIndicePos_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBeginIndicePos_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setBeginIndicePos_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint beginIndicePos_j)
			{
				const ev_int32 beginIndicePos = (const ev_int32) beginIndicePos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setBeginIndicePos(beginIndicePos);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getEndIndicePos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndIndicePos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getEndIndicePos();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1getEndIndicePos_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEndIndicePos_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEndIndicePos_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_getEndIndicePos_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::getEndIndicePos();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setEndIndicePos_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint endIndicePos_j)
			{
				const ev_int32 endIndicePos = (const ev_int32) endIndicePos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndIndicePos(endIndicePos);
				}
				else
				{
					pObjectX->setEndIndicePos(endIndicePos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1setEndIndicePos_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEndIndicePos_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEndIndicePos_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_setEndIndicePos_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint endIndicePos_j)
			{
				const ev_int32 endIndicePos = (const ev_int32) endIndicePos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::setEndIndicePos(endIndicePos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_containVertex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indexPos_j)
			{
				const ev_uint32 indexPos = (const ev_uint32) indexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSubSimplelineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::containVertex(indexPos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->containVertex(indexPos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_register_1containVertex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSubSimplelineProxy *pObjectX = (JCSubSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_containVertex_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"containVertex_ev_uint32_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_SubSimpleline_containVertex_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indexPos_j)
			{
				const ev_uint32 indexPos = (const ev_uint32) indexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline::containVertex(indexPos);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
