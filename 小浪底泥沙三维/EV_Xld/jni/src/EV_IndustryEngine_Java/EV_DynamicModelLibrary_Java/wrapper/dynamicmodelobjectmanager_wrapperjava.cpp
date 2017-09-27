/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicmodelobjectmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class JCDynamicModelObjectManagerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager
			{
			 private:
				EarthView::World::Core::ev_string m_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback;
				EarthView::World::Core::ev_string m_getGlobeNodeTrackAltitudeMode_EVString_callback;
				EarthView::World::Core::ev_string m_removeAllTrackTrailPoint_EVString_callback;
				EarthView::World::Core::ev_string m_addTrackTrailPoint_EVString_CCoordinate_callback;
				EarthView::World::Core::ev_string m_refreshTrackTrail_void_callback;
				EarthView::World::Core::ev_string m_setNeedUpdate_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedUpdate_void_callback;
			public:
				JCDynamicModelObjectManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObjectManager(pList)
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
				void register_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback = __method;
				}
				void register_getGlobeNodeTrackAltitudeMode_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGlobeNodeTrackAltitudeMode_EVString_callback = __method;
				}
				void register_removeAllTrackTrailPoint_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllTrackTrailPoint_EVString_callback = __method;
				}
				void register_addTrackTrailPoint_EVString_CCoordinate_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addTrackTrailPoint_EVString_CCoordinate_callback = __method;
				}
				void register_refreshTrackTrail_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_refreshTrackTrail_void_callback = __method;
				}
				void register_setNeedUpdate_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedUpdate_ev_bool_callback = __method;
				}
				void register_getNeedUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedUpdate_void_callback = __method;
				}
				virtual void setGlobeNodeTrackAltitudeMode(const EVString& name, EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if (this->_gRef != NULL && this->m_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback != "" && this->isCustomExtend())
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
						jint altitudeMode_j = (jint) altitudeMode;
						jmethodID __method = __gr->getMethod("setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback");
						__env->CallVoidMethod(__obj, __method , name_j, altitudeMode_j);
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
						return this->CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name, altitudeMode);
					}
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getGlobeNodeTrackAltitudeMode_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGlobeNodeTrackAltitudeMode_EVString_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name);
					}
				}
				virtual void removeAllTrackTrailPoint(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAllTrackTrailPoint_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllTrackTrailPoint_EVString_callback");
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
						return this->CDynamicModelObjectManager::removeAllTrackTrailPoint(name);
					}
				}
				virtual void addTrackTrailPoint(const EVString& name, const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if (this->_gRef != NULL && this->m_addTrackTrailPoint_EVString_CCoordinate_callback != "" && this->isCustomExtend())
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
						jlong point_j = (jlong) &point;
						jmethodID __method = __gr->getMethod("addTrackTrailPoint_EVString_CCoordinate_callback");
						__env->CallVoidMethod(__obj, __method , name_j, point_j);
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
						return this->CDynamicModelObjectManager::addTrackTrailPoint(name, point);
					}
				}
				virtual void refreshTrackTrail()
				{
					if (this->_gRef != NULL && this->m_refreshTrackTrail_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("refreshTrackTrail_void_callback");
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
						return this->CDynamicModelObjectManager::refreshTrackTrail();
					}
				}
				virtual void setNeedUpdate(const ev_bool& needUpdate)
				{
					if (this->_gRef != NULL && this->m_setNeedUpdate_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean needUpdate_j = (jboolean) needUpdate;
						jmethodID __method = __gr->getMethod("setNeedUpdate_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , needUpdate_j);
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
						return this->CDynamicModelObjectManager::setNeedUpdate(needUpdate);
					}
				}
				virtual ev_bool getNeedUpdate() const
				{
					if (this->_gRef != NULL && this->m_getNeedUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNeedUpdate_void_callback");
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
						return this->CDynamicModelObjectManager::getNeedUpdate();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDynamicModelObjectManagerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_push_1EVString_1CDynamicModelObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *&val = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject**) val_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap& pObjectX = *(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIteratorPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIteratorPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIteratorPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIteratorPair_set_1second_1CDynamicModelObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair*)pObjXXXX;
				pObjectX->second = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_00024DynamicModelObjectIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1EVString_1ModelType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jstring meshName_j, jint modelType_j, jboolean immediateRefresh_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
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
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshName, modelType, immediateRefresh);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1EVString_1ModelType_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jstring meshName_j, jint modelType_j, jboolean immediateRefresh_j, jboolean onLineModeEnable_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
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
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				ev_bool onLineModeEnable = (ev_bool) onLineModeEnable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshName, modelType, immediateRefresh, onLineModeEnable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1EVString_1ModelType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jstring meshName_j, jint modelType_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
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
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshName, modelType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1ev_1uint32_1ModelType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jlong meshIndex_j, jint modelType_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_uint32 meshIndex = (const ev_uint32) meshIndex_j;
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshIndex, modelType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1ev_1uint32_1ModelType_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jlong meshIndex_j, jint modelType_j, jboolean immediateRefresh_j, jboolean onLineModeEnable_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_uint32 meshIndex = (const ev_uint32) meshIndex_j;
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				ev_bool onLineModeEnable = (ev_bool) onLineModeEnable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshIndex, modelType, immediateRefresh, onLineModeEnable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelObject_1IDataSource_1EVString_1ev_1uint32_1ModelType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelDataSource_j, jstring name_j, jlong meshIndex_j, jint modelType_j, jboolean immediateRefresh_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataSource *ref_modelDataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_modelDataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_uint32 meshIndex = (const ev_uint32) meshIndex_j;
				EarthView::World::Spatial3D::ModelType modelType = (EarthView::World::Spatial3D::ModelType) modelType_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addDynamicModelObject(ref_modelDataSource, name, meshIndex, modelType, immediateRefresh);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addSubEntityDynamicModelObject_1CDynamicModelObject_1EVString_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelObject_j, jstring name_j, jlong subEntityIndex_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *ref_modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) ref_modelObject_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Core::IntVector subEntityIndex = *(EarthView::World::Core::IntVector*) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addSubEntityDynamicModelObject(ref_modelObject, name, subEntityIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addSubEntityDynamicModelObject_1CDynamicModelObject_1EVString_1IntVector_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelObject_j, jstring name_j, jlong subEntityIndex_j, jboolean immediateRefresh_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *ref_modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) ref_modelObject_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Core::IntVector subEntityIndex = *(EarthView::World::Core::IntVector*) subEntityIndex_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addSubEntityDynamicModelObject(ref_modelObject, name, subEntityIndex, immediateRefresh);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addSubEntityDynamicModelObject_1CDynamicModelObject_1EVString_1IntVector_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_modelObject_j, jstring name_j, jlong subEntityIndex_j, jboolean immediateRefresh_j, jboolean onLineModeEnable_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *ref_modelObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) ref_modelObject_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Core::IntVector subEntityIndex = *(EarthView::World::Core::IntVector*) subEntityIndex_j;
				ev_bool immediateRefresh = (ev_bool) immediateRefresh_j;
				ev_bool onLineModeEnable = (ev_bool) onLineModeEnable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->addSubEntityDynamicModelObject(ref_modelObject, name, subEntityIndex, immediateRefresh, onLineModeEnable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeDynamicModelObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeDynamicModelObject(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicModelObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* __values1 = pObjectX->getDynamicModelObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_existDynamicModelObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->existDynamicModelObject(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setDynamicModelObjectEnabledToGetHeading_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isEnable_j)
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
				const ev_bool isEnable = (const ev_bool) isEnable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setDynamicModelObjectEnabledToGetHeading(name, isEnable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicModelObjectEnabledToGetHeading_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDynamicModelObjectEnabledToGetHeading(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setDynamicModelManagerListener_1CDynamicModelManagerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener *ref_listener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener*) ref_listener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setDynamicModelManagerListener(ref_listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeDynamicModelManagerListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->removeDynamicModelManagerListener();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelGlobeTrackPoints_1EVString_1CGlobeControlPointSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong controlPoints_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet &controlPoints = *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) controlPoints_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addDynamicModelGlobeTrackPoints(name, controlPoints);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelGlobeNodeTrackPoints_1EVString_1CGlobeControlPointMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong controlPoints_j)
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
				EarthView::World::Spatial3D::CGlobeControlPointMap &controlPoints = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) controlPoints_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addDynamicModelGlobeNodeTrackPoints(name, controlPoints);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_clearAllDynamicModelGlobeNodeTrackPoints_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->clearAllDynamicModelGlobeNodeTrackPoints(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelCameraTrackPoints_1EVString_1CCameraAnimationParamSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong cameraanimations_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet &cameraanimations = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) cameraanimations_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addDynamicModelCameraTrackPoints(name, cameraanimations);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelGlobeTrackPoint_1EVString_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong controlPoint_j)
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
				EarthView::World::Spatial3D::CGlobeControlPoint controlPoint = *(EarthView::World::Spatial3D::CGlobeControlPoint*) controlPoint_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addDynamicModelGlobeTrackPoint(name, controlPoint);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addDynamicModelCameraTrackPoints_1EVString_1CCameraAnimationParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong cameraanimation_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam cameraanimation = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) cameraanimation_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addDynamicModelCameraTrackPoints(name, cameraanimation);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_clearAllDynamicModelCameraNodeTrackPoints_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->clearAllDynamicModelCameraNodeTrackPoints(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setTrackTrailVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setTrackTrailVisible(name, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getTrackTrailVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTrackTrailVisible(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setTrackTrailDisplayPointNum_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint number_j)
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
				const ev_int32 number = (const ev_int32) number_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setTrackTrailDisplayPointNum(name, number);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getTrackTrailDisplayPointNum_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTrackTrailDisplayPointNum(name);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setTrackTrailSymbol_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong trackTrailSymbol_j)
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
				EarthView::World::Spatial::Display::ISymbol *trackTrailSymbol = (EarthView::World::Spatial::Display::ISymbol*) trackTrailSymbol_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setTrackTrailSymbol(name, trackTrailSymbol);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setIsTrackTrailHighLine_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isHighLine_j)
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
				const ev_bool isHighLine = (const ev_bool) isHighLine_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setIsTrackTrailHighLine(name, isHighLine);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getIsTrackTrailHighLine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsTrackTrailHighLine(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setHighLineColorInfo_1EVString_1CRgbColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong staticHighLineColor_j, jlong dynamicHighLineColor_j)
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
				EarthView::World::Spatial::Display::CRgbColor *staticHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) staticHighLineColor_j;
				EarthView::World::Spatial::Display::CRgbColor *dynamicHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) dynamicHighLineColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setHighLineColorInfo(name, staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setHighLineDistance_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble highLineDistance_j)
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
				const ev_real64 highLineDistance = (const ev_real64) highLineDistance_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setHighLineDistance(name, highLineDistance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getHighLineDistance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				Real __values1 = pObjectX->getHighLineDistance(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getTrackTrailSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getTrackTrailSymbol(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setTrackTrailSpatialReference_1EVString_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong ref_sr_j)
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
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setTrackTrailSpatialReference(name, ref_sr);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getTrackTrailSpatialReference_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getTrackTrailSpatialReference(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setTrackTrailDisplayMode_1EVString_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint displayMode_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setTrackTrailDisplayMode(name, displayMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getTrackTrailDisplayMode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->getTrackTrailDisplayMode(name);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonVisible(name, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getScutcheonVisible(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonTextColor_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jlong textColor_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &textColor = *(EarthView::World::Graphic::CColourValue*) textColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonTextColor(modelName, textColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonTextColor_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getScutcheonTextColor(modelName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonCaption_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jstring caption_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
				const EVString caption = caption_ch;
				__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
				#else
				const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
				const EVString caption = caption_ch;
				__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonCaption(modelName, caption);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonCaption_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EVString __values1 = pObjectX->getScutcheonCaption(modelName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonFontSize_1EVString_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jshort size_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				ev_byte size = (ev_byte) size_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonFontSize(modelName, size);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonFontSize_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_byte __values1 = pObjectX->getScutcheonFontSize(modelName);
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonFontName_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jstring fontName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
				EVString fontName = fontName_ch;
				__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
				#else
				const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
				EVString fontName = fontName_ch;
				__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonFontName(modelName, fontName);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EVString __values1 = pObjectX->getScutcheonFontName(modelName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonLineColor_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getScutcheonLineColor(modelName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonLineColor_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jlong lineColor_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &lineColor = *(EarthView::World::Graphic::CColourValue*) lineColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonLineColor(modelName, lineColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonFrameColor_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getScutcheonFrameColor(modelName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonFrameColor_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jlong frameColor_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &frameColor = *(EarthView::World::Graphic::CColourValue*) frameColor_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonFrameColor(modelName, frameColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getScutcheonLineLength_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getScutcheonLineLength(modelName);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonLineLength_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jlong lineLength_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &lineLength = *(EarthView::World::Spatial::Math::CVector3*) lineLength_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonLineLength(modelName, lineLength);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setScutcheonTextureMatName_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelName_j, jstring matName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelName_ch = (const ev_char*)__env->GetStringUTFChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringUTFChars(modelName_j, (const char *)modelName_ch);
				#else
				const ev_wchar* modelName_ch = (const ev_wchar*)__env->GetStringChars(modelName_j,JNI_FALSE);
				const EVString modelName = modelName_ch;
				__env->ReleaseStringChars(modelName_j, (const jchar *)modelName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
				#else
				const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setScutcheonTextureMatName(modelName, matName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setParticleVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setParticleVisible(name, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getParticleVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getParticleVisible(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setRibbonTrailVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setRibbonTrailVisible(name, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getRibbonTrailVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRibbonTrailVisible(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSceneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getSceneNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_lockGlobeNodeTrackModelObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->lockGlobeNodeTrackModelObject(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_unlockGlobeNodeTrackModelObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->unlockGlobeNodeTrackModelObject();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setLockDistance_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble distance_j)
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
				const ev_real64 distance = (const ev_real64) distance_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setLockDistance(name, distance);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getLockDistance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLockDistance(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setLockTilt_1EVString_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong tilt_j)
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
				const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setLockTilt(name, tilt);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getLockTilt_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getLockTilt(name);
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setIsLockDistance_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean locked_j)
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
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setIsLockDistance(name, locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getIsLockDistance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockDistance(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setIsLockTilt_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean locked_j)
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
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setIsLockTilt(name, locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getIsLockTilt_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockTilt(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setIsLockHeading_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean locked_j)
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
				const ev_bool locked = (const ev_bool) locked_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setIsLockHeading(name, locked);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getIsLockHeading_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsLockHeading(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getLockedGlobeNodeTrackModelObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* __values1 = pObjectX->getLockedGlobeNodeTrackModelObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getCameraNodeTrackModelObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* __values1 = pObjectX->getCameraNodeTrackModelObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setCameraNodeTrackLocalCenter_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong localCenter_j)
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
				const EarthView::World::Spatial::Math::CVector3 &localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setCameraNodeTrackLocalCenter(name, localCenter);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getCameraNodeTrackLocalCenter_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCameraNodeTrackLocalCenter(name);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setLodStrategy_1CDynamicLodStrategy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_lodStrategy_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy *ref_lodStrategy = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy*) ref_lodStrategy_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setLodStrategy(ref_lodStrategy);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getLodStrategy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* __values1 = pObjectX->getLodStrategy();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setLodStrategyEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setLodStrategyEnable(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getLodStrategyEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLodStrategyEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setDynamicModelObjectVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean visible_j)
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
				const ev_bool visible = (ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setDynamicModelObjectVisible(name, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicModelObjectVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDynamicModelObjectVisible(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityVisible_1EVString_1IntVector_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong subEntityVector_j, jboolean visible_j)
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
				const EarthView::World::Core::IntVector &subEntityVector = *(EarthView::World::Core::IntVector*) subEntityVector_j;
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityVisible(name, subEntityVector, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityVisible_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSubEntityVisible(name, subEntityIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityAllParticleVisible_1EVString_1IntVector_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong subEnetityVector_j, jboolean visible_j)
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
				const EarthView::World::Core::IntVector &subEnetityVector = *(EarthView::World::Core::IntVector*) subEnetityVector_j;
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityAllParticleVisible(name, subEnetityVector, visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_1EVString_1IntVector_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong subEnetityVector_j, jboolean visible_j)
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
				const EarthView::World::Core::IntVector &subEnetityVector = *(EarthView::World::Core::IntVector*) subEnetityVector_j;
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityAllRibbonTrailVisible(name, subEnetityVector, visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityParticleVisible_1EVString_1ev_1int32_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j, jstring particleAliasName_j, jboolean visible_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityParticleVisible(name, subEntityIndex, particleAliasName, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityParticleVisible_1EVString_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j, jstring particleAliasName_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* particleAliasName_ch = (const ev_char*)__env->GetStringUTFChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringUTFChars(particleAliasName_j, (const char *)particleAliasName_ch);
				#else
				const ev_wchar* particleAliasName_ch = (const ev_wchar*)__env->GetStringChars(particleAliasName_j,JNI_FALSE);
				const EVString particleAliasName = particleAliasName_ch;
				__env->ReleaseStringChars(particleAliasName_j, (const jchar *)particleAliasName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSubEntityParticleVisible(name, subEntityIndex, particleAliasName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityAllRibbonTrailVisible_1EVString_1ev_1int32_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j, jstring ribbonTrailName_j, jboolean visible_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonTrailName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringUTFChars(ribbonTrailName_j, (const char *)ribbonTrailName_ch);
				#else
				const ev_wchar* ribbonTrailName_ch = (const ev_wchar*)__env->GetStringChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringChars(ribbonTrailName_j, (const jchar *)ribbonTrailName_ch);
				#endif
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityAllRibbonTrailVisible(name, subEntityIndex, ribbonTrailName, visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setSubEntityRibbonTrailVisible_1EVString_1ev_1int32_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j, jstring ribbonTrailName_j, jboolean visible_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonTrailName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringUTFChars(ribbonTrailName_j, (const char *)ribbonTrailName_ch);
				#else
				const ev_wchar* ribbonTrailName_ch = (const ev_wchar*)__env->GetStringChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringChars(ribbonTrailName_j, (const jchar *)ribbonTrailName_ch);
				#endif
				const ev_bool visible = (const ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setSubEntityRibbonTrailVisible(name, subEntityIndex, ribbonTrailName, visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityRibbonTrailVisible_1EVString_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j, jstring ribbonTrailName_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ribbonTrailName_ch = (const ev_char*)__env->GetStringUTFChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringUTFChars(ribbonTrailName_j, (const char *)ribbonTrailName_ch);
				#else
				const ev_wchar* ribbonTrailName_ch = (const ev_wchar*)__env->GetStringChars(ribbonTrailName_j,JNI_FALSE);
				const EVString ribbonTrailName = ribbonTrailName_ch;
				__env->ReleaseStringChars(ribbonTrailName_j, (const jchar *)ribbonTrailName_ch);
				#endif
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSubEntityRibbonTrailVisible(name, subEntityIndex, ribbonTrailName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityBindedRibbonTrailObjectMap_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = pObjectX->getSubEntityBindedRibbonTrailObjectMap(name, subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityBindedParticleObjectMap_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint subEntityIndex_j)
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
				const ev_int32 subEntityIndex = (const ev_int32) subEntityIndex_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = pObjectX->getSubEntityBindedParticleObjectMap(name, subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *returnvalues = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getSubEntityCount_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getSubEntityCount(name);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getBindedParticleSubEntityIndexVector_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getBindedParticleSubEntityIndexVector(name);
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setGlobeNodeTrackCurrentFrameTime_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble curKeyFrameTime_j)
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
				const ev_real64 curKeyFrameTime = (const ev_real64) curKeyFrameTime_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setGlobeNodeTrackCurrentFrameTime(name, curKeyFrameTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getGlobeNodeTrackCurrentFrameTime_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getGlobeNodeTrackCurrentFrameTime(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setCameraNodeTrackCurrentFrameTime_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble curKeyFrameTime_j)
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
				const ev_real64 curKeyFrameTime = (const ev_real64) curKeyFrameTime_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setCameraNodeTrackCurrentFrameTime(name, curKeyFrameTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getCameraNodeTrackCurrentFrameTime_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getCameraNodeTrackCurrentFrameTime(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_startAllGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->startAllGlobeNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_stopAllGlobeNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->stopAllGlobeNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_startGlobeNodeTrack_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->startGlobeNodeTrack(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_stopGlobeNodeTrack_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->stopGlobeNodeTrack(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_pauseGlobeNodeTrack_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->pauseGlobeNodeTrack(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_continueGlobeNodeTrack_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->continueGlobeNodeTrack(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_startCameraNodeTrack_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->startCameraNodeTrack(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_stopCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->stopCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_pauseCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->pauseCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_continueCameraNodeTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->continueCameraNodeTrack();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setGlobeNodeTrackIsLoop_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean loop_j)
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
				const ev_bool loop = (const ev_bool) loop_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setGlobeNodeTrackIsLoop(name, loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getGlobeNodeTrackIsLoop_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getGlobeNodeTrackIsLoop(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_1EVString_1AltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint altitudeMode_j)
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
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name, altitudeMode);
				}
				else
				{
					pObjectX->setGlobeNodeTrackAltitudeMode(name, altitudeMode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1setGlobeNodeTrackAltitudeMode_1EVString_1AltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGlobeNodeTrackAltitudeMode_EVString_AltitudeMode_callback", "(Ljava/lang/String;I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setGlobeNodeTrackAltitudeMode_1EVString_1AltitudeMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint altitudeMode_j)
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
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode) altitudeMode_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setGlobeNodeTrackAltitudeMode(name, altitudeMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->getGlobeNodeTrackAltitudeMode(name);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1getGlobeNodeTrackAltitudeMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGlobeNodeTrackAltitudeMode_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGlobeNodeTrackAltitudeMode_EVString_callback", "(Ljava/lang/String;)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getGlobeNodeTrackAltitudeMode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getGlobeNodeTrackAltitudeMode(name);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setCameraNodeTrackIsLoop_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean loop_j)
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
				const ev_bool loop = (const ev_bool) loop_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setCameraNodeTrackIsLoop(name, loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getCameraNodeTrackIsLoop_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getCameraNodeTrackIsLoop(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setModelScale_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong scale_j)
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
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setModelScale(name, scale);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getModelScale_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelScale(name);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setModelRotateDegree_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong rotateDegree_j)
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
				const EarthView::World::Spatial::Math::CVector3 &rotateDegree = *(EarthView::World::Spatial::Math::CVector3*) rotateDegree_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setModelRotateDegree(name, rotateDegree);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getModelRotateDegree_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelRotateDegree(name);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setModelLocalOffsetVector_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong offsetVector_j)
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
				const EarthView::World::Spatial::Math::CVector3 &offsetVector = *(EarthView::World::Spatial::Math::CVector3*) offsetVector_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setModelLocalOffsetVector(name, offsetVector);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getModelLocalOffsetVector_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getModelLocalOffsetVector(name);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setFlySpeed_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble speed_j)
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
				const ev_real64 speed = (const ev_real64) speed_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setFlySpeed(name, speed);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getFlySpeed_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getFlySpeed(name);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setInterpolate_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean interpolate_j)
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
				const ev_bool interpolate = (const ev_bool) interpolate_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setInterpolate(name, interpolate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getInterpolate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getInterpolate(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setReflectable_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean enable_j)
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
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setReflectable(name, enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getReflectable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getReflectable(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setRefractable_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean enable_j)
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
				const ev_bool enable = (const ev_bool) enable_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setRefractable(name, enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getRefractable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRefractable(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicModelObjectIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator __values1 = pObjectX->getDynamicModelObjectIterator();
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator *returnvalues = new EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setDynamicGlobeNodeTrackAnimationListener_1CDynamicGlobeNodeTrackAnimationListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_globeNodeTrackAnimationListener_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener *ref_globeNodeTrackAnimationListener = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) ref_globeNodeTrackAnimationListener_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setDynamicGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicGlobeNodeTrackAnimationListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* __values1 = pObjectX->getDynamicGlobeNodeTrackAnimationListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getAnimationsetLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				Real __values1 = pObjectX->getAnimationsetLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setAnimationsetLength_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble length_j)
			{
				const Real length = (const Real) length_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setAnimationsetLength(length);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_startAnimationset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->startAnimationset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_stopAnimationset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->stopAnimationset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_pauseAnimationset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->pauseAnimationset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_continueAnimationset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->continueAnimationset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setAnimationsetTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble curKeyFrameTime_j)
			{
				const ev_real64 curKeyFrameTime = (const ev_real64) curKeyFrameTime_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setAnimationsetTime(curKeyFrameTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getAnimationsetTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getAnimationsetTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setAnimationsetTimeRatio_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeRatio_j)
			{
				const Real timeRatio = (const Real) timeRatio_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->setAnimationsetTimeRatio(timeRatio);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getAnimationsetTimeRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				Real __values1 = pObjectX->getAnimationsetTimeRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *ref_dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) ref_dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addEvent(ref_dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeEvent_1CDynamicObjectEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dynamicObjectEvent_j)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *dynamicObjectEvent = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) dynamicObjectEvent_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->removeEvent(dynamicObjectEvent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addShadeScutcheon_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->addShadeScutcheon(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeShadeScutcheon_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->removeShadeScutcheon(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeAllTrackTrailPoint_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::removeAllTrackTrailPoint(name);
				}
				else
				{
					pObjectX->removeAllTrackTrailPoint(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1removeAllTrackTrailPoint_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllTrackTrailPoint_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllTrackTrailPoint_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_removeAllTrackTrailPoint_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::removeAllTrackTrailPoint(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addTrackTrailPoint_1EVString_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong point_j)
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
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::addTrackTrailPoint(name, point);
				}
				else
				{
					pObjectX->addTrackTrailPoint(name, point);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1addTrackTrailPoint_1EVString_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addTrackTrailPoint_EVString_CCoordinate_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addTrackTrailPoint_EVString_CCoordinate_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_addTrackTrailPoint_1EVString_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong point_j)
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
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::addTrackTrailPoint(name, point);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_refreshTrackTrail_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::refreshTrackTrail();
				}
				else
				{
					pObjectX->refreshTrackTrail();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1refreshTrackTrail_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_refreshTrackTrail_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"refreshTrackTrail_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_refreshTrackTrail_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::refreshTrackTrail();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setNeedUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setNeedUpdate(needUpdate);
				}
				else
				{
					pObjectX->setNeedUpdate(needUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1setNeedUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedUpdate_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedUpdate_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_setNeedUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::setNeedUpdate(needUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getNeedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDynamicModelObjectManagerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getNeedUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getNeedUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_register_1getNeedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDynamicModelObjectManagerProxy *pObjectX = (JCDynamicModelObjectManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNeedUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNeedUpdate_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getNeedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::getNeedUpdate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_dynamicmodellibrary_DynamicModelObjectManager_getDynamicModelObjectsLocker_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager *pObjectX = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager*) pObjXXXX;
				EarthView::World::Core::CReadWriteLock* __values1 = pObjectX->getDynamicModelObjectsLocker();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
