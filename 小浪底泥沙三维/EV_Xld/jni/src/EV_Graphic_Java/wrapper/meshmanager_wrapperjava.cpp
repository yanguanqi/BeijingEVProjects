/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/meshmanager.h"
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
			class JCMeshManagerProxy : public EarthView::World::Graphic::CMeshManager
			{
			 private:
				EarthView::World::Core::ev_string m_prepareResource_CResource_callback;
				EarthView::World::Core::ev_string m_getManualResourceLoaderPtr_void_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_Usage_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_Usage_Usage_callback;
				EarthView::World::Core::ev_string m_prepare_EVString_EVString_Usage_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_Usage_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_Usage_Usage_callback;
				EarthView::World::Core::ev_string m_load_EVString_EVString_Usage_callback;
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
				JCMeshManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshManager(pList)
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
				void register_prepareResource_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareResource_CResource_callback = __method;
				}
				void register_getManualResourceLoaderPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getManualResourceLoaderPtr_void_callback = __method;
				}
				void register_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback = __method;
				}
				void register_prepare_EVString_EVString_Usage_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_Usage_Usage_ev_bool_callback = __method;
				}
				void register_prepare_EVString_EVString_Usage_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_Usage_Usage_callback = __method;
				}
				void register_prepare_EVString_EVString_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_EVString_EVString_Usage_callback = __method;
				}
				void register_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_Usage_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_Usage_Usage_ev_bool_callback = __method;
				}
				void register_load_EVString_EVString_Usage_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_Usage_Usage_callback = __method;
				}
				void register_load_EVString_EVString_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_EVString_EVString_Usage_callback = __method;
				}
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
				virtual void prepareResource(EarthView::World::Graphic::CResource* resource)
				{
					if (this->_gRef != NULL && this->m_prepareResource_CResource_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) resource;
						jmethodID __method = __gr->getMethod("prepareResource_CResource_callback");
						__env->CallVoidMethod(__obj, __method , resource_j);
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
						return this->CMeshManager::prepareResource(resource);
					}
				}
				virtual EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader* getManualResourceLoaderPtr()
				{
					if (this->_gRef != NULL && this->m_getManualResourceLoaderPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getManualResourceLoaderPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *__values1 = (EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::getManualResourceLoaderPtr();
					}
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString& name, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* ref_loader, const EarthView::World::Core::CommonStringPairList* params)
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
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, group_j, isManual_j, ref_loader_j, params_j);
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
						return this->CMeshManager::createOrRetrieve(name, group, isManual, ref_loader, params);
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
						return this->CMeshManager::createOrRetrieve(name, group, isManual, ref_loader);
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
						return this->CMeshManager::createOrRetrieve(name, group, isManual);
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
						return this->CMeshManager::createOrRetrieve(name, group);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr prepare(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage, ev_bool vertexBufferShadowed, ev_bool indexBufferShadowed)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jboolean vertexBufferShadowed_j = (jboolean) vertexBufferShadowed;
						jboolean indexBufferShadowed_j = (jboolean) indexBufferShadowed;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j, vertexBufferShadowed_j, indexBufferShadowed_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr prepare(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage, ev_bool vertexBufferShadowed)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_Usage_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jboolean vertexBufferShadowed_j = (jboolean) vertexBufferShadowed;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_Usage_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j, vertexBufferShadowed_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr prepare(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_Usage_Usage_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_Usage_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr prepare(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage)
				{
					if (this->_gRef != NULL && this->m_prepare_EVString_EVString_Usage_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jmethodID __method = __gr->getMethod("prepare_EVString_EVString_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::prepare(filename, groupName, vertexBufferUsage);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr load(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage, ev_bool vertexBufferShadowed, ev_bool indexBufferShadowed)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jboolean vertexBufferShadowed_j = (jboolean) vertexBufferShadowed;
						jboolean indexBufferShadowed_j = (jboolean) indexBufferShadowed;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j, vertexBufferShadowed_j, indexBufferShadowed_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr load(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage, ev_bool vertexBufferShadowed)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_Usage_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jboolean vertexBufferShadowed_j = (jboolean) vertexBufferShadowed;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_Usage_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j, vertexBufferShadowed_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr load(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage, EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_Usage_Usage_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jint indexBufferUsage_j = (jint) indexBufferUsage;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_Usage_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j, indexBufferUsage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage);
					}
				}
				virtual EarthView::World::Graphic::CMeshPtr load(const EVString& filename, const EVString& groupName, EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage)
				{
					if (this->_gRef != NULL && this->m_load_EVString_EVString_Usage_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jint vertexBufferUsage_j = (jint) vertexBufferUsage;
						jmethodID __method = __gr->getMethod("load_EVString_EVString_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, groupName_j, vertexBufferUsage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshManager::load(filename, groupName, vertexBufferUsage);
					}
				}
				virtual EarthView::World::Graphic::CResource* createImpl(const EVString& name, ev_uint64 handle, const EVString& group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader* loader, const EarthView::World::Core::CommonStringPairList* createParams)
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
						jlong loader_j = (jlong) loader;
						jlong createParams_j = (jlong) createParams;
						jmethodID __method = __gr->getMethod("createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, handle_j, group_j, isManual_j, loader_j, createParams_j);
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
						return this->CMeshManager::createImpl(name, handle, group, isManual, loader, createParams);
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
						return this->CMeshManager::create(name, group, isManual, ref_loader, createParams);
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
						return this->CMeshManager::create(name, group, isManual, ref_loader);
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
						return this->CMeshManager::create(name, group, isManual);
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
						return this->CMeshManager::create(name, group);
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
						return this->CMeshManager::createUnmanaged(name, isManual, ref_loader, createParams);
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
						return this->CMeshManager::createUnmanaged(name, isManual, ref_loader);
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
						return this->CMeshManager::createUnmanaged(name, isManual);
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
						return this->CMeshManager::createUnmanaged(name);
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
						return this->CMeshManager::setMemoryBudget(bytes);
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
						return this->CMeshManager::getMemoryBudget();
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
						return this->CMeshManager::getMemoryUsage();
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
						return this->CMeshManager::unload(name);
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
						return this->CMeshManager::unload(handle);
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
						return this->CMeshManager::unloadAll(reloadableOnly);
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
						return this->CMeshManager::unloadAll();
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
						return this->CMeshManager::reloadAll(reloadableOnly);
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
						return this->CMeshManager::reloadAll();
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
						return this->CMeshManager::unloadUnreferencedResources(reloadableOnly);
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
						return this->CMeshManager::unloadUnreferencedResources();
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
						return this->CMeshManager::reloadUnreferencedResources(reloadableOnly);
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
						return this->CMeshManager::reloadUnreferencedResources();
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
						return this->CMeshManager::remove(r);
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
						return this->CMeshManager::remove(name);
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
						return this->CMeshManager::remove(handle);
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
						return this->CMeshManager::remove(name, groupname);
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
						return this->CMeshManager::removeAll();
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
						return this->CMeshManager::removeUnreferencedResources(reloadableOnly);
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
						return this->CMeshManager::removeUnreferencedResources();
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
						return this->CMeshManager::removeUnreferencedResource(name);
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
						return this->CMeshManager::removeUnreferencedResource(name, groupName);
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
						return this->CMeshManager::unloadUnreferencedResource(name, groupName);
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
						return this->CMeshManager::unloadUnreferencedResource(name, groupName, useCount);
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
						return this->CMeshManager::getByName(name, groupName);
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
						return this->CMeshManager::getByName(name);
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
						return this->CMeshManager::getByHandle(handle);
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
						return this->CMeshManager::resourceExists(name);
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
						return this->CMeshManager::resourceExists(handle);
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
						return this->CMeshManager::_notifyResourceTouched(res);
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
						return this->CMeshManager::_notifyResourceLoaded(res);
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
						return this->CMeshManager::_notifyResourceUnloaded(res);
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
						return this->CMeshManager::getScriptPatterns();
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
						return this->CMeshManager::parseScript(stream, groupName);
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
						return this->CMeshManager::getLoadingOrder();
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
						return this->CMeshManager::setVerbose(v);
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
						return this->CMeshManager::getVerbose();
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
						return this->CMeshManager::addImpl(res);
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
						return this->CMeshManager::removeImpl(res);
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
						return this->CMeshManager::checkUsage();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMeshManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CMeshManager& __values1 = EarthView::World::Graphic::CMeshManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CMeshManager* __values1 = EarthView::World::Graphic::CMeshManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCMeshManagerInternalResourceLoaderProxy : public EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader
			{
			 private:
				EarthView::World::Core::ev_string m_prepareResource_CResource_callback;
				EarthView::World::Core::ev_string m_loadResource_CResource_callback;
			public:
				JCMeshManagerInternalResourceLoaderProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshManagerInternalResourceLoader(pList)
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
				void register_prepareResource_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareResource_CResource_callback = __method;
				}
				void register_loadResource_CResource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadResource_CResource_callback = __method;
				}
				virtual void prepareResource(EarthView::World::Graphic::CResource* resource)
				{
					if (this->_gRef != NULL && this->m_prepareResource_CResource_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) resource;
						jmethodID __method = __gr->getMethod("prepareResource_CResource_callback");
						__env->CallVoidMethod(__obj, __method , resource_j);
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
						return this->CMeshManagerInternalResourceLoader::prepareResource(resource);
					}
				}
				virtual void loadResource(EarthView::World::Graphic::CResource* resource)
				{
					if (this->_gRef != NULL && this->m_loadResource_CResource_callback != "" && this->isCustomExtend())
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
						jlong resource_j = (jlong) resource;
						jmethodID __method = __gr->getMethod("loadResource_CResource_callback");
						__env->CallVoidMethod(__obj, __method , resource_j);
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
						return this->CMeshManagerInternalResourceLoader::loadResource(resource);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMeshManagerInternalResourceLoaderProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_prepareResource_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *pObjectX = (EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerInternalResourceLoaderProxy))
				{
					pObjectX->EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader::prepareResource(resource);
				}
				else
				{
					pObjectX->prepareResource(resource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_register_1prepareResource_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerInternalResourceLoaderProxy *pObjectX = (JCMeshManagerInternalResourceLoaderProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareResource_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareResource_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_prepareResource_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *pObjectX = (EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader::prepareResource(resource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_loadResource_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *pObjectX = (EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerInternalResourceLoaderProxy))
				{
					pObjectX->EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader::loadResource(resource);
				}
				else
				{
					pObjectX->loadResource(resource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_register_1loadResource_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerInternalResourceLoaderProxy *pObjectX = (JCMeshManagerInternalResourceLoaderProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadResource_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadResource_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_00024MeshManagerInternalResourceLoader_loadResource_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader *pObjectX = (EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader::loadResource(resource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_prepareResource_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMeshManager::prepareResource(resource);
				}
				else
				{
					pObjectX->prepareResource(resource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepareResource_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareResource_CResource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareResource_CResource_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_prepareResource_1CResource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resource_j)
			{
				EarthView::World::Graphic::CResource *resource = (EarthView::World::Graphic::CResource*) resource_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMeshManager::prepareResource(resource);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_getManualResourceLoaderPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader* __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::getManualResourceLoaderPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader* __values1 = pObjectX->getManualResourceLoaderPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getManualResourceLoaderPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getManualResourceLoaderPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getManualResourceLoaderPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_getManualResourceLoaderPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader* __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::getManualResourceLoaderPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager__1initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->_initialise();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j, jboolean indexBufferShadowed_j)
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				ev_bool indexBufferShadowed = (ev_bool) indexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, params, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j)
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, params, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, params, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j, jint vertexBufferUsage_j)
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, params, vertexBufferUsage);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual, ref_loader, params);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader, params);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j, jlong params_j)
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
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual, ref_loader, params);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual, ref_loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual, ref_loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j, jlong ref_loader_j)
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
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual, ref_loader);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createOrRetrieve_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j, jboolean isManual_j)
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
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group, isManual);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieve(name, group);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createOrRetrieve_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createOrRetrieve_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring group_j)
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
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createOrRetrieve(name, group);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j, jboolean indexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				ev_bool indexBufferShadowed = (ev_bool) indexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;IIZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j, jboolean indexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				ev_bool indexBufferShadowed = (ev_bool) indexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_Usage_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_Usage_Usage_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;IIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->prepare(filename, groupName, vertexBufferUsage, indexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1Usage_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_Usage_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_Usage_Usage_callback", "(Ljava/lang/String;Ljava/lang/String;II)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->prepare(filename, groupName, vertexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_EVString_EVString_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_EVString_EVString_Usage_callback", "(Ljava/lang/String;Ljava/lang/String;I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_prepare_1EVString_1EVString_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::prepare(filename, groupName, vertexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j, jboolean indexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				ev_bool indexBufferShadowed = (ev_bool) indexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_Usage_Usage_ev_bool_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;IIZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j, jboolean indexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				ev_bool indexBufferShadowed = (ev_bool) indexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1Usage_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_Usage_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_Usage_Usage_ev_bool_callback", "(Ljava/lang/String;Ljava/lang/String;IIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexBufferShadowed_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexBufferShadowed = (ev_bool) vertexBufferShadowed_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->load(filename, groupName, vertexBufferUsage, indexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1Usage_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_Usage_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_Usage_Usage_callback", "(Ljava/lang/String;Ljava/lang/String;II)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->load(filename, groupName, vertexBufferUsage);
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_EVString_EVString_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_EVString_EVString_Usage_callback", "(Ljava/lang/String;Ljava/lang/String;I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_load_1EVString_1EVString_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring groupName_j, jint vertexBufferUsage_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
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
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::load(filename, groupName, vertexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createManual_1EVString_1EVString_1CManualResourceLoader(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong ref_loader_j)
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
				EarthView::World::Graphic::CManualResourceLoader *ref_loader = (EarthView::World::Graphic::CManualResourceLoader*) ref_loader_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createManual(name, groupName, ref_loader);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createManual_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j)
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
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createManual(name, groupName);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j, jboolean indexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				ev_bool indexShadowBuffer = (ev_bool) indexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer, indexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jint vertexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, vertexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets, uTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals, numTexCoordSets);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j, jboolean normals_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments, normals);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j, jint ysegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments, ysegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jint xsegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height, xsegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createPlane_1EVString_1EVString_1CPlane_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createPlane(name, groupName, plane, width, height);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion_1Usage_1Usage_1ev_1bool_1ev_1bool_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j, jboolean indexShadowBuffer_j, jint ySegmentsToKeep_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				ev_bool indexShadowBuffer = (ev_bool) indexShadowBuffer_j;
				ev_int32 ySegmentsToKeep = (ev_int32) ySegmentsToKeep_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer, indexShadowBuffer, ySegmentsToKeep);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j, jboolean indexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				ev_bool indexShadowBuffer = (ev_bool) indexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer, indexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j, jint vertexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation, vertexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j, jlong orientation_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector, orientation);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j, jlong upVector_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile, upVector);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j, jdouble vTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				Real vTile = (Real) vTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile, vTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble uTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real uTile = (Real) uTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets, uTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals, numTexCoordSets);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j, jboolean normals_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments, normals);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j, jint ysegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments, ysegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j, jint xsegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature, xsegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedIllusionPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble curvature_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real curvature = (Real) curvature_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedIllusionPlane(name, groupName, plane, width, height, curvature);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j, jboolean indexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				ev_bool indexShadowBuffer = (ev_bool) indexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile, upVector, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer, indexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j, jboolean vertexShadowBuffer_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				ev_bool vertexShadowBuffer = (ev_bool) vertexShadowBuffer_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile, upVector, vertexBufferUsage, indexBufferUsage, vertexShadowBuffer);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j, jlong upVector_j, jint vertexBufferUsage_j, jint indexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage indexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) indexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile, upVector, vertexBufferUsage, indexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j, jlong upVector_j, jint vertexBufferUsage_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vertexBufferUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vertexBufferUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile, upVector, vertexBufferUsage);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j, jlong upVector_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile, upVector);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j, jdouble yTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				Real yTile = (Real) yTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile, yTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j, jdouble xTile_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				Real xTile = (Real) xTile_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets, xTile);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j, jint numTexCoordSets_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				ev_uint16 numTexCoordSets = (ev_uint16) numTexCoordSets_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals, numTexCoordSets);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j, jboolean normals_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				ev_bool normals = (ev_bool) normals_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments, normals);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j, jint ysegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				ev_int32 ysegments = (ev_int32) ysegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments, ysegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j, jint xsegments_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				ev_int32 xsegments = (ev_int32) xsegments_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow, xsegments);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j, jdouble bow_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				Real bow = (Real) bow_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height, bow);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createCurvedPlane_1EVString_1EVString_1CPlane_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong plane_j, jdouble width_j, jdouble height_j)
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
				const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->createCurvedPlane(name, groupName, plane, width, height);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1VisibleSide_1Usage_1Usage_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j, jint vbUsage_j, jint ibUsage_j, jboolean vbUseShadow_j, jboolean ibUseShadow_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vbUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) ibUsage_j;
				ev_bool vbUseShadow = (ev_bool) vbUseShadow_j;
				ev_bool ibUseShadow = (ev_bool) ibUseShadow_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage, vbUseShadow, ibUseShadow);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1VisibleSide_1Usage_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j, jint vbUsage_j, jint ibUsage_j, jboolean vbUseShadow_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vbUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) ibUsage_j;
				ev_bool vbUseShadow = (ev_bool) vbUseShadow_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage, vbUseShadow);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1VisibleSide_1Usage_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j, jint vbUsage_j, jint ibUsage_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vbUsage_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) ibUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1VisibleSide_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j, jint vbUsage_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage = (EarthView::World::Graphic::CHardwareBuffer::Usage) vbUsage_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1VisibleSide(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j, jlong uMaxSubdivisionLevel_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createBezierPatch_1EVString_1EVString_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring groupName_j, jlong controlPointBuffer_j, jlong declaration_j, jlong width_j, jlong height_j)
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
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *declaration = (EarthView::World::Graphic::CVertexDeclaration*) declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CPatchMeshPtr __values1 = pObjectX->createBezierPatch(name, groupName, controlPointBuffer, declaration, width, height);
				EarthView::World::Graphic::CPatchMeshPtr *returnvalues = new EarthView::World::Graphic::CPatchMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_setPrepareAllMeshesForShadowVolumes_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->setPrepareAllMeshesForShadowVolumes(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_MeshManager_getPrepareAllMeshesForShadowVolumes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPrepareAllMeshesForShadowVolumes();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_MeshManager_getBoundsPaddingFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				Real __values1 = pObjectX->getBoundsPaddingFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_setBoundsPaddingFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble paddingFactor_j)
			{
				Real paddingFactor = (Real) paddingFactor_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->setBoundsPaddingFactor(paddingFactor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_setListener_1CModelSerializerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CModelSerializerListener *listener = (EarthView::World::Graphic::CModelSerializerListener*) listener_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->setListener(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializerListener* __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_loadResource_1CResource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
			{
				EarthView::World::Graphic::CResource *res = (EarthView::World::Graphic::CResource*) res_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				pObjectX->loadResource(res);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong loader_j, jlong createParams_j)
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
				EarthView::World::Graphic::CManualResourceLoader *loader = (EarthView::World::Graphic::CManualResourceLoader*) loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshManagerProxy))
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createImpl(name, handle, group, isManual, loader, createParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CResource* __values1 = pObjectX->createImpl(name, handle, group, isManual, loader, createParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshManager_createImpl_1EVString_1ev_1uint64_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong handle_j, jstring group_j, jboolean isManual_j, jlong loader_j, jlong createParams_j)
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
				EarthView::World::Graphic::CManualResourceLoader *loader = (EarthView::World::Graphic::CManualResourceLoader*) loader_j;
				const EarthView::World::Core::CommonStringPairList *createParams = (const EarthView::World::Core::CommonStringPairList*) createParams_j;
				EarthView::World::Graphic::CMeshManager *pObjectX = (EarthView::World::Graphic::CMeshManager*) pObjXXXX;
				EarthView::World::Graphic::CResource* __values1 = pObjectX->EarthView::World::Graphic::CMeshManager::createImpl(name, handle, group, isManual, loader, createParams);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1create_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1create_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1create_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createUnmanaged_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createUnmanaged_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1createUnmanaged_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1setMemoryBudget_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getMemoryBudget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getMemoryUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unload_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unload_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1reloadAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1reloadAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1reloadUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1reloadUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1remove_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1remove_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1remove_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeUnreferencedResources_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeUnreferencedResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeUnreferencedResource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadUnreferencedResource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1unloadUnreferencedResource_1EVString_1EVString_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getByName_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getByHandle_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1resourceExists_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1resourceExists_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1_1notifyResourceTouched_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1_1notifyResourceLoaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1_1notifyResourceUnloaded_1CResource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1prepare_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1ev_1bool_1CManualResourceLoader(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1load_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1setVerbose_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getVerbose_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1addImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1removeImpl_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1checkUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshManagerProxy *pObjectX = (JCMeshManagerProxy*) pObjXXXX;
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
