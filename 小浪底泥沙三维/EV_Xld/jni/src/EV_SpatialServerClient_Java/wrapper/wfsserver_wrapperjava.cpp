/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfsserver.h"
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getMaxFeatures_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMaxFeatures();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_setMaxFeatures_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxFeatures_j)
			{
				ev_int32 maxFeatures = (ev_int32) maxFeatures_j;
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				pObjectX->setMaxFeatures(maxFeatures);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getRequestVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				EVString __values1 = pObjectX->getRequestVersion();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_setRequestVersion_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring version_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* version_ch = (const ev_char*)__env->GetStringUTFChars(version_j,JNI_FALSE);
				EVString version = version_ch;
				__env->ReleaseStringUTFChars(version_j, (const char *)version_ch);
				#else
				const ev_wchar* version_ch = (const ev_wchar*)__env->GetStringChars(version_j,JNI_FALSE);
				EVString version = version_ch;
				__env->ReleaseStringChars(version_j, (const jchar *)version_ch);
				#endif
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				pObjectX->setRequestVersion(version);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getRequestFilter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				EVString __values1 = pObjectX->getRequestFilter();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_setUsingRect_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				ev_bool b = (ev_bool) b_j;
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				pObjectX->setUsingRect(b);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getUsingRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUsingRect();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getRequestRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getRequestRect();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_setRequestFilter_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filter_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filter_ch = (const ev_char*)__env->GetStringUTFChars(filter_j,JNI_FALSE);
				EVString filter = filter_ch;
				__env->ReleaseStringUTFChars(filter_j, (const char *)filter_ch);
				#else
				const ev_wchar* filter_ch = (const ev_wchar*)__env->GetStringChars(filter_j,JNI_FALSE);
				EVString filter = filter_ch;
				__env->ReleaseStringChars(filter_j, (const jchar *)filter_ch);
				#endif
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				pObjectX->setRequestFilter(filter);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_getStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				EarthView::World::Core::CStringInterface* __values1 = pObjectX->getStringInterfacePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_isEqual_1CWFSLayerRequestParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Spatial::CWFSLayerRequestParam *other = (EarthView::World::Spatial::CWFSLayerRequestParam*) other_j;
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEqual(other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
			{
				EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				pObjectX->fromXmlElement(element);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSLayerRequestParam *pObjectX = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfslayerrequestparam_OperatorAssign_1CWFSLayerRequestParam(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam& pObjectX = *(EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX;
				const EarthView::World::Spatial::CWFSLayerRequestParam &other = *(EarthView::World::Spatial::CWFSLayerRequestParam*) other_j;
				pObjectX = other;
				EarthView::World::Spatial::CWFSLayerRequestParam& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCWFSServerProxy : public EarthView::World::Spatial::CWFSServer
			{
			 private:
				EarthView::World::Core::ev_string m_getServerName_void_callback;
				EarthView::World::Core::ev_string m_getServerAbstract_void_callback;
				EarthView::World::Core::ev_string m_getServerTitle_void_callback;
				EarthView::World::Core::ev_string m_getServerUrl_void_callback;
				EarthView::World::Core::ev_string m_isConnected_void_callback;
				EarthView::World::Core::ev_string m_reconnect_void_callback;
				EarthView::World::Core::ev_string m_disConnect_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getPropertySet_void_callback;
				EarthView::World::Core::ev_string m_isValid_void_callback;
				EarthView::World::Core::ev_string m_getDatasetInfo_EVString_callback;
				EarthView::World::Core::ev_string m_getDatasetInfos_EVDatasetType_callback;
				EarthView::World::Core::ev_string m_createFeatureClass_EVString_IGeometryField_IFields_callback;
				EarthView::World::Core::ev_string m_openDataset_EVString_callback;
				EarthView::World::Core::ev_string m_deleteDataset_EVString_callback;
				EarthView::World::Core::ev_string m_closeDataset_IDataset_callback;
				EarthView::World::Core::ev_string m_toXML_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCWFSServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSServer(pList)
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
				void register_getServerName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerName_void_callback = __method;
				}
				void register_getServerAbstract_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerAbstract_void_callback = __method;
				}
				void register_getServerTitle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerTitle_void_callback = __method;
				}
				void register_getServerUrl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerUrl_void_callback = __method;
				}
				void register_isConnected_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isConnected_void_callback = __method;
				}
				void register_reconnect_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reconnect_void_callback = __method;
				}
				void register_disConnect_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_disConnect_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_getPropertySet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPropertySet_void_callback = __method;
				}
				void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isValid_void_callback = __method;
				}
				void register_getDatasetInfo_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetInfo_EVString_callback = __method;
				}
				void register_getDatasetInfos_EVDatasetType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetInfos_EVDatasetType_callback = __method;
				}
				void register_createFeatureClass_EVString_IGeometryField_IFields_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFeatureClass_EVString_IGeometryField_IFields_callback = __method;
				}
				void register_openDataset_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataset_EVString_callback = __method;
				}
				void register_deleteDataset_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteDataset_EVString_callback = __method;
				}
				void register_closeDataset_IDataset_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_closeDataset_IDataset_callback = __method;
				}
				void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toXML_void_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if (this->_gRef != NULL && this->m_getPropertySet_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPropertySet_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IPropertySet *__values1 = (EarthView::World::Spatial::GeoDataset::IPropertySet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSServer::getPropertySet();
					}
				}
				virtual ev_bool isValid() const
				{
					if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isValid_void_callback");
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
						return this->CWFSServer::isValid();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getDatasetInfo_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getDatasetInfo_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
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
						return this->CWFSServer::getDatasetInfo(name);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if (this->_gRef != NULL && this->m_getDatasetInfos_EVDatasetType_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getDatasetInfos_EVDatasetType_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos *__values1 = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CWFSServer::getDatasetInfos(type);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
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
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CWFSServer::clone();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_openDataset_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("openDataset_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSServer::openDataset(name);
					}
				}
				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
				{
					if (this->_gRef != NULL && this->m_closeDataset_IDataset_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("closeDataset_IDataset_callback");
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
						return this->CWFSServer::closeDataset(pDataset);
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
						return this->CWFSServer::toXML();
					}
				}
				virtual const EVString getServerName() const
				{
					if (this->_gRef != NULL && this->m_getServerName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getServerName_void_callback");
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
						return this->CWFSServer::getServerName();
					}
				}
				virtual const EVString getServerAbstract() const
				{
					if (this->_gRef != NULL && this->m_getServerAbstract_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getServerAbstract_void_callback");
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
						return this->CWFSServer::getServerAbstract();
					}
				}
				virtual const EVString getServerTitle() const
				{
					if (this->_gRef != NULL && this->m_getServerTitle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getServerTitle_void_callback");
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
						return this->CWFSServer::getServerTitle();
					}
				}
				virtual const EVString getServerUrl() const
				{
					if (this->_gRef != NULL && this->m_getServerUrl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getServerUrl_void_callback");
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
						return this->CWFSServer::getServerUrl();
					}
				}
				virtual ev_bool isConnected()
				{
					if (this->_gRef != NULL && this->m_isConnected_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isConnected_void_callback");
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
						return this->CWFSServer::isConnected();
					}
				}
				virtual ev_bool reconnect()
				{
					if (this->_gRef != NULL && this->m_reconnect_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("reconnect_void_callback");
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
						return this->CWFSServer::reconnect();
					}
				}
				virtual void disConnect()
				{
					if (this->_gRef != NULL && this->m_disConnect_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("disConnect_void_callback");
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
						return this->CWFSServer::disConnect();
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSServer::getType();
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
						return this->CWFSServer::getName();
					}
				}
				virtual ev_bool deleteDataset(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_deleteDataset_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("deleteDataset_EVString_callback");
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
						return this->CWFSServer::deleteDataset(name);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString& name, EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if (this->_gRef != NULL && this->m_createFeatureClass_EVString_IGeometryField_IFields_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jlong geofield_j = (jlong) &geofield;
						jlong fields_j = (jlong) &fields;
						jmethodID __method = __gr->getMethod("createFeatureClass_EVString_IGeometryField_IFields_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, geofield_j, fields_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IFeatureClass *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CWFSServer::createFeatureClass(name, geofield, fields);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWFSServerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getServerInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				const EarthView::World::Spatial::CWFSServerInfo* __values1 = pObjectX->getServerInfo();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getPropertySet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getPropertySet();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->getPropertySet();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getPropertySet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPropertySet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPropertySet_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getPropertySet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getPropertySet();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfsserver_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isValid_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfsserver_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getDatasetInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getDatasetInfo(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getDatasetInfo(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getDatasetInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetInfo_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetInfo_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getDatasetInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getDatasetInfo(name);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getDatasetInfos_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getDatasetInfos_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetInfos_EVDatasetType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetInfos_EVDatasetType_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getDatasetInfos_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::getDatasetInfos(type);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_openDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1openDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataset_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataset_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_openDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::openDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfsserver_closeDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::closeDataset(pDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->closeDataset(pDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1closeDataset_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_closeDataset_IDataset_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"closeDataset_IDataset_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Wfsserver_closeDataset_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::closeDataset(pDataset);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLayerCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getLayerInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* __values1 = pObjectX->getLayerInfo(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfsserver_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSServerProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::toXML();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfsserver_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::CWFSServer::toXML();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getLayerRequestParam_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::CWFSLayerRequestParam* __values1 = pObjectX->getLayerRequestParam(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsserver_getLayerRequestParam_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial::CWFSServer *pObjectX = (EarthView::World::Spatial::CWFSServer*) pObjXXXX;
				EarthView::World::Spatial::CWFSLayerRequestParam* __values1 = pObjectX->getLayerRequestParam(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getServerName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getServerAbstract_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerAbstract_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerAbstract_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getServerTitle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerTitle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerTitle_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getServerUrl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerUrl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerUrl_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1isConnected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isConnected_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isConnected_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1reconnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reconnect_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reconnect_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1disConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_disConnect_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"disConnect_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1createFeatureClass_1EVString_1IGeometryField_1IFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFeatureClass_EVString_IGeometryField_IFields_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFeatureClass_EVString_IGeometryField_IFields_callback", "(Ljava/lang/String;JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsserver_register_1deleteDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSServerProxy *pObjectX = (JCWFSServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteDataset_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteDataset_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
