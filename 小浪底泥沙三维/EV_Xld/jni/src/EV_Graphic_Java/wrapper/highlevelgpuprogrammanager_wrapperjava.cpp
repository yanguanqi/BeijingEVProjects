/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/highlevelgpuprogrammanager.h"
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
			class JCHighLevelGpuProgramFactoryProxy : public EarthView::World::Graphic::CHighLevelGpuProgramFactory
			{
			 private:
				EarthView::World::Core::ev_string m_getLanguage_void_callback;
				EarthView::World::Core::ev_string m_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_destroy_CHighLevelGpuProgram_callback;
			public:
				JCHighLevelGpuProgramFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHighLevelGpuProgramFactory(pList)
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
				void register_getLanguage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLanguage_void_callback = __method;
				}
				void register_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_destroy_CHighLevelGpuProgram_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroy_CHighLevelGpuProgram_callback = __method;
				}
				virtual EVString getLanguage() const
				{
					if (this->_gRef != NULL && this->m_getLanguage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLanguage_void_callback");
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
						return this->CHighLevelGpuProgramFactory::getLanguage();
					}
				}
				virtual EarthView::World::Graphic::CHighLevelGpuProgram* create(EarthView::World::Graphic::CResourceManager* ref_creator, const EVString& name, ev_uint64 handle, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						jlong ref_creator_j = (jlong) ref_creator;
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong handle_j = (jlong) &handle;
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_creator_j, name_j, handle_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHighLevelGpuProgram *__values1 = (EarthView::World::Graphic::CHighLevelGpuProgram*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramFactory::create(ref_creator, name, handle, group, isManual, ref_loader);
					}
				}
				virtual void destroy(EarthView::World::Graphic::CHighLevelGpuProgram* prog)
				{
					if (this->_gRef != NULL && this->m_destroy_CHighLevelGpuProgram_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroy_CHighLevelGpuProgram_callback");
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
						return this->CHighLevelGpuProgramFactory::destroy(prog);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHighLevelGpuProgramFactoryProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_getLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHighLevelGpuProgramFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::getLanguage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLanguage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_register_1getLanguage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramFactoryProxy *pObjectX = (JCHighLevelGpuProgramFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLanguage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLanguage_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_getLanguage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::getLanguage();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_create_1CResourceManager_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_creator_j, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				EarthView::World::Graphic::CResourceManager *ref_creator = (EarthView::World::Graphic::CResourceManager*) ref_creator_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHighLevelGpuProgramFactoryProxy))
				{
					EarthView::World::Graphic::CHighLevelGpuProgram* __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::create(ref_creator, name, handle, group, isManual, ref_loader);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHighLevelGpuProgram* __values1 = pObjectX->create(ref_creator, name, handle, group, isManual, ref_loader);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_register_1create_1CResourceManager_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramFactoryProxy *pObjectX = (JCHighLevelGpuProgramFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_callback", "(JLjava/lang/String;JLjava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_create_1CResourceManager_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_creator_j, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
			{
				EarthView::World::Graphic::CResourceManager *ref_creator = (EarthView::World::Graphic::CResourceManager*) ref_creator_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgram* __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::create(ref_creator, name, handle, group, isManual, ref_loader);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_destroy_1CHighLevelGpuProgram(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgram *prog = (EarthView::World::Graphic::CHighLevelGpuProgram*) prog_j;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHighLevelGpuProgramFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::destroy(prog);
				}
				else
				{
					pObjectX->destroy(prog);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_register_1destroy_1CHighLevelGpuProgram(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramFactoryProxy *pObjectX = (JCHighLevelGpuProgramFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroy_CHighLevelGpuProgram_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroy_CHighLevelGpuProgram_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramFactory_destroy_1CHighLevelGpuProgram_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong prog_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgram *prog = (EarthView::World::Graphic::CHighLevelGpuProgram*) prog_j;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramFactory::destroy(prog);
			}
			class JCHighLevelGpuProgramManagerProxy : public EarthView::World::Graphic::CHighLevelGpuProgramManager
			{
			 private:
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_create_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_createUnmanaged_EVString_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_createOrRetrieve_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setMemoryBudget_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getMemoryBudget_void_callback;
				EarthView::World::Core::ev_string m_getMemoryUsage_void_callback;
				EarthView::World::Core::ev_string m_unload_EVString_callback;
				EarthView::World::Core::ev_string m_unload_ev_uint64_callback;
				EarthView::World::Core::ev_string m_unloadAll_ev_bool_callback;
				EarthView::World::Core::ev_string m_unloadAll_void_callback;
				EarthView::World::Core::ev_string m_reloadAll_ev_bool_callback;
				EarthView::World::Core::ev_string m_reloadAll_void_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_reloadUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_reloadUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_remove_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_remove_EVString_callback;
				EarthView::World::Core::ev_string m_remove_ev_uint64_callback;
				EarthView::World::Core::ev_string m_remove_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_removeAll_void_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResources_ev_bool_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResources_void_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResource_EVString_callback;
				EarthView::World::Core::ev_string m_removeUnreferencedResource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getByName_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_getByName_EVString_callback;
				EarthView::World::Core::ev_string m_getByHandle_ev_uint64_callback;
				EarthView::World::Core::ev_string m_resourceExists_EVString_callback;
				EarthView::World::Core::ev_string m_resourceExists_ev_uint64_callback;
				EarthView::World::Core::ev_string m__notifyResourceTouched_CResource_callback;
				EarthView::World::Core::ev_string m__notifyResourceLoaded_CResource_callback;
				EarthView::World::Core::ev_string m__notifyResourceUnloaded_CResource_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setVerbose_ev_bool_callback;
				EarthView::World::Core::ev_string m_getVerbose_void_callback;
				EarthView::World::Core::ev_string m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_addImpl_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_removeImpl_ResourcePtr_callback;
				EarthView::World::Core::ev_string m_checkUsage_void_callback;
				EarthView::World::Core::ev_string m_getScriptPatterns_void_callback;
				EarthView::World::Core::ev_string m_parseScript_DataStreamPtr_EVString_callback;
				EarthView::World::Core::ev_string m_getLoadingOrder_void_callback;
			public:
				JCHighLevelGpuProgramManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CHighLevelGpuProgramManager(pList)
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
				void register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_create_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_create_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_ev_bool_callback = __method;
				}
				void register_create_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_EVString_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_createUnmanaged_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_ev_bool_callback = __method;
				}
				void register_createUnmanaged_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUnmanaged_EVString_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_ev_bool_callback = __method;
				}
				void register_createOrRetrieve_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createOrRetrieve_EVString_EVString_callback = __method;
				}
				void register_setMemoryBudget_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMemoryBudget_ev_size_t_callback = __method;
				}
				void register_getMemoryBudget_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMemoryBudget_void_callback = __method;
				}
				void register_getMemoryUsage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMemoryUsage_void_callback = __method;
				}
				void register_unload_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_EVString_callback = __method;
				}
				void register_unload_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_ev_uint64_callback = __method;
				}
				void register_unloadAll_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadAll_ev_bool_callback = __method;
				}
				void register_unloadAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadAll_void_callback = __method;
				}
				void register_reloadAll_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadAll_ev_bool_callback = __method;
				}
				void register_reloadAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadAll_void_callback = __method;
				}
				void register_unloadUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResources_ev_bool_callback = __method;
				}
				void register_unloadUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResources_void_callback = __method;
				}
				void register_reloadUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadUnreferencedResources_ev_bool_callback = __method;
				}
				void register_reloadUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reloadUnreferencedResources_void_callback = __method;
				}
				void register_remove_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_ResourcePtr_callback = __method;
				}
				void register_remove_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_EVString_callback = __method;
				}
				void register_remove_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_ev_uint64_callback = __method;
				}
				void register_remove_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_EVString_EVString_callback = __method;
				}
				void register_removeAll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAll_void_callback = __method;
				}
				void register_removeUnreferencedResources_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResources_ev_bool_callback = __method;
				}
				void register_removeUnreferencedResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResources_void_callback = __method;
				}
				void register_removeUnreferencedResource_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResource_EVString_callback = __method;
				}
				void register_removeUnreferencedResource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeUnreferencedResource_EVString_EVString_callback = __method;
				}
				void register_unloadUnreferencedResource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResource_EVString_EVString_callback = __method;
				}
				void register_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback = __method;
				}
				void register_getByName_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByName_EVString_EVString_callback = __method;
				}
				void register_getByName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByName_EVString_callback = __method;
				}
				void register_getByHandle_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getByHandle_ev_uint64_callback = __method;
				}
				void register_resourceExists_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceExists_EVString_callback = __method;
				}
				void register_resourceExists_ev_uint64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resourceExists_ev_uint64_callback = __method;
				}
				void register__notifyResourceTouched_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceTouched_CResource_callback = __method;
				}
				void register__notifyResourceLoaded_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceLoaded_CResource_callback = __method;
				}
				void register__notifyResourceUnloaded_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyResourceUnloaded_CResource_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_prepare_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_CManualResourceLoader_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback = __method;
				}
				void register_load_EVString_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_callback = __method;
				}
				void register_setVerbose_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVerbose_ev_bool_callback = __method;
				}
				void register_getVerbose_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVerbose_void_callback = __method;
				}
				void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback = __method;
				}
				void register_addImpl_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addImpl_ResourcePtr_callback = __method;
				}
				void register_removeImpl_ResourcePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeImpl_ResourcePtr_callback = __method;
				}
				void register_checkUsage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkUsage_void_callback = __method;
				}
				void register_getScriptPatterns_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScriptPatterns_void_callback = __method;
				}
				void register_parseScript_DataStreamPtr_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_parseScript_DataStreamPtr_EVString_callback = __method;
				}
				void register_getLoadingOrder_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingOrder_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CResource* createImpl(const EVString& name, ev_uint64 handle, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* params)
				{
					if (this->_gRef != NULL && this->m_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong handle_j = (jlong) &handle;
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, handle_j, group_j, isManual_j, ref_loader_j, params_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource *__values1 = (EarthView::World::Graphic::CResource*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createImpl(name, handle, group, isManual, ref_loader, params);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::create(name, group, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::create(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("create_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::create(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr create(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_create_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jmethodID __method = __gr->getMethod("create_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::create(name, group);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createUnmanaged_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createUnmanaged_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createUnmanaged(name);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, createParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_createOrRetrieve_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group);
					}
				}
				virtual void setMemoryBudget(ev_size_t bytes)
				{
					if (this->_gRef != NULL && this->m_setMemoryBudget_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong bytes_j = (jlong) bytes;
						jmethodID __method = __gr->getMethod("setMemoryBudget_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , bytes_j);
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
						return this->CHighLevelGpuProgramManager::setMemoryBudget(bytes);
					}
				}
				virtual ev_size_t getMemoryBudget() const
				{
					if (this->_gRef != NULL && this->m_getMemoryBudget_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMemoryBudget_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getMemoryBudget();
					}
				}
				virtual ev_size_t getMemoryUsage() const
				{
					if (this->_gRef != NULL && this->m_getMemoryUsage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMemoryUsage_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getMemoryUsage();
					}
				}
				virtual void unload(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_unload_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("unload_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CHighLevelGpuProgramManager::unload(name);
					}
				}
				virtual void unload(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_unload_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("unload_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , handle_j);
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
						return this->CHighLevelGpuProgramManager::unload(handle);
					}
				}
				virtual void unloadAll(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_unloadAll_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("unloadAll_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CHighLevelGpuProgramManager::unloadAll(reloadableOnly);
					}
				}
				virtual void unloadAll()
				{
					if (this->_gRef != NULL && this->m_unloadAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadAll_void_callback");
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
						return this->CHighLevelGpuProgramManager::unloadAll();
					}
				}
				virtual void reloadAll(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_reloadAll_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("reloadAll_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CHighLevelGpuProgramManager::reloadAll(reloadableOnly);
					}
				}
				virtual void reloadAll()
				{
					if (this->_gRef != NULL && this->m_reloadAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reloadAll_void_callback");
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
						return this->CHighLevelGpuProgramManager::reloadAll();
					}
				}
				virtual void unloadUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("unloadUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResources(reloadableOnly);
					}
				}
				virtual void unloadUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadUnreferencedResources_void_callback");
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
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResources();
					}
				}
				virtual void reloadUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_reloadUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("reloadUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CHighLevelGpuProgramManager::reloadUnreferencedResources(reloadableOnly);
					}
				}
				virtual void reloadUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_reloadUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reloadUnreferencedResources_void_callback");
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
						return this->CHighLevelGpuProgramManager::reloadUnreferencedResources();
					}
				}
				virtual void remove(EarthView::World::Graphic::ResourcePtr& r)
				{
					if (this->_gRef != NULL && this->m_remove_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong r_j = (jlong) &r;
						jmethodID __method = __gr->getMethod("remove_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , r_j);
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
						return this->CHighLevelGpuProgramManager::remove(r);
					}
				}
				virtual void remove(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_remove_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("remove_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CHighLevelGpuProgramManager::remove(name);
					}
				}
				virtual void remove(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_remove_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("remove_ev_uint64_callback");
						__env->CallVoidMethod(__obj, __method , handle_j);
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
						return this->CHighLevelGpuProgramManager::remove(handle);
					}
				}
				virtual void remove(const EVString& name, const EVString& groupname)
				{
					if (this->_gRef != NULL && this->m_remove_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring groupname_wch = groupname;
						jstring groupname_j = __env->NewString((const jchar*)groupname_wch.getString(), groupname_wch.size());
						jmethodID __method = __gr->getMethod("remove_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupname_j);
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
						return this->CHighLevelGpuProgramManager::remove(name, groupname);
					}
				}
				virtual void removeAll()
				{
					if (this->_gRef != NULL && this->m_removeAll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAll_void_callback");
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
						return this->CHighLevelGpuProgramManager::removeAll();
					}
				}
				virtual void removeUnreferencedResources(ev_bool reloadableOnly)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResources_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean reloadableOnly_j = (jboolean) reloadableOnly;
						jmethodID __method = __gr->getMethod("removeUnreferencedResources_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , reloadableOnly_j);
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
						return this->CHighLevelGpuProgramManager::removeUnreferencedResources(reloadableOnly);
					}
				}
				virtual void removeUnreferencedResources()
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeUnreferencedResources_void_callback");
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
						return this->CHighLevelGpuProgramManager::removeUnreferencedResources();
					}
				}
				virtual void removeUnreferencedResource(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResource_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeUnreferencedResource_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CHighLevelGpuProgramManager::removeUnreferencedResource(name);
					}
				}
				virtual void removeUnreferencedResource(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_removeUnreferencedResource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("removeUnreferencedResource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j);
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
						return this->CHighLevelGpuProgramManager::removeUnreferencedResource(name, groupName);
					}
				}
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("unloadUnreferencedResource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j);
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
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResource(name, groupName);
					}
				}
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName, ev_uint16 useCount)
				{
					if (this->_gRef != NULL && this->m_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint useCount_j = (jint) useCount;
						jmethodID __method = __gr->getMethod("unloadUnreferencedResource_EVString_EVString_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , name_j, groupName_j, useCount_j);
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
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResource(name, groupName, useCount);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString& name, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_getByName_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("getByName_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, groupName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getByName(name, groupName);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getByName_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getByName_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getByName(name);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr getByHandle(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_getByHandle_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("getByHandle_ev_uint64_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getByHandle(handle);
					}
				}
				virtual ev_bool resourceExists(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_resourceExists_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("resourceExists_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
						return this->CHighLevelGpuProgramManager::resourceExists(name);
					}
				}
				virtual ev_bool resourceExists(ev_uint64 handle)
				{
					if (this->_gRef != NULL && this->m_resourceExists_ev_uint64_callback != "" && this->isCustomExtend())
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
						jlong handle_j = (jlong) &handle;
						jmethodID __method = __gr->getMethod("resourceExists_ev_uint64_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , handle_j);
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
						return this->CHighLevelGpuProgramManager::resourceExists(handle);
					}
				}
				virtual void _notifyResourceTouched(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceTouched_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceTouched_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CHighLevelGpuProgramManager::_notifyResourceTouched(res);
					}
				}
				virtual void _notifyResourceLoaded(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceLoaded_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceLoaded_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CHighLevelGpuProgramManager::_notifyResourceLoaded(res);
					}
				}
				virtual void _notifyResourceUnloaded(EarthView::World::Graphic::CResource* res)
				{
					if (this->_gRef != NULL && this->m__notifyResourceUnloaded_CResource_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) res;
						jmethodID __method = __gr->getMethod("_notifyResourceUnloaded_CResource_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CHighLevelGpuProgramManager::_notifyResourceUnloaded(res);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j, backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams, ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j, backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jlong loadParams_j = (jlong) loadParams;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, loadParams_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader, loadParams);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_CManualResourceLoader_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jlong ref_loader_j = (jlong) ref_loader;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_CManualResourceLoader_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group, ev_bool isManual)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jboolean isManual_j = (jboolean) isManual;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::load(name, group, isManual);
					}
				}
				virtual EarthView::World::Graphic::ResourcePtr load(const EVString& name, const EVString& group)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring group_wch = group;
						jstring group_j = __env->NewString((const jchar*)group_wch.getString(), group_wch.size());
						jmethodID __method = __gr->getMethod("load_EVString_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ResourcePtr __values1 = *(EarthView::World::Graphic::ResourcePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::load(name, group);
					}
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if (this->_gRef != NULL && this->m_getScriptPatterns_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getScriptPatterns_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Core::StringVector &__values1 = *(const EarthView::World::Core::StringVector*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getScriptPatterns();
					}
				}
				virtual void parseScript(EarthView::World::Core::DataStreamPtr& stream, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_parseScript_DataStreamPtr_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("parseScript_DataStreamPtr_EVString_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, groupName_j);
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
						return this->CHighLevelGpuProgramManager::parseScript(stream, groupName);
					}
				}
				virtual Real getLoadingOrder() const
				{
					if (this->_gRef != NULL && this->m_getLoadingOrder_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLoadingOrder_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHighLevelGpuProgramManager::getLoadingOrder();
					}
				}
				virtual void setVerbose(ev_bool v)
				{
					if (this->_gRef != NULL && this->m_setVerbose_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean v_j = (jboolean) v;
						jmethodID __method = __gr->getMethod("setVerbose_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , v_j);
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
						return this->CHighLevelGpuProgramManager::setVerbose(v);
					}
				}
				virtual ev_bool getVerbose()
				{
					if (this->_gRef != NULL && this->m_getVerbose_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVerbose_void_callback");
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
						return this->CHighLevelGpuProgramManager::getVerbose();
					}
				}
				virtual void addImpl(EarthView::World::Graphic::ResourcePtr& res)
				{
					if (this->_gRef != NULL && this->m_addImpl_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) &res;
						jmethodID __method = __gr->getMethod("addImpl_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CHighLevelGpuProgramManager::addImpl(res);
					}
				}
				virtual void removeImpl(EarthView::World::Graphic::ResourcePtr& res)
				{
					if (this->_gRef != NULL && this->m_removeImpl_ResourcePtr_callback != "" && this->isCustomExtend())
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
						jlong res_j = (jlong) &res;
						jmethodID __method = __gr->getMethod("removeImpl_ResourcePtr_callback");
						__env->CallVoidMethod(__obj, __method , res_j);
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
						return this->CHighLevelGpuProgramManager::removeImpl(res);
					}
				}
				virtual void checkUsage()
				{
					if (this->_gRef != NULL && this->m_checkUsage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("checkUsage_void_callback");
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
						return this->CHighLevelGpuProgramManager::checkUsage();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHighLevelGpuProgramManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager& __values1 = EarthView::World::Graphic::CHighLevelGpuProgramManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager* __values1 = EarthView::World::Graphic::CHighLevelGpuProgramManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_push_1EVString_1CHighLevelGpuProgramFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *&ref_val = *(EarthView::World::Graphic::CHighLevelGpuProgramFactory**) ref_val_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap& pObjectX = *(EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024GpuProgramFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryPair_set_1second_1CHighLevelGpuProgramFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_00024HighLevelGpuProgramFactoryIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHighLevelGpuProgramManagerProxy))
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramManager::createImpl(name, handle, group, isManual, ref_loader, params);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->createImpl(name, handle, group, isManual, ref_loader, params);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;JLjava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				ev_uint64 handle = *(ev_uint64*) handle_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CHighLevelGpuProgramManager::createImpl(name, handle, group, isManual, ref_loader, params);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_addFactory_1CHighLevelGpuProgramFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *ref_factory = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) ref_factory_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				pObjectX->addFactory(ref_factory);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_removeFactory_1CHighLevelGpuProgramFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
			{
				EarthView::World::Graphic::CHighLevelGpuProgramFactory *factory = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) factory_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				pObjectX->removeFactory(factory);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_isLanguageSupported_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring lang_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lang_ch = (const ev_char*)__env->GetStringUTFChars(lang_j,JNI_FALSE);
				const EVString lang = lang_ch;
				__env->ReleaseStringUTFChars(lang_j, (const char *)lang_ch);
				#else
				const ev_wchar* lang_ch = (const ev_wchar*)__env->GetStringChars(lang_j,JNI_FALSE);
				const EVString lang = lang_ch;
				__env->ReleaseStringChars(lang_j, (const jchar *)lang_ch);
				#endif
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLanguageSupported(lang);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_createProgram_1EVString_1EVString_1EVString_1GpuProgramType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jstring language_j, jint gptype_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* language_ch = (const ev_char*)__env->GetStringUTFChars(language_j,JNI_FALSE);
				const EVString language = language_ch;
				__env->ReleaseStringUTFChars(language_j, (const char *)language_ch);
				#else
				const ev_wchar* language_ch = (const ev_wchar*)__env->GetStringChars(language_j,JNI_FALSE);
				const EVString language = language_ch;
				__env->ReleaseStringChars(language_j, (const jchar *)language_ch);
				#endif
				EarthView::World::Graphic::GpuProgramType gptype = (EarthView::World::Graphic::GpuProgramType) gptype_j;
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pObjectX = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramPtr __values1 = pObjectX->createProgram(name, groupName, language, gptype);
				EarthView::World::Graphic::CHighLevelGpuProgramPtr *returnvalues = new EarthView::World::Graphic::CHighLevelGpuProgramPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1create_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1create_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createUnmanaged_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createUnmanaged_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUnmanaged_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUnmanaged_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1createOrRetrieve_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createOrRetrieve_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieve_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1setMemoryBudget_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMemoryBudget_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMemoryBudget_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getMemoryBudget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMemoryBudget_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMemoryBudget_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getMemoryUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMemoryUsage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMemoryUsage_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unload_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unload_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadAll_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadAll_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1reloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadAll_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadAll_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1reloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1reloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1reloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reloadUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reloadUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1remove_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1remove_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_ev_uint64_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1remove_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAll_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResources_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResources_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeUnreferencedResource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResource_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResource_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeUnreferencedResource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeUnreferencedResource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadUnreferencedResource_EVString_EVString_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadUnreferencedResource_EVString_EVString_ev_uint16_callback", "(Ljava/lang/String;Ljava/lang/String;I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getByName_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByName_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByName_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByName_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getByHandle_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getByHandle_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getByHandle_ev_uint64_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1resourceExists_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceExists_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceExists_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1resourceExists_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resourceExists_ev_uint64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resourceExists_ev_uint64_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1_1notifyResourceTouched_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceTouched_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceTouched_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1_1notifyResourceLoaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceLoaded_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceLoaded_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1_1notifyResourceUnloaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyResourceUnloaded_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyResourceUnloaded_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1prepare_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback", "(Ljava/lang/String;Ljava/lang/String;ZJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_CManualResourceLoader_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_CManualResourceLoader_callback", "(Ljava/lang/String;Ljava/lang/String;ZJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1load_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1load_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1setVerbose_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVerbose_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVerbose_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getVerbose_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVerbose_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVerbose_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1addImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addImpl_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addImpl_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1removeImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeImpl_ResourcePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeImpl_ResourcePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1checkUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkUsage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkUsage_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScriptPatterns_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScriptPatterns_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_parseScript_DataStreamPtr_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"parseScript_DataStreamPtr_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HighLevelGpuProgramManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHighLevelGpuProgramManagerProxy *pObjectX = (JCHighLevelGpuProgramManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingOrder_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingOrder_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
