/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/isymbol.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_EVSymbolTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						ST_UNKNOWN,
						ST_MULTIMARKER,
						ST_SIMPLEMARKER,
						ST_ARROWMARKER,
						ST_FONTMARKER,
						ST_SVGMARKER,
						ST_PICTUREMARKER,
						ST_MULTILINE,
						ST_SIMPLELINE,
						ST_CARTOGRAPHICLINE,
						ST_MULTIFILL,
						ST_SIMPLEFILL,
						ST_MARKERFILL,
						ST_LINEFILL,
						ST_GRADIENTFILL,
						ST_PICTUREFILL,
						ST_SIMPLETEXT,
						ST_FORMATTEDTEXT,
						ST_BARSTATISTICS,
						ST_PIESTATISTICS,
						ST_STACKEDSTATISTICS,
						ST_PHOTO3D,
						ST_ICON3D,
						ST_BILLBOARD3D,
						ST_MODEL3D,
						ST_SIMPLELINE3D,
						ST_TEXTURELINE3D,
						ST_SIMPLEFILL3D,
						ST_TEXTUREFILL3D,
						ST_FRESNELSURFACE3D,
						ST_3DBARSTATISTICS,
						ST_3DPIESTATISTICS,
						ST_3DSTACKEDSTATISTICS
					};
					jintArray array = __env->NewIntArray(33);
					__env->SetIntArrayRegion(array, 0, 33, enum_values);
					return array;
				}
				class JISymbolProxy : public EarthView::World::Spatial::Display::ISymbol
				{
				 private:
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
					JISymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : ISymbol(pList)
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
							return this->ISymbol::fromXmlElement(element);
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
							return this->ISymbol::toXmlElement();
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
							return this->ISymbol::getSize();
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
							return this->ISymbol::getColorRef();
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
							return this->ISymbol::toStream(stream);
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
							return this->ISymbol::toSLD();
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
							return this->ISymbol::clone();
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
							return this->ISymbol::getColor();
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
							return this->ISymbol::setColor(color);
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
							return this->ISymbol::getSymbolType();
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
							return this->ISymbol::hasImage();
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
							return this->ISymbol::getImageCount();
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
							return this->ISymbol::getImageID(index);
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
							return this->ISymbol::getImage(index);
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
							return this->ISymbol::setImage(index, imageID, stream);
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
							return this->ISymbol::equal(pSymbol);
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
							return this->ISymbol::getName();
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
							return this->ISymbol::setName(szName);
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
							return this->ISymbol::fromSLD(sld);
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
							return this->ISymbol::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISymbolProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Isymbol_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getSize();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getSize();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Isymbol_getSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getSize();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getColorRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getColorRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getColorRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getColorRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getColorRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getColorRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EVString __values1 = pObjectX->toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_toSLD_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::toSLD();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1toSLD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_toSLD_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::toSLD();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::setColor(color);
					}
					else
					{
						pObjectX->setColor(color);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1setColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::setColor(color);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Isymbol_getSymbolType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getSymbolType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getSymbolType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Isymbol_getSymbolType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getSymbolType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbol_hasImage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::hasImage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasImage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1hasImage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbol_hasImage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::hasImage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImageCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImageCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getImageCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImageCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImageCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImageID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImageID(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getImageID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImageID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImageID(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImage_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImage(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getImage_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbol_getImage_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
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
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::setImage(index, imageID, stream);
					}
					else
					{
						pObjectX->setImage(index, imageID, stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
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
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::setImage(index, imageID, stream);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbol_equal_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::equal(pSymbol);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1equal_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbol_equal_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::equal(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbol_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbol::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring szName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* szName_ch = (const ev_char*)__env->GetStringUTFChars(szName_j,JNI_FALSE);
					const EVString szName = szName_ch;
					__env->ReleaseStringUTFChars(szName_j, (const char *)szName_ch);
					#else
					const ev_wchar* szName_ch = (const ev_wchar*)__env->GetStringChars(szName_j,JNI_FALSE);
					const EVString szName = szName_ch;
					__env->ReleaseStringChars(szName_j, (const jchar *)szName_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::setName(szName);
					}
					else
					{
						pObjectX->setName(szName);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring szName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* szName_ch = (const ev_char*)__env->GetStringUTFChars(szName_j,JNI_FALSE);
					const EVString szName = szName_ch;
					__env->ReleaseStringUTFChars(szName_j, (const char *)szName_ch);
					#else
					const ev_wchar* szName_ch = (const ev_wchar*)__env->GetStringChars(szName_j,JNI_FALSE);
					const EVString szName = szName_ch;
					__env->ReleaseStringChars(szName_j, (const jchar *)szName_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::setName(szName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromSLD_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sld_j)
				{
					EVString &sld = *(EVString*) sld_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::fromSLD(sld);
					}
					else
					{
						pObjectX->fromSLD(sld);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1fromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromSLD_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sld_j)
				{
					EVString &sld = *(EVString*) sld_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::fromSLD(sld);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbol::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolProxy *pObjectX = (JISymbolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbol_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::ISymbol *pObjectX = (EarthView::World::Spatial::Display::ISymbol*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbol::fromStream(stream);
				}
				class JISymbolFactoryProxy : public EarthView::World::Spatial::Display::ISymbolFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createSymbolFromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_isSymbolHeader_EVString_callback;
					EarthView::World::Core::ev_string m_createSymbolFromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_createSymbolFromSLD_EVString_callback;
					EarthView::World::Core::ev_string m_destroySymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_destroySymbols_void_callback;
				public:
					JISymbolFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : ISymbolFactory(pList)
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
					void register_createSymbolFromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromStream_CDataStream_callback = __method;
					}
					void register_isSymbolHeader_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSymbolHeader_EVString_callback = __method;
					}
					void register_createSymbolFromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromXmlElement_CXmlElement_callback = __method;
					}
					void register_createSymbolFromSLD_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromSLD_EVString_callback = __method;
					}
					void register_destroySymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroySymbol_ISymbol_callback = __method;
					}
					void register_destroySymbols_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroySymbols_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createSymbolFromStream_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
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
							return this->ISymbolFactory::createSymbolFromStream(stream);
						}
					}
					virtual ev_bool isSymbolHeader(const EVString& xmlNodeName)
					{
						if (this->_gRef != NULL && this->m_isSymbolHeader_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring xmlNodeName_wch = xmlNodeName;
							jstring xmlNodeName_j = __env->NewString((const jchar*)xmlNodeName_wch.getString(), xmlNodeName_wch.size());
							jmethodID __method = __gr->getMethod("isSymbolHeader_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , xmlNodeName_j);
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
							return this->ISymbolFactory::isSymbolHeader(xmlNodeName);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createSymbolFromXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
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
							return this->ISymbolFactory::createSymbolFromXmlElement(element);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromSLD(const EVString& sldText)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromSLD_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring sldText_wch = sldText;
							jstring sldText_j = __env->NewString((const jchar*)sldText_wch.getString(), sldText_wch.size());
							jmethodID __method = __gr->getMethod("createSymbolFromSLD_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sldText_j);
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
							return this->ISymbolFactory::createSymbolFromSLD(sldText);
						}
					}
					virtual void destroySymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_destroySymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroySymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , pSymbol_j);
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
							return this->ISymbolFactory::destroySymbol(pSymbol);
						}
					}
					virtual void destroySymbols()
					{
						if (this->_gRef != NULL && this->m_destroySymbols_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroySymbols_void_callback");
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
							return this->ISymbolFactory::destroySymbols();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISymbolFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromStream(stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1createSymbolFromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromStream_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_isSymbolHeader_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xmlNodeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xmlNodeName_ch = (const ev_char*)__env->GetStringUTFChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringUTFChars(xmlNodeName_j, (const char *)xmlNodeName_ch);
					#else
					const ev_wchar* xmlNodeName_ch = (const ev_wchar*)__env->GetStringChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringChars(xmlNodeName_j, (const jchar *)xmlNodeName_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::isSymbolHeader(xmlNodeName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSymbolHeader(xmlNodeName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1isSymbolHeader_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSymbolHeader_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSymbolHeader_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_isSymbolHeader_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xmlNodeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xmlNodeName_ch = (const ev_char*)__env->GetStringUTFChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringUTFChars(xmlNodeName_j, (const char *)xmlNodeName_ch);
					#else
					const ev_wchar* xmlNodeName_ch = (const ev_wchar*)__env->GetStringChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringChars(xmlNodeName_j, (const jchar *)xmlNodeName_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::isSymbolHeader(xmlNodeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromXmlElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromXmlElement(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1createSymbolFromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromXmlElement(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromSLD_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sldText_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sldText_ch = (const ev_char*)__env->GetStringUTFChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringUTFChars(sldText_j, (const char *)sldText_ch);
					#else
					const ev_wchar* sldText_ch = (const ev_wchar*)__env->GetStringChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringChars(sldText_j, (const jchar *)sldText_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromSLD(sldText);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromSLD(sldText);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1createSymbolFromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromSLD_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromSLD_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_createSymbolFromSLD_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sldText_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sldText_ch = (const ev_char*)__env->GetStringUTFChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringUTFChars(sldText_j, (const char *)sldText_ch);
					#else
					const ev_wchar* sldText_ch = (const ev_wchar*)__env->GetStringChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringChars(sldText_j, (const jchar *)sldText_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::createSymbolFromSLD(sldText);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_destroySymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::destroySymbol(pSymbol);
					}
					else
					{
						pObjectX->destroySymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1destroySymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroySymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroySymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_destroySymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::destroySymbol(pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_destroySymbols_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::destroySymbols();
					}
					else
					{
						pObjectX->destroySymbols();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_register_1destroySymbols_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolFactoryProxy *pObjectX = (JISymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroySymbols_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroySymbols_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbolfactory_destroySymbols_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISymbolFactory *pObjectX = (EarthView::World::Spatial::Display::ISymbolFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISymbolFactory::destroySymbols();
				}
			}
		}
	}
}
