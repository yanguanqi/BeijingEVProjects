/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/formattedtextsymbol.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_EVCapitalizatoinFlagHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CF_MixedCase,
						CF_AllUppercase,
						CF_AllLowercase,
						CF_SmallCaps,
						CF_Capitalize
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				class JCFormattedTextSymbolProxy : public EarthView::World::Spatial::Display::CFormattedTextSymbol
				{
				 private:
					EarthView::World::Core::ev_string m_getTextSize_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getOutlineColor_void_callback;
					EarthView::World::Core::ev_string m_setOutlineColor_IColor_callback;
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
					JCFormattedTextSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CFormattedTextSymbol(pList)
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
					void register_getTextSize_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextSize_ev_real64_ev_real64_callback = __method;
					}
					void register_getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback = __method;
					}
					void register_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback = __method;
					}
					void register_getOutlineColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOutlineColor_void_callback = __method;
					}
					void register_setOutlineColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setOutlineColor_IColor_callback = __method;
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
					virtual void getTextSize(ev_real64* xSize, ev_real64* ySize)
					{
						if (this->_gRef != NULL && this->m_getTextSize_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong xSize_j = (jlong) xSize;
							jlong ySize_j = (jlong) ySize;
							jmethodID __method = __gr->getMethod("getTextSize_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , xSize_j, ySize_j);
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
							return this->CFormattedTextSymbol::getTextSize(xSize, ySize);
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
							return this->CFormattedTextSymbol::getSymbolType();
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
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CFormattedTextSymbol::clone();
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
							return this->CFormattedTextSymbol::toStream(stream);
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
							return this->CFormattedTextSymbol::toSLD();
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
							return this->CFormattedTextSymbol::fromXmlElement(element);
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
							return this->CFormattedTextSymbol::toXmlElement();
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
							return this->CFormattedTextSymbol::equal(pSymbol);
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
							return this->CFormattedTextSymbol::fromSLD(sld);
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
							return this->CFormattedTextSymbol::fromStream(stream);
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
							return this->CFormattedTextSymbol::getSize();
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getOutlineColor() const
					{
						if (this->_gRef != NULL && this->m_getOutlineColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getOutlineColor_void_callback");
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
							return this->CFormattedTextSymbol::getOutlineColor();
						}
					}
					virtual void setOutlineColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setOutlineColor_IColor_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setOutlineColor_IColor_callback");
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
							return this->CFormattedTextSymbol::setOutlineColor(color);
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
							return this->CFormattedTextSymbol::getName();
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
							return this->CFormattedTextSymbol::setName(szName);
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
							return this->CFormattedTextSymbol::getColor();
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
							return this->CFormattedTextSymbol::setColor(color);
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
							return this->CFormattedTextSymbol::hasImage();
						}
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
							return this->CFormattedTextSymbol::getImageCount();
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
							return this->CFormattedTextSymbol::getImageID(index);
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
							return this->CFormattedTextSymbol::getImage(index);
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
							return this->CFormattedTextSymbol::setImage(index, imageID, stream);
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
							return this->CFormattedTextSymbol::getColorRef();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFormattedTextSymbolProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setTextCapitalization_1EVCapitalizatoinFlag(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint flag_j)
				{
					EarthView::World::Spatial::Display::EVCapitalizatoinFlag flag = (EarthView::World::Spatial::Display::EVCapitalizatoinFlag) flag_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setTextCapitalization(flag);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getTextCapitalization_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::EVCapitalizatoinFlag __values1 = pObjectX->getTextCapitalization();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setCharacterSpacing_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setCharacterSpacing(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getCharacterSpacing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCharacterSpacing();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setCharacterWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setCharacterWidth(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getCharacterWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCharacterWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setFlipAngle_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setFlipAngle(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getFlipAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFlipAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getTextSize_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xSize_j, jlong ySize_j)
				{
					ev_real64 *xSize = (ev_real64*) xSize_j;
					ev_real64 *ySize = (ev_real64*) ySize_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::getTextSize(xSize, ySize);
					}
					else
					{
						pObjectX->getTextSize(xSize, ySize);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getTextSize_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextSize_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextSize_ev_real64_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getTextSize_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xSize_j, jlong ySize_j)
				{
					ev_real64 *xSize = (ev_real64*) xSize_j;
					ev_real64 *ySize = (ev_real64*) ySize_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::getTextSize(xSize, ySize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setKerning_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
				{
					ev_bool enable = (ev_bool) enable_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setKerning(enable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getKerning_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getKerning();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setLeading_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setLeading(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getLeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLeading();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setShadowOffsetX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setShadowOffsetX(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getShadowOffsetX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getShadowOffsetX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setShadowOffsetY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setShadowOffsetY(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getShadowOffsetY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getShadowOffsetY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_isFillWithSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFillWithSymbol();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setFillWithSymbol_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bFill_j)
				{
					ev_bool bFill = (ev_bool) bFill_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setFillWithSymbol(bFill);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_isUseBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->isUseBackground();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setUseBackground_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bUse_j)
				{
					ev_bool bUse = (ev_bool) bUse_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setUseBackground(bUse);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setWordSpacing_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setWordSpacing(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getWordSpacing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getWordSpacing();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setShadowColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setShadowColor(color);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getShadowColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getShadowColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setHasShadow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHas_j)
				{
					ev_bool bHas = (ev_bool) bHas_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setHasShadow(bHas);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getHasShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->getHasShadow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setFillSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fillSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *fillSymbol = (const EarthView::World::Spatial::Display::ISymbol*) fillSymbol_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setFillSymbol(fillSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getFillSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getFillSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setBackgroundSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong background_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *background = (const EarthView::World::Spatial::Display::ISymbol*) background_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setBackgroundSymbol(background);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getBackgroundSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getBackgroundSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setBackgroundStretchX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setBackgroundStretchX(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getBackgroundStretchX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBackgroundStretchX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_setBackgroundStretchY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->setBackgroundStretchY(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getBackgroundStretchY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBackgroundStretchY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getSymbolType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::getSymbolType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getSymbolType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_getSymbolType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::getSymbolType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toSLD_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toSLD();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toSLD();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1toSLD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toSLD_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toSLD();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_equal_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::equal(pSymbol);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1equal_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_equal_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::equal(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromSLD_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sld_j)
				{
					EVString &sld = *(EVString*) sld_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromSLD(sld);
					}
					else
					{
						pObjectX->fromSLD(sld);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1fromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromSLD_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sld_j)
				{
					EVString &sld = *(EVString*) sld_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromSLD(sld);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFormattedTextSymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CFormattedTextSymbol *pObjectX = (EarthView::World::Spatial::Display::CFormattedTextSymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CFormattedTextSymbol::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getTextSize_1ev_1int64_1EVString_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback", "(JLjava/lang/String;JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getTextSize_1IPaintDevice_1EVString_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback", "(JLjava/lang/String;JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getOutlineColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOutlineColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOutlineColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1setOutlineColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setOutlineColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setOutlineColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getColorRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1setColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1hasImage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getImageCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getImageID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getImage_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_FormattedTextSymbol_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFormattedTextSymbolProxy *pObjectX = (JCFormattedTextSymbolProxy*) pObjXXXX;
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
			}
		}
	}
}
