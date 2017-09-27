/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/simpleline.h"
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
			class JCSimplelineProxy : public EarthView::IndustryEngine::IndustryGraphic::CSimpleline
			{
			 private:
				EarthView::World::Core::ev_string m_addSubSimpleline_void_callback;
				EarthView::World::Core::ev_string m_getSubSimpleline_ev_int32_callback;
				EarthView::World::Core::ev_string m_removeSubSimpleline_ev_int32_callback;
				EarthView::World::Core::ev_string m_removeAllPoints_void_callback;
				EarthView::World::Core::ev_string m_getColor_void_callback;
				EarthView::World::Core::ev_string m_setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_getID_void_callback;
				EarthView::World::Core::ev_string m_setID_ev_int32_callback;
				EarthView::World::Core::ev_string m_getCount_void_callback;
				EarthView::World::Core::ev_string m_getVisible_void_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
				EarthView::World::Core::ev_string m_containVertex_ev_uint32_callback;
				EarthView::World::Core::ev_string m_setNeedHightlight_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedHightlight_void_callback;
			public:
				JCSimplelineProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleline(pList)
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
				void register_addSubSimpleline_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addSubSimpleline_void_callback = __method;
				}
				void register_getSubSimpleline_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSubSimpleline_ev_int32_callback = __method;
				}
				void register_removeSubSimpleline_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeSubSimpleline_ev_int32_callback = __method;
				}
				void register_removeAllPoints_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllPoints_void_callback = __method;
				}
				void register_getColor_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColor_void_callback = __method;
				}
				void register_setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_getID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getID_void_callback = __method;
				}
				void register_setID_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setID_ev_int32_callback = __method;
				}
				void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCount_void_callback = __method;
				}
				void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVisible_void_callback = __method;
				}
				void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_callback = __method;
				}
				void register_containVertex_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_containVertex_ev_uint32_callback = __method;
				}
				void register_setNeedHightlight_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedHightlight_ev_bool_callback = __method;
				}
				void register_getNeedHightlight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedHightlight_void_callback = __method;
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* addSubSimpleline()
				{
					if (this->_gRef != NULL && this->m_addSubSimpleline_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("addSubSimpleline_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *__values1 = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSimpleline::addSubSimpleline();
					}
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* getSubSimpleline(const ev_int32& index)
				{
					if (this->_gRef != NULL && this->m_getSubSimpleline_ev_int32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSubSimpleline_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline *__values1 = (EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSimpleline::getSubSimpleline(index);
					}
				}
				virtual void removeSubSimpleline(const ev_int32& index)
				{
					if (this->_gRef != NULL && this->m_removeSubSimpleline_ev_int32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeSubSimpleline_ev_int32_callback");
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
						return this->CSimpleline::removeSubSimpleline(index);
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
						return this->CSimpleline::removeAllPoints();
					}
				}
				virtual EarthView::World::Graphic::CColourValue& getColor()
				{
					if (this->_gRef != NULL && this->m_getColor_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getColor_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CColourValue &__values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSimpleline::getColor();
					}
				}
				virtual void setColor(const ev_real32& red, const ev_real32& green, const ev_real32& blue, const ev_real32& alpha)
				{
					if (this->_gRef != NULL && this->m_setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jfloat red_j = (jfloat) red;
						jfloat green_j = (jfloat) green;
						jfloat blue_j = (jfloat) blue;
						jfloat alpha_j = (jfloat) alpha;
						jmethodID __method = __gr->getMethod("setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , red_j, green_j, blue_j, alpha_j);
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
						return this->CSimpleline::setColor(red, green, blue, alpha);
					}
				}
				virtual ev_int32 getID()
				{
					if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getID_void_callback");
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
						return this->CSimpleline::getID();
					}
				}
				virtual void setID(const ev_int32& id)
				{
					if (this->_gRef != NULL && this->m_setID_ev_int32_callback != "" && this->isCustomExtend())
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
						jint id_j = (jint) id;
						jmethodID __method = __gr->getMethod("setID_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CSimpleline::setID(id);
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
						return this->CSimpleline::getCount();
					}
				}
				virtual ev_bool getVisible()
				{
					if (this->_gRef != NULL && this->m_getVisible_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVisible_void_callback");
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
						return this->CSimpleline::getVisible();
					}
				}
				virtual void setVisible(const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CSimpleline::setVisible(value);
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
						return this->CSimpleline::containVertex(indexPos);
					}
				}
				virtual void setNeedHightlight(const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setNeedHightlight_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setNeedHightlight_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CSimpleline::setNeedHightlight(value);
					}
				}
				virtual ev_bool getNeedHightlight()
				{
					if (this->_gRef != NULL && this->m_getNeedHightlight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNeedHightlight_void_callback");
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
						return this->CSimpleline::getNeedHightlight();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSimplelineProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_addSubSimpleline_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::addSubSimpleline();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->addSubSimpleline();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1addSubSimpleline_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addSubSimpleline_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addSubSimpleline_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_addSubSimpleline_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::addSubSimpleline();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getSubSimpleline_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getSubSimpleline(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->getSubSimpleline(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getSubSimpleline_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSubSimpleline_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSubSimpleline_ev_int32_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getSubSimpleline_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getSubSimpleline(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_removeSubSimpleline_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeSubSimpleline(index);
				}
				else
				{
					pObjectX->removeSubSimpleline(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1removeSubSimpleline_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeSubSimpleline_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeSubSimpleline_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_removeSubSimpleline_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeSubSimpleline(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_removeAllPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeAllPoints();
				}
				else
				{
					pObjectX->removeAllPoints();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1removeAllPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_removeAllPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::removeAllPoints();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getColor();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColor();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColor_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColor_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getColor();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j, jfloat alpha_j)
			{
				const ev_real32 red = (const ev_real32) red_j;
				const ev_real32 green = (const ev_real32) green_j;
				const ev_real32 blue = (const ev_real32) blue_j;
				const ev_real32 alpha = (const ev_real32) alpha_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setColor(red, green, blue, alpha);
				}
				else
				{
					pObjectX->setColor(red, green, blue, alpha);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1setColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(FFFF)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setColor_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat red_j, jfloat green_j, jfloat blue_j, jfloat alpha_j)
			{
				const ev_real32 red = (const ev_real32) red_j;
				const ev_real32 green = (const ev_real32) green_j;
				const ev_real32 blue = (const ev_real32) blue_j;
				const ev_real32 alpha = (const ev_real32) alpha_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setColor(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getID();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
			{
				const ev_int32 id = (const ev_int32) id_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setID(id);
				}
				else
				{
					pObjectX->setID(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1setID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setID_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setID_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setID_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
			{
				const ev_int32 id = (const ev_int32) id_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setID(id);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getCount();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVisible_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVisible_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setVisible(value);
				}
				else
				{
					pObjectX->setVisible(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setVisible(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_containVertex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indexPos_j)
			{
				const ev_uint32 indexPos = (const ev_uint32) indexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::containVertex(indexPos);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1containVertex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_containVertex_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indexPos_j)
			{
				const ev_uint32 indexPos = (const ev_uint32) indexPos_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::containVertex(indexPos);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setNeedHightlight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setNeedHightlight(value);
				}
				else
				{
					pObjectX->setNeedHightlight(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1setNeedHightlight_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedHightlight_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedHightlight_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_setNeedHightlight_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::setNeedHightlight(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getNeedHightlight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSimplelineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getNeedHightlight();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getNeedHightlight();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_register_1getNeedHightlight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSimplelineProxy *pObjectX = (JCSimplelineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNeedHightlight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNeedHightlight_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_getNeedHightlight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CSimpleline*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CSimpleline::getNeedHightlight();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_get_1UNIQUE_1ID_1void(JNIEnv *__env, jclass __clazz)
			{
				jint __values1_j = (jint)(EarthView::IndustryEngine::IndustryGraphic::CSimpleline::UNIQUE_ID);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_Simpleline_set_1UNIQUE_1ID_1ev_1int32(JNIEnv *__env, jclass __clazz, jint __values1_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CSimpleline::UNIQUE_ID = (ev_int32)__values1_j;
			}
		}
	}
}
