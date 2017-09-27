/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/drawimagetheme.h"
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
				class JCDrawImageThemeProxy : public EarthView::World::Spatial::Display::CDrawImageTheme
				{
				 private:
					EarthView::World::Core::ev_string m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback;
					EarthView::World::Core::ev_string m_endDraw_void_callback;
					EarthView::World::Core::ev_string m_draw_IDataset_callback;
					EarthView::World::Core::ev_string m_draw_EVString_EVString_IEnvelope_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_drawTile_RequestPara_callback;
				public:
					JCDrawImageThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawImageTheme(pList)
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
					void register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback = __method;
					}
					void register_endDraw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endDraw_void_callback = __method;
					}
					void register_draw_IDataset_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_IDataset_callback = __method;
					}
					void register_draw_EVString_EVString_IEnvelope_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_EVString_EVString_IEnvelope_ISpatialReference_callback = __method;
					}
					void register_drawTile_RequestPara_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawTile_RequestPara_callback = __method;
					}
					virtual ev_bool draw(EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
					{
						if (this->_gRef != NULL && this->m_draw_IDataset_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pDataset_j = (jlong) pDataset;
							jmethodID __method = __gr->getMethod("draw_IDataset_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataset_j);
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
							return this->CDrawImageTheme::draw(pDataset);
						}
					}
					virtual ev_bool draw(EVString datasetName, EVString datasourceName, EarthView::World::Spatial::Geometry::IEnvelope* pEnv, EarthView::World::Spatial::Geometry::ISpatialReference* pSRS)
					{
						if (this->_gRef != NULL && this->m_draw_EVString_EVString_IEnvelope_ISpatialReference_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring datasetName_wch = datasetName;
							jstring datasetName_j = __env->NewString((const jchar*)datasetName_wch.getString(), datasetName_wch.size());
							EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
							jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
							jlong pEnv_j = (jlong) pEnv;
							jlong pSRS_j = (jlong) pSRS;
							jmethodID __method = __gr->getMethod("draw_EVString_EVString_IEnvelope_ISpatialReference_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , datasetName_j, datasourceName_j, pEnv_j, pSRS_j);
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
							return this->CDrawImageTheme::draw(datasetName, datasourceName, pEnv, pSRS);
						}
					}
					virtual void drawTile(EarthView::World::Core::CWorkQueue::RequestPara* req)
					{
						if (this->_gRef != NULL && this->m_drawTile_RequestPara_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong req_j = (jlong) req;
							jmethodID __method = __gr->getMethod("drawTile_RequestPara_callback");
							__env->CallVoidMethod(__obj, __method , req_j);
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
							return this->CDrawImageTheme::drawTile(req);
						}
					}
					virtual void startDraw(EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, ev_uint8 transparent, EarthView::World::Spatial::Theme::ITheme* ref_pTheme, ev_int32 mode)
					{
						if (this->_gRef != NULL && this->m_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_display_j = (jlong) ref_display;
							jshort transparent_j = (jshort) transparent;
							jlong ref_pTheme_j = (jlong) ref_pTheme;
							jint mode_j = (jint) mode;
							jmethodID __method = __gr->getMethod("startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , ref_display_j, transparent_j, ref_pTheme_j, mode_j);
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
							return this->CDrawImageTheme::startDraw(ref_display, transparent, ref_pTheme, mode);
						}
					}
					virtual void endDraw()
					{
						if (this->_gRef != NULL && this->m_endDraw_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("endDraw_void_callback");
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
							return this->CDrawImageTheme::endDraw();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDrawImageThemeProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_draw_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawImageThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::draw(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_register_1draw_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawImageThemeProxy *pObjectX = (JCDrawImageThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_IDataset_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_IDataset_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_draw_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::draw(pDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_draw_1EVString_1EVString_1IEnvelope_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j, jstring datasourceName_j, jlong pEnv_j, jlong pSRS_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::Geometry::ISpatialReference *pSRS = (EarthView::World::Spatial::Geometry::ISpatialReference*) pSRS_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawImageThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::draw(datasetName, datasourceName, pEnv, pSRS);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(datasetName, datasourceName, pEnv, pSRS);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_register_1draw_1EVString_1EVString_1IEnvelope_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawImageThemeProxy *pObjectX = (JCDrawImageThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_EVString_EVString_IEnvelope_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_EVString_EVString_IEnvelope_ISpatialReference_callback", "(Ljava/lang/String;Ljava/lang/String;JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_draw_1EVString_1EVString_1IEnvelope_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j, jstring datasourceName_j, jlong pEnv_j, jlong pSRS_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::Geometry::ISpatialReference *pSRS = (EarthView::World::Spatial::Geometry::ISpatialReference*) pSRS_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::draw(datasetName, datasourceName, pEnv, pSRS);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_drawTile_1RequestPara(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j)
				{
					EarthView::World::Core::CWorkQueue::RequestPara *req = (EarthView::World::Core::CWorkQueue::RequestPara*) req_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDrawImageThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::drawTile(req);
					}
					else
					{
						pObjectX->drawTile(req);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_register_1drawTile_1RequestPara(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawImageThemeProxy *pObjectX = (JCDrawImageThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawTile_RequestPara_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawTile_RequestPara_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_drawTile_1RequestPara_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong req_j)
				{
					EarthView::World::Core::CWorkQueue::RequestPara *req = (EarthView::World::Core::CWorkQueue::RequestPara*) req_j;
					EarthView::World::Spatial::Display::CDrawImageTheme *pObjectX = (EarthView::World::Spatial::Display::CDrawImageTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CDrawImageTheme::drawTile(req);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_register_1startDraw_1ISpatialDisplay_1ev_1uint8_1ITheme_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawImageThemeProxy *pObjectX = (JCDrawImageThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback", "(JSJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_DrawImageTheme_register_1endDraw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDrawImageThemeProxy *pObjectX = (JCDrawImageThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endDraw_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endDraw_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
