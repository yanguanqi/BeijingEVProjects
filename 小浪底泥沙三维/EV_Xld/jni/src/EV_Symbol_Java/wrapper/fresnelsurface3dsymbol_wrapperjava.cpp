/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/fresnelsurface3dsymbol.h"
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
				class JCFresnelSurface3DSymbolProxy : public EarthView::World::Spatial::Display::CFresnelSurface3DSymbol
				{
				 private:
					EarthView::World::Core::ev_string m_similar_ISymbol_callback;
					EarthView::World::Core::ev_string m_getFontColor_void_callback;
					EarthView::World::Core::ev_string m_getFontOutlineColor_void_callback;
					EarthView::World::Core::ev_string m_setFontOutlineColor_IColor_callback;
					EarthView::World::Core::ev_string m_setFontColor_IColor_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_getSize_void_callback;
					EarthView::World::Core::ev_string m_getColorRef_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toSLD_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_getColor_void_callback;
					EarthView::World::Core::ev_string m_setColor_IColor_callback;
					EarthView::World::Core::ev_string m_getSymbolType_void_callback;
					EarthView::World::Core::ev_string m_hasImage_void_callback;
					EarthView::World::Core::ev_string m_getImageCount_void_callback;
					EarthView::World::Core::ev_string m_getImageID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getImage_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_equal_ISymbol_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_fromSLD_EVString_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCFresnelSurface3DSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CFresnelSurface3DSymbol(pList)
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
					void register_similar_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_similar_ISymbol_callback = __method;
					}
					void register_getFontColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFontColor_void_callback = __method;
					}
					void register_getFontOutlineColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFontOutlineColor_void_callback = __method;
					}
					void register_setFontOutlineColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFontOutlineColor_IColor_callback = __method;
					}
					void register_setFontColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFontColor_IColor_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSize_void_callback = __method;
					}
					void register_getColorRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorRef_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toSLD_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toSLD_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_getColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColor_void_callback = __method;
					}
					void register_setColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setColor_IColor_callback = __method;
					}
					void register_getSymbolType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbolType_void_callback = __method;
					}
					void register_hasImage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasImage_void_callback = __method;
					}
					void register_getImageCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImageCount_void_callback = __method;
					}
					void register_getImageID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImageID_ev_uint32_callback = __method;
					}
					void register_getImage_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImage_ev_uint32_callback = __method;
					}
					void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_equal_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_equal_ISymbol_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_fromSLD_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromSLD_EVString_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual ev_uint32 getImageCount() const
					{
						if (this->_gRef != NULL && this->m_getImageCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getImageCount_void_callback");
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
							return this->CFresnelSurface3DSymbol::getImageCount();
						}
					}
					virtual EVString getImageID(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getImageID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getImageID_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
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
							return this->CFresnelSurface3DSymbol::getImageID(index);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getImage_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getImage_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
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
							return this->CFresnelSurface3DSymbol::getImage(index);
						}
					}
					virtual void setImage(ev_uint32 index, const EVString& imageID, EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if (this->_gRef != NULL && this->m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring imageID_wch = imageID;
							jstring imageID_j = __env->NewString((const jchar*)imageID_wch.getString(), imageID_wch.size());
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
							__env->CallVoidMethod(__obj, __method , index_j, imageID_j, stream_j);
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
							return this->CFresnelSurface3DSymbol::setImage(index, imageID, stream);
						}
					}
					virtual ev_int32 getSymbolType() const
					{
						if (this->_gRef != NULL && this->m_getSymbolType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSymbolType_void_callback");
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
							return this->CFresnelSurface3DSymbol::getSymbolType();
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
							return this->CFresnelSurface3DSymbol::toStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
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
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFresnelSurface3DSymbol::clone();
						}
					}
					virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_equal_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("equal_ISymbol_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSymbol_j);
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
							return this->CFresnelSurface3DSymbol::equal(pSymbol);
						}
					}
					virtual ev_bool similar(const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if (this->_gRef != NULL && this->m_similar_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("similar_ISymbol_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSymbol_j);
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
							return this->CFresnelSurface3DSymbol::similar(pSymbol);
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
							return this->CFresnelSurface3DSymbol::fromXmlElement(element);
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
							return this->CFresnelSurface3DSymbol::toXmlElement();
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
							return this->CFresnelSurface3DSymbol::fromStream(stream);
						}
					}
					virtual ev_bool hasImage() const
					{
						if (this->_gRef != NULL && this->m_hasImage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("hasImage_void_callback");
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
							return this->CFresnelSurface3DSymbol::hasImage();
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if (this->_gRef != NULL && this->m_getFontColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFontColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFresnelSurface3DSymbol::getFontColor();
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if (this->_gRef != NULL && this->m_getFontOutlineColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFontOutlineColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFresnelSurface3DSymbol::getFontOutlineColor();
						}
					}
					virtual void setFontOutlineColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setFontOutlineColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setFontOutlineColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CFresnelSurface3DSymbol::setFontOutlineColor(color);
						}
					}
					virtual void setFontColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setFontColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setFontColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CFresnelSurface3DSymbol::setFontColor(color);
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
							return this->CFresnelSurface3DSymbol::getName();
						}
					}
					virtual void setName(const EVString& szName)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring szName_wch = szName;
							jstring szName_j = __env->NewString((const jchar*)szName_wch.getString(), szName_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , szName_j);
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
							return this->CFresnelSurface3DSymbol::setName(szName);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
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
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFresnelSurface3DSymbol::getColor();
						}
					}
					virtual void setColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CFresnelSurface3DSymbol::setColor(color);
						}
					}
					virtual EVString toSLD() const
					{
						if (this->_gRef != NULL && this->m_toSLD_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toSLD_void_callback");
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
							return this->CFresnelSurface3DSymbol::toSLD();
						}
					}
					virtual void fromSLD(EVString& sld)
					{
						if (this->_gRef != NULL && this->m_fromSLD_EVString_callback != "" && this->isCustomExtend())
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
							jlong sld_j = (jlong) &sld;
							jmethodID __method = __gr->getMethod("fromSLD_EVString_callback");
							__env->CallVoidMethod(__obj, __method , sld_j);
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
							return this->CFresnelSurface3DSymbol::fromSLD(sld);
						}
					}
					virtual ev_real64 getSize() const
					{
						if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSize_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CFresnelSurface3DSymbol::getSize();
						}
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if (this->_gRef != NULL && this->m_getColorRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColorRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->CFresnelSurface3DSymbol::getColorRef();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFresnelSurface3DSymbolProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setTimeValue_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat t_j)
				{
					ev_real32 t = (ev_real32) t_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setTimeValue(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setScroll_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scroll_j)
				{
					ev_real32 scroll = (ev_real32) scroll_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setScroll(scroll);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getTimeValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTimeValue();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getScroll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getScroll();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setBrightnessScale_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat scale_j)
				{
					ev_real32 scale = (ev_real32) scale_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setBrightnessScale(scale);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getBrightnessScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getBrightnessScale();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setMinDistance_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat dis_j)
				{
					ev_real32 dis = (ev_real32) dis_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setMinDistance(dis);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getMinDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getMinDistance();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setVisibleDistance_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat dis_j)
				{
					ev_real32 dis = (ev_real32) dis_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setVisibleDistance(dis);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getVisibleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getVisibleDistance();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImageCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImageCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getImageCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getImageCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImageCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImageCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImageCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImageCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImageID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImageID(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getImageID(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getImageID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImageID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImageID_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImageID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImageID(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImage_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getImage_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImage_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImage_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getImage_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* imageID_ch = (const ev_char*)__env->GetStringUTFChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringUTFChars(imageID_j, (const char *)imageID_ch);
					#else
					const ev_wchar* imageID_ch = (const ev_wchar*)__env->GetStringChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringChars(imageID_j, (const jchar *)imageID_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::setImage(index, imageID, stream);
					}
					else
					{
						pObjectX->setImage(index, imageID, stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback", "(JLjava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* imageID_ch = (const ev_char*)__env->GetStringUTFChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringUTFChars(imageID_j, (const char *)imageID_ch);
					#else
					const ev_wchar* imageID_ch = (const ev_wchar*)__env->GetStringChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringChars(imageID_j, (const jchar *)imageID_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::setImage(index, imageID, stream);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getSymbolType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getSymbolType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getSymbolType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getSymbolType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbolType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbolType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getSymbolType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::getSymbolType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_equal_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::equal(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equal(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1equal_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_equal_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"equal_ISymbol_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_equal_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::equal(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_similar_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::similar(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->similar(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1similar_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_similar_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"similar_ISymbol_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_similar_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::similar(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getPictureUri_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					const EVString& __values1 = pObjectX->getPictureUri();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setPictureUri_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring uri_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* uri_ch = (const ev_char*)__env->GetStringUTFChars(uri_j,JNI_FALSE);
					const EVString uri = uri_ch;
					__env->ReleaseStringUTFChars(uri_j, (const char *)uri_ch);
					#else
					const ev_wchar* uri_ch = (const ev_wchar*)__env->GetStringChars(uri_j,JNI_FALSE);
					const EVString uri = uri_ch;
					__env->ReleaseStringChars(uri_j, (const jchar *)uri_ch);
					#endif
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setPictureUri(uri);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getFlowSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getFlowSpeed();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setFlowSpeed_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat speed_j)
				{
					ev_real32 speed = (ev_real32) speed_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setFlowSpeed(speed);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getWaveDensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWaveDensity();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setWaveDensity_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat density_j)
				{
					ev_real32 density = (ev_real32) density_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setWaveDensity(density);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getUnderWaterEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getUnderWaterEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setUnderWaterEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setUnderWaterEnable(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getReflectionEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getReflectionEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setReflectionEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setReflectionEnable(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getReflectWithoutSky_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getReflectWithoutSky();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setReflectWithoutSky_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setReflectWithoutSky(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getRefractionEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getRefractionEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setRefractionEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setRefractionEnable(flag);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getWaterDeep_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWaterDeep();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setWaterDeep_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat deep_j)
				{
					ev_real32 deep = (ev_real32) deep_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setWaterDeep(deep);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getWavePower_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWavePower();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setWavePower_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat power_j)
				{
					ev_real32 power = (ev_real32) power_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setWavePower(power);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getLightPower_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getLightPower();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setLightPower_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat power_j)
				{
					ev_real32 power = (ev_real32) power_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setLightPower(power);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getWaterColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getWaterColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setWaterColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setWaterColor(color);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getWaveDir_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getWaveDir();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setWaveDir_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat dir_j)
				{
					ev_real32 dir = (ev_real32) dir_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setWaveDir(dir);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFresnelSurface3DSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFresnelSurface3DSymbol::fromStream(stream);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_getGpuParametersDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getGpuParametersDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_setGpuParametersDirty_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean dirty_j)
				{
					ev_bool dirty = (ev_bool) dirty_j;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol *pObjectX = (EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*) pObjXXXX;
					pObjectX->setGpuParametersDirty(dirty);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getFontColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFontColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFontColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getFontOutlineColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFontOutlineColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFontOutlineColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1setFontOutlineColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFontOutlineColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFontOutlineColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1setFontColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFontColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFontColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getColorRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1toSLD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toSLD_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toSLD_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1setColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1hasImage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasImage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasImage_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FresnelSurface3DSymbol_register_1fromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFresnelSurface3DSymbolProxy *pObjectX = (JCFresnelSurface3DSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromSLD_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromSLD_EVString_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
