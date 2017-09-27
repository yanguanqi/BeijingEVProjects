/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogramusage.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCGpuProgramUsageListenerProxy : public EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener
			{
			 private:
				EarthView::World::Core::ev_string m_backgroundLoadingComplete_CResource_callback;
				EarthView::World::Core::ev_string m_backgroundPreparingComplete_CResource_callback;
				EarthView::World::Core::ev_string m_loadingComplete_CResource_callback;
				EarthView::World::Core::ev_string m_preparingComplete_CResource_callback;
				EarthView::World::Core::ev_string m_unloadingComplete_CResource_callback;
			public:
				JCGpuProgramUsageListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgramUsageListener(pList)
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
				void register_backgroundLoadingComplete_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_backgroundLoadingComplete_CResource_callback = __method;
				}
				void register_backgroundPreparingComplete_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_backgroundPreparingComplete_CResource_callback = __method;
				}
				void register_loadingComplete_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadingComplete_CResource_callback = __method;
				}
				void register_preparingComplete_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preparingComplete_CResource_callback = __method;
				}
				void register_unloadingComplete_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadingComplete_CResource_callback = __method;
				}
				virtual void unloadingComplete(EarthView::World::Graphic::CResource* prog)
				{
					if (this->_gRef != NULL && this->m_unloadingComplete_CResource_callback != "" && this->isCustomExtend())
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
						jlong prog_j = (jlong) prog;
						jmethodID __method = __gr->getMethod("unloadingComplete_CResource_callback");
						__env->CallVoidMethod(__obj, __method , prog_j);
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
						return this->CGpuProgramUsageListener::unloadingComplete(prog);
					}
				}
				virtual void loadingComplete(EarthView::World::Graphic::CResource* prog)
				{
					if (this->_gRef != NULL && this->m_loadingComplete_CResource_callback != "" && this->isCustomExtend())
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
						jlong prog_j = (jlong) prog;
						jmethodID __method = __gr->getMethod("loadingComplete_CResource_callback");
						__env->CallVoidMethod(__obj, __method , prog_j);
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
						return this->CGpuProgramUsageListener::loadingComplete(prog);
					}
				}
				virtual void backgroundLoadingComplete(EarthView::World::Graphic::CResource* pResource)
				{
					if (this->_gRef != NULL && this->m_backgroundLoadingComplete_CResource_callback != "" && this->isCustomExtend())
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
						jlong pResource_j = (jlong) pResource;
						jmethodID __method = __gr->getMethod("backgroundLoadingComplete_CResource_callback");
						__env->CallVoidMethod(__obj, __method , pResource_j);
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
						return this->CGpuProgramUsageListener::backgroundLoadingComplete(pResource);
					}
				}
				virtual void backgroundPreparingComplete(EarthView::World::Graphic::CResource* pResource)
				{
					if (this->_gRef != NULL && this->m_backgroundPreparingComplete_CResource_callback != "" && this->isCustomExtend())
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
						jlong pResource_j = (jlong) pResource;
						jmethodID __method = __gr->getMethod("backgroundPreparingComplete_CResource_callback");
						__env->CallVoidMethod(__obj, __method , pResource_j);
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
						return this->CGpuProgramUsageListener::backgroundPreparingComplete(pResource);
					}
				}
				virtual void preparingComplete(EarthView::World::Graphic::CResource* pResource)
				{
					if (this->_gRef != NULL && this->m_preparingComplete_CResource_callback != "" && this->isCustomExtend())
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
						jlong pResource_j = (jlong) pResource;
						jmethodID __method = __gr->getMethod("preparingComplete_CResource_callback");
						__env->CallVoidMethod(__obj, __method , pResource_j);
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
						return this->CGpuProgramUsageListener::preparingComplete(pResource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGpuProgramUsageListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_unloadingComplete_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CResource *prog = (EarthView::World::Graphic::CResource*) prog_j;
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramUsageListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::unloadingComplete(prog);
				}
				else
				{
					pObjectX->unloadingComplete(prog);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_register_1unloadingComplete_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramUsageListenerProxy *pObjectX = (JCGpuProgramUsageListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadingComplete_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadingComplete_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_unloadingComplete_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CResource *prog = (EarthView::World::Graphic::CResource*) prog_j;
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::unloadingComplete(prog);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_loadingComplete_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CResource *prog = (EarthView::World::Graphic::CResource*) prog_j;
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramUsageListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::loadingComplete(prog);
				}
				else
				{
					pObjectX->loadingComplete(prog);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_register_1loadingComplete_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramUsageListenerProxy *pObjectX = (JCGpuProgramUsageListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadingComplete_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadingComplete_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_loadingComplete_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CResource *prog = (EarthView::World::Graphic::CResource*) prog_j;
				EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener::loadingComplete(prog);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_register_1backgroundLoadingComplete_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramUsageListenerProxy *pObjectX = (JCGpuProgramUsageListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_backgroundLoadingComplete_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"backgroundLoadingComplete_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_register_1backgroundPreparingComplete_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramUsageListenerProxy *pObjectX = (JCGpuProgramUsageListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_backgroundPreparingComplete_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"backgroundPreparingComplete_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_00024GpuProgramUsageListener_register_1preparingComplete_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramUsageListenerProxy *pObjectX = (JCGpuProgramUsageListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preparingComplete_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preparingComplete_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener* __values1 = pObjectX->getListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramUsage::CGpuProgramUsageListener& __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_setProgramName_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->setProgramName(name, resetParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_setProgramName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->setProgramName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_setProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &prog = *(EarthView::World::Graphic::CGpuProgramPtr*) prog_j;
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->setProgram(prog);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				EVString __values1 = pObjectX->getProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_setParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameters_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr parameters = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) parameters_j;
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->setParameters(parameters);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramUsage_getParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage__1load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->_load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramUsage__1unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramUsage *pObjectX = (EarthView::World::Graphic::CGpuProgramUsage*) pObjXXXX;
				pObjectX->_unload();
			}
		}
	}
}
