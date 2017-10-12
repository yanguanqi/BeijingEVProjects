/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/evrenderenginemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class JCRenderEngineProxy : public EarthView::World::Spatial::Display::CRenderEngine
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_createDrawSymbol_ev_int32_callback;
				public:
					JCRenderEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderEngine(pList)
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
					C_DISABLE_COPY(JCRenderEngineProxy)
				public:
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_createDrawSymbol_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDrawSymbol_ev_int32_callback = __method;
					}
					virtual const EVString getName() const
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRenderEngine::getName();
						}
					}
					virtual EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(ev_int32 symbolType) const
					{
						if (this->_gRef != NULL && this->m_createDrawSymbol_ev_int32_callback != "" && this->isCustomExtend())
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
							jint symbolType_j = (jint) symbolType;
							jmethodID __method = __gr->getMethod("createDrawSymbol_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , symbolType_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CDrawSymbol *__values1 = (EarthView::World::Spatial::Display::CDrawSymbol*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CRenderEngine::createDrawSymbol(symbolType);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRenderEngineProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_RenderEngine_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRenderEngine *pObjectX = (EarthView::World::Spatial::Display::CRenderEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRenderEngineProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CRenderEngine::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RenderEngine_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRenderEngineProxy *pObjectX = (JCRenderEngineProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_RenderEngine_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CRenderEngine *pObjectX = (EarthView::World::Spatial::Display::CRenderEngine*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CRenderEngine::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RenderEngine_createDrawSymbol_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint symbolType_j)
				{
					ev_int32 symbolType = (ev_int32) symbolType_j;
					const 					EarthView::World::Spatial::Display::CRenderEngine *pObjectX = (EarthView::World::Spatial::Display::CRenderEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRenderEngineProxy))
					{
						EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CRenderEngine::createDrawSymbol(symbolType);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->createDrawSymbol(symbolType);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RenderEngine_register_1createDrawSymbol_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRenderEngineProxy *pObjectX = (JCRenderEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDrawSymbol_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDrawSymbol_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_RenderEngine_createDrawSymbol_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint symbolType_j)
				{
					ev_int32 symbolType = (ev_int32) symbolType_j;
					const 					EarthView::World::Spatial::Display::CRenderEngine *pObjectX = (EarthView::World::Spatial::Display::CRenderEngine*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CRenderEngine::createDrawSymbol(symbolType);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* __values1 = EarthView::World::Spatial::Display::EVRenderEngineManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_setCurrentRenderEngine_1CRenderEngine(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderEngine_j)
				{
					const EarthView::World::Spatial::Display::CRenderEngine *renderEngine = (const EarthView::World::Spatial::Display::CRenderEngine*) renderEngine_j;
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					pObjectX->setCurrentRenderEngine(renderEngine);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_getCurrentRenderEngine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					EarthView::World::Spatial::Display::CRenderEngine* __values1 = pObjectX->getCurrentRenderEngine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_registerRenderEngine_1CRenderEngine(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEngine_j)
				{
					const EarthView::World::Spatial::Display::CRenderEngine *pEngine = (const EarthView::World::Spatial::Display::CRenderEngine*) pEngine_j;
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					pObjectX->registerRenderEngine(pEngine);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_getRenderEngine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring engineName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* engineName_ch = (const ev_char*)__env->GetStringUTFChars(engineName_j,JNI_FALSE);
					const EVString engineName = engineName_ch;
					__env->ReleaseStringUTFChars(engineName_j, (const char *)engineName_ch);
					#else
					const ev_wchar* engineName_ch = (const ev_wchar*)__env->GetStringChars(engineName_j,JNI_FALSE);
					const EVString engineName = engineName_ch;
					__env->ReleaseStringChars(engineName_j, (const jchar *)engineName_ch);
					#endif
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					const EarthView::World::Spatial::Display::CRenderEngine* __values1 = pObjectX->getRenderEngine(engineName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_getRenderEngine_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					const EarthView::World::Spatial::Display::CRenderEngine* __values1 = pObjectX->getRenderEngine(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_getRenderEngineCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getRenderEngineCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Evrenderenginemanager_loadEngines_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjXXXX;
					pObjectX->loadEngines();
				}
			}
		}
	}
}
