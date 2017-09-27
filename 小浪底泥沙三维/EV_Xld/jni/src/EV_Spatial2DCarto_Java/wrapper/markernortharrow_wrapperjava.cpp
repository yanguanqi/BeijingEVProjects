/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/markernortharrow.h"
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
			namespace Carto
			{
				class JCMarkNorthArrowProxy : public EarthView::World::Spatial::Carto::CMarkNorthArrow
				{
				 private:
					EarthView::World::Core::ev_string m_getElementType_void_callback;
					EarthView::World::Core::ev_string m_setType_EVNorthArrowType_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_setMarkerSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getMarkerSymbol_void_callback;
					EarthView::World::Core::ev_string m_getEnvelope_void_callback;
					EarthView::World::Core::ev_string m_setEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_getMapAngle_void_callback;
					EarthView::World::Core::ev_string m_getCorrectionAngle_void_callback;
					EarthView::World::Core::ev_string m_setCorrectionAngle_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMapFrame_IMapFrame_callback;
					EarthView::World::Core::ev_string m_setSize_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSize_void_callback;
					EarthView::World::Core::ev_string m_setColor_IColor_callback;
					EarthView::World::Core::ev_string m_getColor_void_callback;
					EarthView::World::Core::ev_string m_getPreviw_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_setBackgroundColor_IColor_callback;
					EarthView::World::Core::ev_string m_getBackgroundColor_void_callback;
					EarthView::World::Core::ev_string m_setDrawBackground_bool_callback;
					EarthView::World::Core::ev_string m_isDrawBackground_void_callback;
					EarthView::World::Core::ev_string m_setShadowColor_IColor_callback;
					EarthView::World::Core::ev_string m_getShadowColor_void_callback;
					EarthView::World::Core::ev_string m_setDrawShadow_bool_callback;
					EarthView::World::Core::ev_string m_isDrawShadow_void_callback;
					EarthView::World::Core::ev_string m_setFrameSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getFrameSymbol_void_callback;
					EarthView::World::Core::ev_string m_setDrawFrame_ev_bool_callback;
					EarthView::World::Core::ev_string m_isDrawFrame_void_callback;
					EarthView::World::Core::ev_string m_drawPrepare_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_draw_void_callback;
					EarthView::World::Core::ev_string m_drawOver_void_callback;
					EarthView::World::Core::ev_string m_isSelected_void_callback;
					EarthView::World::Core::ev_string m_setSelected_ev_bool_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCMarkNorthArrowProxy(EarthView::World::Core::CNameValuePairList *pList) : CMarkNorthArrow(pList)
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
					void register_getElementType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getElementType_void_callback = __method;
					}
					void register_setType_EVNorthArrowType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setType_EVNorthArrowType_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_setMarkerSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMarkerSymbol_ISymbol_callback = __method;
					}
					void register_getMarkerSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMarkerSymbol_void_callback = __method;
					}
					void register_getEnvelope_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelope_void_callback = __method;
					}
					void register_setEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelope_IEnvelope_callback = __method;
					}
					void register_getMapAngle_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMapAngle_void_callback = __method;
					}
					void register_getCorrectionAngle_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCorrectionAngle_void_callback = __method;
					}
					void register_setCorrectionAngle_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCorrectionAngle_ev_real64_callback = __method;
					}
					void register_setMapFrame_IMapFrame_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMapFrame_IMapFrame_callback = __method;
					}
					void register_setSize_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSize_ev_real64_callback = __method;
					}
					void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSize_void_callback = __method;
					}
					void register_setColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setColor_IColor_callback = __method;
					}
					void register_getColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColor_void_callback = __method;
					}
					void register_getPreviw_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPreviw_ISpatialDisplay_callback = __method;
					}
					void register_setBackgroundColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBackgroundColor_IColor_callback = __method;
					}
					void register_getBackgroundColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBackgroundColor_void_callback = __method;
					}
					void register_setDrawBackground_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawBackground_bool_callback = __method;
					}
					void register_isDrawBackground_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawBackground_void_callback = __method;
					}
					void register_setShadowColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShadowColor_IColor_callback = __method;
					}
					void register_getShadowColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShadowColor_void_callback = __method;
					}
					void register_setDrawShadow_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawShadow_bool_callback = __method;
					}
					void register_isDrawShadow_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawShadow_void_callback = __method;
					}
					void register_setFrameSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFrameSymbol_ISymbol_callback = __method;
					}
					void register_getFrameSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFrameSymbol_void_callback = __method;
					}
					void register_setDrawFrame_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawFrame_ev_bool_callback = __method;
					}
					void register_isDrawFrame_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawFrame_void_callback = __method;
					}
					void register_drawPrepare_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawPrepare_ISpatialDisplay_callback = __method;
					}
					void register_draw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_void_callback = __method;
					}
					void register_drawOver_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawOver_void_callback = __method;
					}
					void register_isSelected_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelected_void_callback = __method;
					}
					void register_setSelected_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelected_ev_bool_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if (this->_gRef != NULL && this->m_getElementType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getElementType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Carto::EVElementType __values1 = (EarthView::World::Spatial::Carto::EVElementType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMarkNorthArrow::getElementType();
						}
					}
					virtual void setType(const EarthView::World::Spatial::Carto::EVNorthArrowType type)
					{
						if (this->_gRef != NULL && this->m_setType_EVNorthArrowType_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setType_EVNorthArrowType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
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
							return this->CMarkNorthArrow::setType(type);
						}
					}
					virtual EarthView::World::Spatial::Carto::EVNorthArrowType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Carto::EVNorthArrowType __values1 = (EarthView::World::Spatial::Carto::EVNorthArrowType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMarkNorthArrow::getType();
						}
					}
					virtual void setMarkerSymbol(EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setMarkerSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("setMarkerSymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , symbol_j);
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
							return this->CMarkNorthArrow::setMarkerSymbol(symbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol() const
					{
						if (this->_gRef != NULL && this->m_getMarkerSymbol_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMarkerSymbol_void_callback");
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
							return this->CMarkNorthArrow::getMarkerSymbol();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if (this->_gRef != NULL && this->m_getEnvelope_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelope_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMarkNorthArrow::getEnvelope();
						}
					}
					virtual void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if (this->_gRef != NULL && this->m_setEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong pEnvelope_j = (jlong) pEnvelope;
							jmethodID __method = __gr->getMethod("setEnvelope_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , pEnvelope_j);
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
							return this->CMarkNorthArrow::setEnvelope(pEnvelope);
						}
					}
					virtual ev_real64 getMapAngle() const
					{
						if (this->_gRef != NULL && this->m_getMapAngle_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMapAngle_void_callback");
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
							return this->CMarkNorthArrow::getMapAngle();
						}
					}
					virtual ev_real64 getCorrectionAngle() const
					{
						if (this->_gRef != NULL && this->m_getCorrectionAngle_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCorrectionAngle_void_callback");
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
							return this->CMarkNorthArrow::getCorrectionAngle();
						}
					}
					virtual void setCorrectionAngle(const ev_real64 dAngle)
					{
						if (this->_gRef != NULL && this->m_setCorrectionAngle_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble dAngle_j = (jdouble) dAngle;
							jmethodID __method = __gr->getMethod("setCorrectionAngle_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dAngle_j);
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
							return this->CMarkNorthArrow::setCorrectionAngle(dAngle);
						}
					}
					virtual void setMapFrame(const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if (this->_gRef != NULL && this->m_setMapFrame_IMapFrame_callback != "" && this->isCustomExtend())
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
							jlong pMapFrame_j = (jlong) pMapFrame;
							jmethodID __method = __gr->getMethod("setMapFrame_IMapFrame_callback");
							__env->CallVoidMethod(__obj, __method , pMapFrame_j);
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
							return this->CMarkNorthArrow::setMapFrame(pMapFrame);
						}
					}
					virtual void setSize(const ev_real64 size)
					{
						if (this->_gRef != NULL && this->m_setSize_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble size_j = (jdouble) size;
							jmethodID __method = __gr->getMethod("setSize_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , size_j);
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
							return this->CMarkNorthArrow::setSize(size);
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
							return this->CMarkNorthArrow::getSize();
						}
					}
					virtual void setColor(const EarthView::World::Spatial::Display::IColor* pColor)
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
							jlong pColor_j = (jlong) pColor;
							jmethodID __method = __gr->getMethod("setColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , pColor_j);
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
							return this->CMarkNorthArrow::setColor(pColor);
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
							return this->CMarkNorthArrow::getColor();
						}
					}
					virtual EarthView::World::Display::IBitmap* getPreviw(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if (this->_gRef != NULL && this->m_getPreviw_ISpatialDisplay_callback != "" && this->isCustomExtend())
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
							jlong pPageDisplay_j = (jlong) pPageDisplay;
							jmethodID __method = __gr->getMethod("getPreviw_ISpatialDisplay_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pPageDisplay_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMarkNorthArrow::getPreviw(pPageDisplay);
						}
					}
					virtual void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if (this->_gRef != NULL && this->m_setBackgroundColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong pColor_j = (jlong) pColor;
							jmethodID __method = __gr->getMethod("setBackgroundColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , pColor_j);
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
							return this->CMarkNorthArrow::setBackgroundColor(pColor);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if (this->_gRef != NULL && this->m_getBackgroundColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getBackgroundColor_void_callback");
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
							return this->CMarkNorthArrow::getBackgroundColor();
						}
					}
					virtual void setDrawBackground(bool bDraw)
					{
						if (this->_gRef != NULL && this->m_setDrawBackground_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDraw_j = (jboolean) bDraw;
							jmethodID __method = __gr->getMethod("setDrawBackground_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDraw_j);
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
							return this->CMarkNorthArrow::setDrawBackground(bDraw);
						}
					}
					virtual ev_bool isDrawBackground() const
					{
						if (this->_gRef != NULL && this->m_isDrawBackground_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawBackground_void_callback");
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
							return this->CMarkNorthArrow::isDrawBackground();
						}
					}
					virtual void setShadowColor(const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if (this->_gRef != NULL && this->m_setShadowColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong pColor_j = (jlong) pColor;
							jmethodID __method = __gr->getMethod("setShadowColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , pColor_j);
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
							return this->CMarkNorthArrow::setShadowColor(pColor);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if (this->_gRef != NULL && this->m_getShadowColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getShadowColor_void_callback");
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
							return this->CMarkNorthArrow::getShadowColor();
						}
					}
					virtual void setDrawShadow(bool bDraw)
					{
						if (this->_gRef != NULL && this->m_setDrawShadow_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDraw_j = (jboolean) bDraw;
							jmethodID __method = __gr->getMethod("setDrawShadow_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDraw_j);
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
							return this->CMarkNorthArrow::setDrawShadow(bDraw);
						}
					}
					virtual ev_bool isDrawShadow() const
					{
						if (this->_gRef != NULL && this->m_isDrawShadow_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawShadow_void_callback");
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
							return this->CMarkNorthArrow::isDrawShadow();
						}
					}
					virtual void setFrameSymbol(const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_setFrameSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setFrameSymbol_ISymbol_callback");
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
							return this->CMarkNorthArrow::setFrameSymbol(pSymbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const
					{
						if (this->_gRef != NULL && this->m_getFrameSymbol_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFrameSymbol_void_callback");
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
							return this->CMarkNorthArrow::getFrameSymbol();
						}
					}
					virtual void setDrawFrame(const ev_bool bDraw)
					{
						if (this->_gRef != NULL && this->m_setDrawFrame_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDraw_j = (jboolean) bDraw;
							jmethodID __method = __gr->getMethod("setDrawFrame_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDraw_j);
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
							return this->CMarkNorthArrow::setDrawFrame(bDraw);
						}
					}
					virtual ev_bool isDrawFrame() const
					{
						if (this->_gRef != NULL && this->m_isDrawFrame_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawFrame_void_callback");
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
							return this->CMarkNorthArrow::isDrawFrame();
						}
					}
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if (this->_gRef != NULL && this->m_drawPrepare_ISpatialDisplay_callback != "" && this->isCustomExtend())
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
							jlong pDisplay_j = (jlong) pDisplay;
							jmethodID __method = __gr->getMethod("drawPrepare_ISpatialDisplay_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDisplay_j);
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
							return this->CMarkNorthArrow::drawPrepare(pDisplay);
						}
					}
					virtual void draw()
					{
						if (this->_gRef != NULL && this->m_draw_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("draw_void_callback");
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
							return this->CMarkNorthArrow::draw();
						}
					}
					virtual void drawOver()
					{
						if (this->_gRef != NULL && this->m_drawOver_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("drawOver_void_callback");
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
							return this->CMarkNorthArrow::drawOver();
						}
					}
					virtual ev_bool isSelected()
					{
						if (this->_gRef != NULL && this->m_isSelected_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isSelected_void_callback");
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
							return this->CMarkNorthArrow::isSelected();
						}
					}
					virtual void setSelected(ev_bool b)
					{
						if (this->_gRef != NULL && this->m_setSelected_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean b_j = (jboolean) b;
							jmethodID __method = __gr->getMethod("setSelected_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , b_j);
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
							return this->CMarkNorthArrow::setSelected(b);
						}
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
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
							EarthView::World::Spatial::Carto::IElement *__values1 = (EarthView::World::Spatial::Carto::IElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMarkNorthArrow::clone();
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
							return this->CMarkNorthArrow::toStream(stream);
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->CMarkNorthArrow::toXML();
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
							return this->CMarkNorthArrow::fromXmlElement(element);
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
							return this->CMarkNorthArrow::toXmlElement();
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
							return this->CMarkNorthArrow::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMarkNorthArrowProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getElementType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getElementType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->getElementType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getElementType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getElementType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getElementType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getElementType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getElementType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setType_1EVNorthArrowType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					const EarthView::World::Spatial::Carto::EVNorthArrowType type = (EarthView::World::Spatial::Carto::EVNorthArrowType) type_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setType(type);
					}
					else
					{
						pObjectX->setType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setType_1EVNorthArrowType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setType_EVNorthArrowType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setType_EVNorthArrowType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setType_1EVNorthArrowType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					const EarthView::World::Spatial::Carto::EVNorthArrowType type = (EarthView::World::Spatial::Carto::EVNorthArrowType) type_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Carto::EVNorthArrowType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVNorthArrowType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVNorthArrowType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setMarkerSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setMarkerSymbol(symbol);
					}
					else
					{
						pObjectX->setMarkerSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setMarkerSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMarkerSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMarkerSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setMarkerSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setMarkerSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getMarkerSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getMarkerSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getMarkerSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getMarkerSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMarkerSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMarkerSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getMarkerSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getMarkerSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getEnvelope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelope_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelope_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getEnvelope_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setEnvelope(pEnvelope);
					}
					else
					{
						pObjectX->setEnvelope(pEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelope_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setEnvelope(pEnvelope);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getMapAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getMapAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMapAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getMapAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMapAngle_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMapAngle_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getMapAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getMapAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getCorrectionAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getCorrectionAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getCorrectionAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getCorrectionAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCorrectionAngle_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCorrectionAngle_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getCorrectionAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getCorrectionAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setCorrectionAngle_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dAngle_j)
				{
					const ev_real64 dAngle = (ev_real64) dAngle_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setCorrectionAngle(dAngle);
					}
					else
					{
						pObjectX->setCorrectionAngle(dAngle);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setCorrectionAngle_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCorrectionAngle_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCorrectionAngle_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setCorrectionAngle_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dAngle_j)
				{
					const ev_real64 dAngle = (ev_real64) dAngle_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setCorrectionAngle(dAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setMapFrame_1IMapFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMapFrame_j)
				{
					const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame = (const EarthView::World::Spatial::Carto::IMapFrame*) pMapFrame_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setMapFrame(pMapFrame);
					}
					else
					{
						pObjectX->setMapFrame(pMapFrame);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setMapFrame_1IMapFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMapFrame_IMapFrame_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMapFrame_IMapFrame_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setMapFrame_1IMapFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMapFrame_j)
				{
					const EarthView::World::Spatial::Carto::IMapFrame *pMapFrame = (const EarthView::World::Spatial::Carto::IMapFrame*) pMapFrame_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setMapFrame(pMapFrame);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setSize_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble size_j)
				{
					const ev_real64 size = (ev_real64) size_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setSize(size);
					}
					else
					{
						pObjectX->setSize(size);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setSize_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSize_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSize_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setSize_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble size_j)
				{
					const ev_real64 size = (ev_real64) size_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setSize(size);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getSize();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getSize();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setColor(pColor);
					}
					else
					{
						pObjectX->setColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setColor(pColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getColor();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getPreviw_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPageDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pPageDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pPageDisplay_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getPreviw(pPageDisplay);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getPreviw(pPageDisplay);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getPreviw_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPreviw_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPreviw_ISpatialDisplay_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getPreviw_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPageDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pPageDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pPageDisplay_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getPreviw(pPageDisplay);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setBackgroundColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setBackgroundColor(pColor);
					}
					else
					{
						pObjectX->setBackgroundColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setBackgroundColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBackgroundColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBackgroundColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setBackgroundColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setBackgroundColor(pColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getBackgroundColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getBackgroundColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackgroundColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getBackgroundColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBackgroundColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBackgroundColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getBackgroundColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getBackgroundColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawBackground_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					bool bDraw = (bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawBackground(bDraw);
					}
					else
					{
						pObjectX->setDrawBackground(bDraw);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setDrawBackground_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawBackground_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawBackground_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawBackground_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					bool bDraw = (bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawBackground(bDraw);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawBackground();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawBackground();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1isDrawBackground_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawBackground_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawBackground_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawBackground_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawBackground();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setShadowColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setShadowColor(pColor);
					}
					else
					{
						pObjectX->setShadowColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setShadowColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShadowColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShadowColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setShadowColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					const EarthView::World::Spatial::Display::IColor *pColor = (const EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setShadowColor(pColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getShadowColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getShadowColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getShadowColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getShadowColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShadowColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getShadowColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getShadowColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawShadow_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					bool bDraw = (bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawShadow(bDraw);
					}
					else
					{
						pObjectX->setDrawShadow(bDraw);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setDrawShadow_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawShadow_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawShadow_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawShadow_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					bool bDraw = (bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawShadow(bDraw);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1isDrawShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawShadow_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawShadow_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawShadow_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawShadow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setFrameSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setFrameSymbol(pSymbol);
					}
					else
					{
						pObjectX->setFrameSymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setFrameSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFrameSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFrameSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setFrameSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setFrameSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getFrameSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getFrameSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getFrameSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1getFrameSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFrameSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFrameSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_getFrameSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::getFrameSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawFrame_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					const ev_bool bDraw = (ev_bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawFrame(bDraw);
					}
					else
					{
						pObjectX->setDrawFrame(bDraw);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setDrawFrame_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawFrame_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawFrame_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setDrawFrame_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDraw_j)
				{
					const ev_bool bDraw = (ev_bool) bDraw_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setDrawFrame(bDraw);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1isDrawFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawFrame_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawFrame_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isDrawFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isDrawFrame();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_drawPrepare_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::drawPrepare(pDisplay);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->drawPrepare(pDisplay);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1drawPrepare_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawPrepare_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawPrepare_ISpatialDisplay_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_drawPrepare_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::drawPrepare(pDisplay);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_draw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::draw();
					}
					else
					{
						pObjectX->draw();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1draw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_draw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::draw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_drawOver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::drawOver();
					}
					else
					{
						pObjectX->drawOver();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1drawOver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawOver_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawOver_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_drawOver_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::drawOver();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1isSelected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelected_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelected_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_isSelected_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::isSelected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setSelected(b);
					}
					else
					{
						pObjectX->setSelected(b);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1setSelected_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelected_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelected_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_setSelected_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::setSelected(b);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMarkNorthArrowProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMarkNorthArrowProxy *pObjectX = (JCMarkNorthArrowProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MarkNorthArrow_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::CMarkNorthArrow *pObjectX = (EarthView::World::Spatial::Carto::CMarkNorthArrow*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMarkNorthArrow::fromStream(stream);
				}
			}
		}
	}
}
