/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtsserverinfo.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EVString& __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getTitleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getTitleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getTitle_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EVString __values1 = pObjectX->getTitle(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getKeywordCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeywordCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getKeyword_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EVString __values1 = pObjectX->getKeyword(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getAbstractCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAbstractCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getAbstract_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EVString __values1 = pObjectX->getAbstract(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getSubThemeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSubThemeCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getSubThemeRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMTSTheme* __values1 = pObjectX->getSubThemeRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getRefLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRefLayerCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_getRefLayerName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				const EVString __values1 = pObjectX->getRefLayerName(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtstheme_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMTSTheme *pObjectX = (EarthView::World::Spatial::COGCWMTSTheme*) pObjXXXX;
				EarthView::World::Spatial::COGCWMTSTheme* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsthemes_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMTSThemes *pObjectX = (EarthView::World::Spatial::COGCWMTSThemes*) pObjXXXX;
				EarthView::World::Spatial::COGCWMTSThemes* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsthemes_getThemeRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::COGCWMTSThemes *pObjectX = (EarthView::World::Spatial::COGCWMTSThemes*) pObjXXXX;
				const EarthView::World::Spatial::COGCWMTSTheme* __values1 = pObjectX->getThemeRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Ogcwmtsthemes_getThemeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::COGCWMTSThemes *pObjectX = (EarthView::World::Spatial::COGCWMTSThemes*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getThemeCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCWMTSServerInfoProxy : public EarthView::World::Spatial::CWMTSServerInfo
			{
			 private:
				EarthView::World::Core::ev_string m_getCount_void_callback;
				EarthView::World::Core::ev_string m_getInfo_ev_uint32_callback;
				EarthView::World::Core::ev_string m_add_IDataMetaInfo_callback;
				EarthView::World::Core::ev_string m_remove_ev_uint32_callback;
				EarthView::World::Core::ev_string m_clear_void_callback;
			public:
				JCWMTSServerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSServerInfo(pList)
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
						return this->CWMTSServerInfo::getInfo(index);
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
						return this->CWMTSServerInfo::add(info);
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
						return this->CWMTSServerInfo::getCount();
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
						return this->CWMTSServerInfo::remove(index);
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
						return this->CWMTSServerInfo::clear();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWMTSServerInfoProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getInfo_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSServerInfoProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWMTSServerInfo::getInfo(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_register_1getInfo_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSServerInfoProxy *pObjectX = (JCWMTSServerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getInfo_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CWMTSServerInfo::getInfo(index);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_add_1IDataMetaInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *info = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) info_j;
				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWMTSServerInfoProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSServerInfo::add(info);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_register_1add_1IDataMetaInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSServerInfoProxy *pObjectX = (JCWMTSServerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_add_1IDataMetaInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo *info = (const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) info_j;
				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWMTSServerInfo::add(info);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getUpdateSequence_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUpdateSequence();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getThemeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getThemeCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getThemeRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				EarthView::World::Spatial::COGCWMTSTheme* __values1 = pObjectX->getThemeRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getLayerInfoRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* __values1 = pObjectX->getLayerInfoRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_getLayerInfoRef_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layername_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layername_ch = (const ev_char*)__env->GetStringUTFChars(layername_j,JNI_FALSE);
				const EVString layername = layername_ch;
				__env->ReleaseStringUTFChars(layername_j, (const char *)layername_ch);
				#else
				const ev_wchar* layername_ch = (const ev_wchar*)__env->GetStringChars(layername_j,JNI_FALSE);
				const EVString layername = layername_ch;
				__env->ReleaseStringChars(layername_j, (const jchar *)layername_ch);
				#endif
				const 				EarthView::World::Spatial::CWMTSServerInfo *pObjectX = (EarthView::World::Spatial::CWMTSServerInfo*) pObjXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* __values1 = pObjectX->getLayerInfoRef(layername);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSServerInfoProxy *pObjectX = (JCWMTSServerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_register_1remove_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSServerInfoProxy *pObjectX = (JCWMTSServerInfoProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wmtsserverinfo_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWMTSServerInfoProxy *pObjectX = (JCWMTSServerInfoProxy*) pObjXXXX;
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
