/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/randomcolorramp.h"
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
			namespace Display
			{
				class JCRandomColorRampProxy : public EarthView::World::Spatial::Display::CRandomColorRamp
				{
				 private:
					EarthView::World::Core::ev_string m_createRamp_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getColorCount_void_callback;
					EarthView::World::Core::ev_string m_getColorRef_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getColorRampType_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_equal_CColorRamp_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCRandomColorRampProxy(EarthView::World::Core::CNameValuePairList *pList) : CRandomColorRamp(pList)
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
					void register_createRamp_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createRamp_ev_uint32_callback = __method;
					}
					void register_getColorCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorCount_void_callback = __method;
					}
					void register_getColorRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorRef_ev_uint32_callback = __method;
					}
					void register_getColorRampType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorRampType_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_equal_CColorRamp_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_equal_CColorRamp_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const
					{
						if (this->_gRef != NULL && this->m_getColorRampType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColorRampType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVColorRampType __values1 = (EarthView::World::Spatial::Display::EVColorRampType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRandomColorRamp::getColorRampType();
						}
					}
					virtual void createRamp(ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_createRamp_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("createRamp_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , count_j);
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
							return this->CRandomColorRamp::createRamp(count);
						}
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* clone() const
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
							EarthView::World::Spatial::Display::CColorRamp *__values1 = (EarthView::World::Spatial::Display::CColorRamp*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CRandomColorRamp::clone();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRandomColorRamp::toStream(stream);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRandomColorRamp::toXmlElement();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CRandomColorRamp::fromXmlElement(element);
						}
					}
					virtual ev_bool equal(const EarthView::World::Spatial::Display::CColorRamp* pColorRamp)
					{
						if (this->_gRef != NULL && this->m_equal_CColorRamp_callback != "" && this->isCustomExtend())
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
							jlong pColorRamp_j = (jlong) pColorRamp;
							jmethodID __method = __gr->getMethod("equal_CColorRamp_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pColorRamp_j);
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
							return this->CRandomColorRamp::equal(pColorRamp);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRandomColorRamp::fromStream(stream);
						}
					}
					virtual ev_uint32 getColorCount() const
					{
						if (this->_gRef != NULL && this->m_getColorCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColorCount_void_callback");
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
							return this->CRandomColorRamp::getColorCount();
						}
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getColorRef_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColorRef_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Display::IColor *__values1 = (const EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRandomColorRamp::getColorRef(index);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRandomColorRampProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getColorRampType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						EarthView::World::Spatial::Display::EVColorRampType __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::getColorRampType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorRampType __values1 = pObjectX->getColorRampType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1getColorRampType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorRampType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorRampType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getColorRampType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					EarthView::World::Spatial::Display::EVColorRampType __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::getColorRampType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMinHue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMinHue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMaxHue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMaxHue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMinSaturation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMinSaturation();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMaxSaturation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMaxSaturation();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMinValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMinValue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getMaxValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMaxValue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_useSeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_bool __values1 = pObjectX->useSeed();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_getSeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSeed();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMinHue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMinHue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMaxHue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMaxHue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMinSaturation_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMinSaturation(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMaxSaturation_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMaxSaturation(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMinValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMinValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setMaxValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setMaxValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setSeed_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint seed_j)
				{
					ev_int32 seed = (ev_int32) seed_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setSeed(seed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_setUseSeed_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean used_j)
				{
					ev_bool used = (ev_bool) used_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->setUseSeed(used);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_createRamp_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::createRamp(count);
					}
					else
					{
						pObjectX->createRamp(count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1createRamp_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createRamp_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createRamp_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_createRamp_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::createRamp(count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					EarthView::World::Spatial::Display::CColorRamp* __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_equal_1CColorRamp(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColorRamp_j)
				{
					const EarthView::World::Spatial::Display::CColorRamp *pColorRamp = (const EarthView::World::Spatial::Display::CColorRamp*) pColorRamp_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::equal(pColorRamp);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equal(pColorRamp);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1equal_1CColorRamp(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_equal_CColorRamp_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"equal_CColorRamp_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_equal_1CColorRamp_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColorRamp_j)
				{
					const EarthView::World::Spatial::Display::CColorRamp *pColorRamp = (const EarthView::World::Spatial::Display::CColorRamp*) pColorRamp_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::equal(pColorRamp);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRandomColorRampProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CRandomColorRamp *pObjectX = (EarthView::World::Spatial::Display::CRandomColorRamp*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CRandomColorRamp::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1getColorCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RandomColorRamp_register_1getColorRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRandomColorRampProxy *pObjectX = (JCRandomColorRampProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorRef_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorRef_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
