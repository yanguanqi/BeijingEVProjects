/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmsserverinfo.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = new EarthView::World::Spatial::OGCWMSUserDefinedSymbolization();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_get_1bSupportSLD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bSupportSLD);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_set_1bSupportSLD_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				pObjectX->bSupportSLD = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_get_1bUserLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bUserLayer);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_set_1bUserLayer_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				pObjectX->bUserLayer = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_get_1bUserStyle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bUserStyle);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_set_1bUserStyle_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				pObjectX->bUserStyle = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_get_1bRemoteWFS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->bRemoteWFS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Ogcwmsuserdefinedsymbolization_set_1bRemoteWFS_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization *pObjectX = (EarthView::World::Spatial::OGCWMSUserDefinedSymbolization*)pObjXXXX;
				pObjectX->bRemoteWFS = (ev_bool)__values1_j;
			}
			class JCWMSServerInfoProxy : public EarthView::World::Spatial::CWMSServerInfo
			{
			 private:
				EarthView::World::Core::ev_string m_getCount_void_callback;
				EarthView::World::Core::ev_string m_getInfo_ev_uint32_callback;
				EarthView::World::Core::ev_string m_add_IDataMetaInfo_callback;
				EarthView::World::Core::ev_string m_remove_ev_uint32_callback;
				EarthView::World::Core::ev_string m_clear_void_callback;
			public:
				JCWMSServerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSServerInfo(pList)
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
				void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCount_void_callback = __method;
				}
				void register_getInfo_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInfo_ev_uint32_callback = __method;
				}
				void register_add_IDataMetaInfo_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_add_IDataMetaInfo_callback = __method;
				}
				void register_remove_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_ev_uint32_callback = __method;
				}
				void register_clear_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clear_void_callback = __method;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getInfo_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getInfo_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo *__values1 = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CWMSServerInfo::getInfo(index);
					}
				}
				virtual ev_uint32 add(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info)
				{
					if (this->_gRef != NULL && this->m_add_IDataMetaInfo_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong info_j = (jlong) info;
						jmethodID __method = __gr->getMethod("add_IDataMetaInfo_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , info_j);
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
						return this->CWMSServerInfo::add(info);
					}
				}
				virtual ev_uint32 getCount() const
				{
					if (this->_gRef != NULL && this->m_getCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getCount_void_callback");
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
						return this->CWMSServerInfo::getCount();
					}
				}
				virtual ev_uint32 remove(ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m_remove_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("remove_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
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
						return this->CWMSServerInfo::remove(index);
					}
				}
				virtual ev_uint32 clear()
				{
					if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("clear_void_callback");
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
						return this->CWMSServerInfo::clear();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWMSServerInfoProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSServerInfoProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWMSServerInfo::getInfo(index);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getInfo(index);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_register_1getInfo_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSServerInfoProxy *pObjectX = (JCWMSServerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInfo_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInfo_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getInfo_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWMSServerInfo::getInfo(index);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_add_1IDataMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *info = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) info_j;
				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMSServerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSServerInfo::add(info);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->add(info);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_register_1add_1IDataMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSServerInfoProxy *pObjectX = (JCWMSServerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_add_IDataMetaInfo_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"add_IDataMetaInfo_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_add_1IDataMetaInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *info = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) info_j;
				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMSServerInfo::add(info);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getUpdateSequence_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUpdateSequence();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getDescribeLayerFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getDescribeLayerFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getDescribeLayerFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDescribeLayerFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getCapabilitiesFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCapabilitiesFormat();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getUserDefinedSymbolizationRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EarthView::World::Spatial::OGCWMSUserDefinedSymbolization* __values1 = pObjectX->getUserDefinedSymbolizationRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getInfoFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getInfoFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getImageMaxWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const ev_uint32 __values1 = pObjectX->getImageMaxWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getImageMaxHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const ev_uint32 __values1 = pObjectX->getImageMaxHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getInfoFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EVString __values1 = pObjectX->getInfoFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getLayerInfoRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* __values1 = pObjectX->getLayerInfoRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_getLayerInfoRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layername_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layername_ch = (const ev_char*)__env->GetStringUTFChars(layername_j,JNI_FALSE);
				EVString layername = layername_ch;
				__env->ReleaseStringUTFChars(layername_j, (const char *)layername_ch);
				#else
				const ev_wchar* layername_ch = (const ev_wchar*)__env->GetStringChars(layername_j,JNI_FALSE);
				EVString layername = layername_ch;
				__env->ReleaseStringChars(layername_j, (const jchar *)layername_ch);
				#endif
				const 				EarthView::World::Spatial::CWMSServerInfo *pObjectX = (EarthView::World::Spatial::CWMSServerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* __values1 = pObjectX->getLayerInfoRef(layername);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSServerInfoProxy *pObjectX = (JCWMSServerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_register_1remove_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSServerInfoProxy *pObjectX = (JCWMSServerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmsserverinfo_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMSServerInfoProxy *pObjectX = (JCWMSServerInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clear_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
