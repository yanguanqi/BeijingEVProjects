/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapcontrol.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
		}
		namespace Spatial
		{
			namespace SystemUI
			{
			}
			namespace GeoDataset
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVMapCursorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MC_ArrowCursor,
						MC_CrossCursor,
						MC_OpenHandCursor,
						MC_CloseHandCursor,
						MC_PointingHandCursor,
						MC_MoveVertexCursor,
						MC_MoveFeatureCursor,
						MC_RotateFeatureCursor,
						MC_SketchFeatureCursor,
						MC_MeasureCursor,
						MC_ZoomInCursor,
						MC_ZoomOutCursor,
						MC_EditSelection,
						MC_ModifySelection,
						MC_PasteCursor
					};
					jintArray array = __env->NewIntArray(15);
					__env->SetIntArrayRegion(array, 0, 15, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVMapcontrolViewControlModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MVR_Auto,
						MVR_BetweenMapDisplayScales
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVMapcontrolCoordinateUnitHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MCU_FollowMap,
						MCU_Geographic
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1Visible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_Visible);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1Visible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_Visible = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1R_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_R);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1R_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_R = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1G_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_G);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1G_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_G = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1B_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_B);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1B_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_B = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1A_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_A);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1A_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_A = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1Font_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->m_Font;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1Font_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->m_Font = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1IsBold_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->m_IsBold);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1IsBold_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_IsBold = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1FontColor_1R_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_FontColor_R);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1FontColor_1R_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_FontColor_R = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1FontColor_1G_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_FontColor_G);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1FontColor_1G_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_FontColor_G = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1FontColor_1B_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_FontColor_B);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1FontColor_1B_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_FontColor_B = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_get_1m_1FontColor_1A_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->m_FontColor_A);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_InformationBarSettings_set_1m_1FontColor_1A_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CInformationBarSettings *pObjectX = (EarthView::World::Spatial2D::Controls::CInformationBarSettings*)pObjXXXX;
					pObjectX->m_FontColor_A = (ev_uint32)__values1_j;
				}
				class JCMapControlAgentProxy : public EarthView::World::Spatial2D::Controls::CMapControlAgent
				{
				 private:
					EarthView::World::Core::ev_string m_onGetMapCanvas_void_callback;
					EarthView::World::Core::ev_string m_onRepaint_void_callback;
					EarthView::World::Core::ev_string m_onSetCursor_ev_int32_callback;
				public:
					JCMapControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapControlAgent(pList)
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
					void register_onGetMapCanvas_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onGetMapCanvas_void_callback = __method;
					}
					void register_onRepaint_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onRepaint_void_callback = __method;
					}
					void register_onSetCursor_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onSetCursor_ev_int32_callback = __method;
					}
					virtual EarthView::World::Display::IPaintDevice* onGetMapCanvas() const
					{
						if (this->_gRef != NULL && this->m_onGetMapCanvas_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("onGetMapCanvas_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IPaintDevice *__values1 = (EarthView::World::Display::IPaintDevice*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapControlAgent::onGetMapCanvas();
						}
					}
					virtual void onRepaint()
					{
						if (this->_gRef != NULL && this->m_onRepaint_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("onRepaint_void_callback");
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
							return this->CMapControlAgent::onRepaint();
						}
					}
					virtual void onSetCursor(ev_int32 value)
					{
						if (this->_gRef != NULL && this->m_onSetCursor_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint value_j = (jint) value;
							jmethodID __method = __gr->getMethod("onSetCursor_ev_int32_callback");
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
							return this->CMapControlAgent::onSetCursor(value);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMapControlAgentProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onGetMapCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlAgentProxy))
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onGetMapCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->onGetMapCanvas();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_register_1onGetMapCanvas_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlAgentProxy *pObjectX = (JCMapControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onGetMapCanvas_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onGetMapCanvas_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onGetMapCanvas_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onGetMapCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onRepaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlAgentProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onRepaint();
					}
					else
					{
						pObjectX->onRepaint();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_register_1onRepaint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlAgentProxy *pObjectX = (JCMapControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onRepaint_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onRepaint_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onRepaint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onRepaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onSetCursor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlAgentProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onSetCursor(value);
					}
					else
					{
						pObjectX->onSetCursor(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_register_1onSetCursor_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlAgentProxy *pObjectX = (JCMapControlAgentProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onSetCursor_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onSetCursor_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControlAgent_onSetCursor_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial2D::Controls::CMapControlAgent *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CMapControlAgent::onSetCursor(value);
				}
				class JIMapControlListenerProxy : public EarthView::World::Spatial2D::Controls::IMapControlListener
				{
				 private:
					EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onResize_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback;
					EarthView::World::Core::ev_string m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback;
					EarthView::World::Core::ev_string m_onBeforeDrawTrackingLayer_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_onAfterDrawTrackingLayer_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_onAfterDrawInterestTrackingItems_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_onAnalysisEnd_ICommand_callback;
					EarthView::World::Core::ev_string m_onBeforeAddLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onAfterAddLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onBeforeRemoveLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onAfterRemoveLayer_ILayer_callback;
					EarthView::World::Core::ev_string m_onBeforeMoveLayer_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onAfterMoveLayer_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMapSelectionChanged_void_callback;
					EarthView::World::Core::ev_string m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback;
				public:
					JIMapControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapControlListener(pList)
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
					void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback = __method;
					}
					void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
					}
					void register_onResize_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onResize_ev_int32_ev_int32_callback = __method;
					}
					void register_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback = __method;
					}
					void register_onAfterRefresh_ISpatialDisplay_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback = __method;
					}
					void register_onBeforeDrawTrackingLayer_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeDrawTrackingLayer_ISpatialDisplay_callback = __method;
					}
					void register_onAfterDrawTrackingLayer_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterDrawTrackingLayer_ISpatialDisplay_callback = __method;
					}
					void register_onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback = __method;
					}
					void register_onAfterDrawInterestTrackingItems_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterDrawInterestTrackingItems_ISpatialDisplay_callback = __method;
					}
					void register_onAnalysisEnd_ICommand_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAnalysisEnd_ICommand_callback = __method;
					}
					void register_onBeforeAddLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeAddLayer_ILayer_callback = __method;
					}
					void register_onAfterAddLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterAddLayer_ILayer_callback = __method;
					}
					void register_onBeforeRemoveLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeRemoveLayer_ILayer_callback = __method;
					}
					void register_onAfterRemoveLayer_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterRemoveLayer_ILayer_callback = __method;
					}
					void register_onBeforeMoveLayer_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeMoveLayer_ev_int32_ev_int32_callback = __method;
					}
					void register_onAfterMoveLayer_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterMoveLayer_ev_int32_ev_int32_callback = __method;
					}
					void register_onMapSelectionChanged_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMapSelectionChanged_void_callback = __method;
					}
					void register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback = __method;
					}
					virtual void onBeforeAddLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onBeforeAddLayer_ILayer_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onBeforeAddLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IMapControlListener::onBeforeAddLayer(layer);
						}
					}
					virtual void onAfterAddLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onAfterAddLayer_ILayer_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onAfterAddLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IMapControlListener::onAfterAddLayer(layer);
						}
					}
					virtual void onBeforeRemoveLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onBeforeRemoveLayer_ILayer_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onBeforeRemoveLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IMapControlListener::onBeforeRemoveLayer(layer);
						}
					}
					virtual void onAfterRemoveLayer(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_onAfterRemoveLayer_ILayer_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("onAfterRemoveLayer_ILayer_callback");
							__env->CallVoidMethod(__obj, __method , layer_j);
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
							return this->IMapControlListener::onAfterRemoveLayer(layer);
						}
					}
					virtual void onBeforeMoveLayer(ev_int32 oldIndex, ev_int32 newIndex)
					{
						if (this->_gRef != NULL && this->m_onBeforeMoveLayer_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint oldIndex_j = (jint) oldIndex;
							jint newIndex_j = (jint) newIndex;
							jmethodID __method = __gr->getMethod("onBeforeMoveLayer_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
						}
					}
					virtual void onAfterMoveLayer(ev_int32 oldIndex, ev_int32 newIndex)
					{
						if (this->_gRef != NULL && this->m_onAfterMoveLayer_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint oldIndex_j = (jint) oldIndex;
							jint newIndex_j = (jint) newIndex;
							jmethodID __method = __gr->getMethod("onAfterMoveLayer_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
						}
					}
					virtual void onMapSelectionChanged()
					{
						if (this->_gRef != NULL && this->m_onMapSelectionChanged_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("onMapSelectionChanged_void_callback");
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
							return this->IMapControlListener::onMapSelectionChanged();
						}
					}
					virtual void onMapDraw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if (this->_gRef != NULL && this->m_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jlong layer_j = (jlong) layer;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback");
							__env->CallVoidMethod(__obj, __method , display_j, layer_j, type_j);
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
							return this->IMapControlListener::onMapDraw(display, layer, type);
						}
					}
					virtual ev_bool onMouseDown(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseUp(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseMove(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onDoubleClick(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY)
					{
						if (this->_gRef != NULL && this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jmethodID __method = __gr->getMethod("onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j, geoX_j, geoY_j);
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
							return this->IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						}
					}
					virtual ev_bool onMouseWheel(ev_int32 delta, ev_int32 x, ev_int32 y, ev_real64 geoX, ev_real64 geoY, ev_int32 flag)
					{
						if (this->_gRef != NULL && this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint delta_j = (jint) delta;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jdouble geoX_j = (jdouble) geoX;
							jdouble geoY_j = (jdouble) geoY;
							jint flag_j = (jint) flag;
							jmethodID __method = __gr->getMethod("onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , delta_j, x_j, y_j, geoX_j, geoY_j, flag_j);
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
							return this->IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						}
					}
					virtual ev_bool onKeyDown(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyDown_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyDown_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->IMapControlListener::onKeyDown(keyCode, shift);
						}
					}
					virtual ev_bool onKeyUp(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyUp_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyUp_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->IMapControlListener::onKeyUp(keyCode, shift);
						}
					}
					virtual ev_bool onResize(ev_int32 width, ev_int32 height)
					{
						if (this->_gRef != NULL && this->m_onResize_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint width_j = (jint) width;
							jint height_j = (jint) height;
							jmethodID __method = __gr->getMethod("onResize_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , width_j, height_j);
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
							return this->IMapControlListener::onResize(width, height);
						}
					}
					virtual void onBeforeRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if (this->_gRef != NULL && this->m_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jlong viewportEnvelope_j = (jlong) viewportEnvelope;
							jmethodID __method = __gr->getMethod("onBeforeRefresh_ISpatialDisplay_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , display_j, viewportEnvelope_j);
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
							return this->IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
						}
					}
					virtual void onAfterRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope)
					{
						if (this->_gRef != NULL && this->m_onAfterRefresh_ISpatialDisplay_IEnvelope_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jlong viewportEnvelope_j = (jlong) viewportEnvelope;
							jmethodID __method = __gr->getMethod("onAfterRefresh_ISpatialDisplay_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , display_j, viewportEnvelope_j);
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
							return this->IMapControlListener::onAfterRefresh(display, viewportEnvelope);
						}
					}
					virtual void onBeforeDrawTrackingLayer(EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if (this->_gRef != NULL && this->m_onBeforeDrawTrackingLayer_ISpatialDisplay_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jmethodID __method = __gr->getMethod("onBeforeDrawTrackingLayer_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , display_j);
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
							return this->IMapControlListener::onBeforeDrawTrackingLayer(display);
						}
					}
					virtual void onAfterDrawTrackingLayer(EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if (this->_gRef != NULL && this->m_onAfterDrawTrackingLayer_ISpatialDisplay_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jmethodID __method = __gr->getMethod("onAfterDrawTrackingLayer_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , display_j);
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
							return this->IMapControlListener::onAfterDrawTrackingLayer(display);
						}
					}
					virtual void onBeforeDrawInterestTrackingItems(EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if (this->_gRef != NULL && this->m_onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jmethodID __method = __gr->getMethod("onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , display_j);
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
							return this->IMapControlListener::onBeforeDrawInterestTrackingItems(display);
						}
					}
					virtual void onAfterDrawInterestTrackingItems(EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if (this->_gRef != NULL && this->m_onAfterDrawInterestTrackingItems_ISpatialDisplay_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jmethodID __method = __gr->getMethod("onAfterDrawInterestTrackingItems_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , display_j);
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
							return this->IMapControlListener::onAfterDrawInterestTrackingItems(display);
						}
					}
					virtual void onAnalysisEnd(EarthView::World::Spatial::SystemUI::ICommand* command)
					{
						if (this->_gRef != NULL && this->m_onAnalysisEnd_ICommand_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong command_j = (jlong) command;
							jmethodID __method = __gr->getMethod("onAnalysisEnd_ICommand_callback");
							__env->CallVoidMethod(__obj, __method , command_j);
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
							return this->IMapControlListener::onAnalysisEnd(command);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIMapControlListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeAddLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeAddLayer(layer);
					}
					else
					{
						pObjectX->onBeforeAddLayer(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeAddLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeAddLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeAddLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeAddLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeAddLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterAddLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterAddLayer(layer);
					}
					else
					{
						pObjectX->onAfterAddLayer(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterAddLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterAddLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterAddLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterAddLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterAddLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeRemoveLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRemoveLayer(layer);
					}
					else
					{
						pObjectX->onBeforeRemoveLayer(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeRemoveLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeRemoveLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeRemoveLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeRemoveLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRemoveLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterRemoveLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRemoveLayer(layer);
					}
					else
					{
						pObjectX->onAfterRemoveLayer(layer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterRemoveLayer_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterRemoveLayer_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterRemoveLayer_ILayer_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterRemoveLayer_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRemoveLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oldIndex_j, jint newIndex_j)
				{
					ev_int32 oldIndex = (ev_int32) oldIndex_j;
					ev_int32 newIndex = (ev_int32) newIndex_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
					}
					else
					{
						pObjectX->onBeforeMoveLayer(oldIndex, newIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeMoveLayer_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeMoveLayer_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeMoveLayer_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oldIndex_j, jint newIndex_j)
				{
					ev_int32 oldIndex = (ev_int32) oldIndex_j;
					ev_int32 newIndex = (ev_int32) newIndex_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeMoveLayer(oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oldIndex_j, jint newIndex_j)
				{
					ev_int32 oldIndex = (ev_int32) oldIndex_j;
					ev_int32 newIndex = (ev_int32) newIndex_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
					}
					else
					{
						pObjectX->onAfterMoveLayer(oldIndex, newIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterMoveLayer_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterMoveLayer_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterMoveLayer_ev_int32_ev_int32_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterMoveLayer_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oldIndex_j, jint newIndex_j)
				{
					ev_int32 oldIndex = (ev_int32) oldIndex_j;
					ev_int32 newIndex = (ev_int32) newIndex_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterMoveLayer(oldIndex, newIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMapSelectionChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapSelectionChanged();
					}
					else
					{
						pObjectX->onMapSelectionChanged();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMapSelectionChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMapSelectionChanged_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMapSelectionChanged_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMapSelectionChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapSelectionChanged();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMapDraw_1ISpatialDisplay_1ILayer_1EVVectorLayerRendererType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong layer_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapDraw(display, layer, type);
					}
					else
					{
						pObjectX->onMapDraw(display, layer, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMapDraw_1ISpatialDisplay_1ILayer_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback", "(JJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMapDraw_1ISpatialDisplay_1ILayer_1EVVectorLayerRendererType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong layer_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMapDraw(display, layer, type);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseDown(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseUp(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseMove(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onDoubleClick(button, shift, x, y, geoX, geoY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback", "(IIIIDD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onDoubleClick(button, shift, x, y, geoX, geoY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseWheel(delta, x, y, geoX, geoY, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback", "(IIIDDI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jdouble geoX_j, jdouble geoY_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 geoX = (ev_real64) geoX_j;
					ev_real64 geoY = (ev_real64) geoY_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onMouseWheel(delta, x, y, geoX, geoY, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyDown_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDown_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onKeyDown_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyDown(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyUp_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUp_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onKeyUp_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onKeyUp(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onResize(width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onResize(width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onResize_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onResize_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onResize_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onResize_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onResize(width, height);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
					}
					else
					{
						pObjectX->onBeforeRefresh(display, viewportEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeRefresh_ISpatialDisplay_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeRefresh_1ISpatialDisplay_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeRefresh(display, viewportEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRefresh(display, viewportEnvelope);
					}
					else
					{
						pObjectX->onAfterRefresh(display, viewportEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterRefresh_1ISpatialDisplay_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterRefresh_ISpatialDisplay_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterRefresh_ISpatialDisplay_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterRefresh_1ISpatialDisplay_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong viewportEnvelope_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *viewportEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) viewportEnvelope_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterRefresh(display, viewportEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeDrawTrackingLayer_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawTrackingLayer(display);
					}
					else
					{
						pObjectX->onBeforeDrawTrackingLayer(display);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeDrawTrackingLayer_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeDrawTrackingLayer_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeDrawTrackingLayer_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeDrawTrackingLayer_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawTrackingLayer(display);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterDrawTrackingLayer_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawTrackingLayer(display);
					}
					else
					{
						pObjectX->onAfterDrawTrackingLayer(display);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterDrawTrackingLayer_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterDrawTrackingLayer_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterDrawTrackingLayer_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterDrawTrackingLayer_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawTrackingLayer(display);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeDrawInterestTrackingItems_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawInterestTrackingItems(display);
					}
					else
					{
						pObjectX->onBeforeDrawInterestTrackingItems(display);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onBeforeDrawInterestTrackingItems_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onBeforeDrawInterestTrackingItems_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onBeforeDrawInterestTrackingItems(display);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterDrawInterestTrackingItems_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawInterestTrackingItems(display);
					}
					else
					{
						pObjectX->onAfterDrawInterestTrackingItems(display);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAfterDrawInterestTrackingItems_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterDrawInterestTrackingItems_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterDrawInterestTrackingItems_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAfterDrawInterestTrackingItems_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAfterDrawInterestTrackingItems(display);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAnalysisEnd_1ICommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong command_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *command = (EarthView::World::Spatial::SystemUI::ICommand*) command_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIMapControlListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAnalysisEnd(command);
					}
					else
					{
						pObjectX->onAnalysisEnd(command);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_register_1onAnalysisEnd_1ICommand(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIMapControlListenerProxy *pObjectX = (JIMapControlListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAnalysisEnd_ICommand_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAnalysisEnd_ICommand_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Imapcontrollistener_onAnalysisEnd_1ICommand_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong command_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *command = (EarthView::World::Spatial::SystemUI::ICommand*) command_j;
					EarthView::World::Spatial2D::Controls::IMapControlListener *pObjectX = (EarthView::World::Spatial2D::Controls::IMapControlListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IMapControlListener::onAnalysisEnd(command);
				}
				class JCMapControlProxy : public EarthView::World::Spatial2D::Controls::CMapControl
				{
				 private:
					EarthView::World::Core::ev_string m_beginDrawing_void_callback;
					EarthView::World::Core::ev_string m_endDrawing_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getTypeString_void_callback;
					EarthView::World::Core::ev_string m_notifyViewChanged_IViewArgs_callback;
					EarthView::World::Core::ev_string m_addViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_getViewListenerCount_void_callback;
					EarthView::World::Core::ev_string m_getViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_existViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_removeViewListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeViewListener_IViewListener_callback;
					EarthView::World::Core::ev_string m_clearViewListeners_void_callback;
				public:
					JCMapControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapControl(pList)
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
				protected:
					C_DISABLE_COPY(JCMapControlProxy)
				public:
					void register_beginDrawing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_beginDrawing_void_callback = __method;
					}
					void register_endDrawing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endDrawing_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getTypeString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTypeString_void_callback = __method;
					}
					void register_notifyViewChanged_IViewArgs_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyViewChanged_IViewArgs_callback = __method;
					}
					void register_addViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addViewListener_IViewListener_callback = __method;
					}
					void register_getViewListenerCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListenerCount_void_callback = __method;
					}
					void register_getViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getViewListener_ev_uint32_callback = __method;
					}
					void register_existViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_existViewListener_IViewListener_callback = __method;
					}
					void register_removeViewListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_ev_uint32_callback = __method;
					}
					void register_removeViewListener_IViewListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeViewListener_IViewListener_callback = __method;
					}
					void register_clearViewListeners_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearViewListeners_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
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
							EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = (EarthView::World::Spatial::Atlas::EVSpatialControlType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapControl::getType();
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
							return this->CMapControl::getName();
						}
					}
					virtual EVString getTypeString() const
					{
						if (this->_gRef != NULL && this->m_getTypeString_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTypeString_void_callback");
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
							return this->CMapControl::getTypeString();
						}
					}
					virtual void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args)
					{
						if (this->_gRef != NULL && this->m_notifyViewChanged_IViewArgs_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong args_j = (jlong) args;
							jmethodID __method = __gr->getMethod("notifyViewChanged_IViewArgs_callback");
							__env->CallVoidMethod(__obj, __method , args_j);
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
							return this->CMapControl::notifyViewChanged(args);
						}
					}
					virtual void beginDrawing()
					{
						if (this->_gRef != NULL && this->m_beginDrawing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("beginDrawing_void_callback");
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
							return this->CMapControl::beginDrawing();
						}
					}
					virtual void endDrawing()
					{
						if (this->_gRef != NULL && this->m_endDrawing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("endDrawing_void_callback");
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
							return this->CMapControl::endDrawing();
						}
					}
					virtual ev_bool addViewListener(EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if (this->_gRef != NULL && this->m_addViewListener_IViewListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_externalListener_j = (jlong) ref_externalListener;
							jmethodID __method = __gr->getMethod("addViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_externalListener_j);
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
							return this->CMapControl::addViewListener(ref_externalListener);
						}
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if (this->_gRef != NULL && this->m_getViewListenerCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getViewListenerCount_void_callback");
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
							return this->CMapControl::getViewListenerCount();
						}
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getViewListener_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getViewListener_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::IViewListener *__values1 = (EarthView::World::Spatial::IViewListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapControl::getViewListener(index);
						}
					}
					virtual ev_bool existViewListener(EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if (this->_gRef != NULL && this->m_existViewListener_IViewListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("existViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->CMapControl::existViewListener(externalListener);
						}
					}
					virtual ev_bool removeViewListener(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("removeViewListener_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->CMapControl::removeViewListener(index);
						}
					}
					virtual ev_bool removeViewListener(EarthView::World::Spatial::IViewListener* externalListener)
					{
						if (this->_gRef != NULL && this->m_removeViewListener_IViewListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong externalListener_j = (jlong) externalListener;
							jmethodID __method = __gr->getMethod("removeViewListener_IViewListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , externalListener_j);
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
							return this->CMapControl::removeViewListener(externalListener);
						}
					}
					virtual void clearViewListeners()
					{
						if (this->_gRef != NULL && this->m_clearViewListeners_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("clearViewListeners_void_callback");
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
							return this->CMapControl::clearViewListeners();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMapControlProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getTypeString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getTypeString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1getTypeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTypeString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTypeString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getTypeString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::getTypeString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_notifyViewChanged_1IViewArgs(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::notifyViewChanged(args);
					}
					else
					{
						pObjectX->notifyViewChanged(args);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1notifyViewChanged_1IViewArgs(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyViewChanged_IViewArgs_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyViewChanged_IViewArgs_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_notifyViewChanged_1IViewArgs_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong args_j)
				{
					EarthView::World::Spatial::IViewArgs *args = (EarthView::World::Spatial::IViewArgs*) args_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::notifyViewChanged(args);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setProxy_1CMapControlAgent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pxy_j)
				{
					EarthView::World::Spatial2D::Controls::CMapControlAgent *ref_pxy = (EarthView::World::Spatial2D::Controls::CMapControlAgent*) ref_pxy_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setProxy(ref_pxy);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getBackGround_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackGround();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setBackground_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong background_j)
				{
					const EarthView::World::Spatial::Display::IColor *background = (const EarthView::World::Spatial::Display::IColor*) background_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setBackground(background);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getDisplay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->getDisplay();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getFloatingDisplay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->getFloatingDisplay();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_map = (EarthView::World::Spatial::Atlas::IMap*) ref_map_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setMap(ref_map);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setSpatialReference(sr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMargin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMargin();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setMargin_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong margin_j)
				{
					ev_uint32 margin = (ev_uint32) margin_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setMargin(margin);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->getCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getGeographicCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->getGeographicCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setGeographicCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setGeographicCenter(cx, cy);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getCurrentScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCurrentScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setScaleAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble scale_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setScaleAt(x, y, scale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRotation();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setRotateAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setRotateAt(angle, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_gotoMap_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j, jdouble scale_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->gotoMap(cx, cy, scale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_changeViewport_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j, jdouble scale_j, jdouble rotation_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					ev_real64 scale = (ev_real64) scale_j;
					ev_real64 rotation = (ev_real64) rotation_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->changeViewport(cx, cy, scale, rotation);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_changeGeographicViewport_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j, jdouble scale_j, jdouble rotation_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					ev_real64 scale = (ev_real64) scale_j;
					ev_real64 rotation = (ev_real64) rotation_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->changeGeographicViewport(cx, cy, scale, rotation);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getCurrentCoordinate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->getCurrentCoordinate(x, y);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMapUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits __values1 = pObjectX->getMapUnits();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setMapUnits_1EVMapUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint units_j)
				{
					EarthView::World::Spatial::Atlas::EVMapUnits units = (EarthView::World::Spatial::Atlas::EVMapUnits) units_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setMapUnits(units);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setCurrentTool_1ITool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tool_j)
				{
					EarthView::World::Spatial::SystemUI::ITool *ref_tool = (EarthView::World::Spatial::SystemUI::ITool*) ref_tool_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setCurrentTool(ref_tool);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getCurrentTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->getCurrentTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getPreviousTool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ITool* __values1 = pObjectX->getPreviousTool();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMessage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EVString __values1 = pObjectX->getMessage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getViewportManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* __values1 = pObjectX->getViewportManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getTrackingLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingLayer* __values1 = pObjectX->getTrackingLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getDataEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CDataEditor* __values1 = pObjectX->getDataEditor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_select_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->select(geometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->refresh();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_isDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDrawing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_freezeDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->freezeDraw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_freezeDraw_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bWait_j)
				{
					ev_bool bWait = (ev_bool) bWait_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->freezeDraw(bWait);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_beginDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::beginDrawing();
					}
					else
					{
						pObjectX->beginDrawing();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1beginDrawing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_beginDrawing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"beginDrawing_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_beginDrawing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::beginDrawing();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_endDrawing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapControlProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::endDrawing();
					}
					else
					{
						pObjectX->endDrawing();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1endDrawing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endDrawing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endDrawing_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_endDrawing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CMapControl::endDrawing();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_updateLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->updateLayer(layer);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_isExist_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					const EarthView::World::Spatial::Atlas::ILayer *layer = (const EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExist(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_fullExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->fullExtent();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_zoomToLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->zoomToLayer(layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_previousView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->previousView();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_nextView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->nextView();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->onContextMenu(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onDoubleClick(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onKeyDown(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onKeyUp(keyCode, shift);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onMouseDown(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onMouseMove(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onMouseUp(button, shift, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onMouseWheel(delta, x, y, flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onResize(width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_notifySelectionChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->notifySelectionChanged();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_notifyOtherView_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->notifyOtherView();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onAnalysisEnd_1ICommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong command_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *command = (EarthView::World::Spatial::SystemUI::ICommand*) command_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onAnalysisEnd(command);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_addMapControlListener_1IMapControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener *ref_listener = (EarthView::World::Spatial2D::Controls::IMapControlListener*) ref_listener_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->addMapControlListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_removeMapControlListener_1IMapControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial2D::Controls::IMapControlListener *ref_listener = (EarthView::World::Spatial2D::Controls::IMapControlListener*) ref_listener_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->removeMapControlListener(ref_listener);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getEagleEye_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CMapEagleEye* __values1 = pObjectX->getEagleEye();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_connectEagleEye_1CMapEagleEye(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_eagleEye_j)
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye *ref_eagleEye = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) ref_eagleEye_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->connectEagleEye(ref_eagleEye);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_disconnectEagleEye_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->disconnectEagleEye();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMapCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->getMapCanvas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_repaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->repaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setCursor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setCursor(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setWheelDelay_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint time_j)
				{
					ev_int32 time = (ev_int32) time_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setWheelDelay(time);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getWheelDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getWheelDelay();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setViewControlMode_1EVMapcontrolViewControlMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial2D::Controls::EVMapcontrolViewControlMode mode = (EarthView::World::Spatial2D::Controls::EVMapcontrolViewControlMode) mode_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setViewControlMode(mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getViewControlMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVMapcontrolViewControlMode __values1 = pObjectX->getViewControlMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setPanClickEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setPanClickEnable(b);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getPanClickEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getPanClickEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setMiddleMouseButtonPanEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setMiddleMouseButtonPanEnable(b);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getMiddleMouseButtonPanEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getMiddleMouseButtonPanEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_setCoordinateUnit_1EVMapcontrolCoordinateUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint unit_j)
				{
					EarthView::World::Spatial2D::Controls::EVMapcontrolCoordinateUnit unit = (EarthView::World::Spatial2D::Controls::EVMapcontrolCoordinateUnit) unit_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->setCoordinateUnit(unit);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_getCoordinateUnit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVMapcontrolCoordinateUnit __values1 = pObjectX->getCoordinateUnit();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onZoomBegin_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x1_j, jint y1_j, jint x2_j, jint y2_j)
				{
					ev_int32 x1 = (ev_int32) x1_j;
					ev_int32 y1 = (ev_int32) y1_j;
					ev_int32 x2 = (ev_int32) x2_j;
					ev_int32 y2 = (ev_int32) y2_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onZoomBegin(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onZoom_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x1_j, jint y1_j, jint x2_j, jint y2_j)
				{
					ev_int32 x1 = (ev_int32) x1_j;
					ev_int32 y1 = (ev_int32) y1_j;
					ev_int32 x2 = (ev_int32) x2_j;
					ev_int32 y2 = (ev_int32) y2_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onZoom(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_onZoomEnd_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x1_j, jint y1_j, jint x2_j, jint y2_j)
				{
					ev_int32 x1 = (ev_int32) x1_j;
					ev_int32 y1 = (ev_int32) y1_j;
					ev_int32 x2 = (ev_int32) x2_j;
					ev_int32 y2 = (ev_int32) y2_j;
					EarthView::World::Spatial2D::Controls::CMapControl *pObjectX = (EarthView::World::Spatial2D::Controls::CMapControl*) pObjXXXX;
					pObjectX->onZoomEnd(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1addViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1getViewListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListenerCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListenerCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1getViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getViewListener_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1existViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_existViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"existViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1removeViewListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1removeViewListener_1IViewListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeViewListener_IViewListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeViewListener_IViewListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapControl_register_1clearViewListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapControlProxy *pObjectX = (JCMapControlProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearViewListeners_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearViewListeners_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
