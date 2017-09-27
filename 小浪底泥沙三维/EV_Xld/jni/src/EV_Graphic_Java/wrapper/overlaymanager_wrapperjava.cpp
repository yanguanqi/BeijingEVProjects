/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlaymanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformation_get_1mviewPort_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mviewPort);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformation_set_1mviewPort_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				pObjectX->mviewPort = (EarthView::World::Graphic::CViewport*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ViewportInformation_get_1mlastViewPortWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mlastViewPortWidth);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformation_set_1mlastViewPortWidth_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				pObjectX->mlastViewPortWidth = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ViewportInformation_get_1mlastViewPortHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mlastViewPortHeight);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformation_set_1mlastViewPortHeight_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				pObjectX->mlastViewPortHeight = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ViewportInformation_get_1mlastOrientationMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mlastOrientationMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformation_set_1mlastOrientationMode_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CViewportInformation *pObjectX = (EarthView::World::Graphic::CViewportInformation*)pObjXXXX;
				pObjectX->mlastOrientationMode = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_push_1back_1CViewportInformation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CViewportInformation *&ref_t = *(EarthView::World::Graphic::CViewportInformation**) ref_t_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				EarthView::World::Graphic::CViewportInformation*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				EarthView::World::Graphic::CViewportInformation*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_insert_1ev_1uint32_1CViewportInformation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CViewportInformation *&ref_t = *(EarthView::World::Graphic::CViewportInformation**) ref_t_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CViewportInformationVector& pObjectX = *(EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CViewportInformation*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				EarthView::World::Graphic::CViewportInformation*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ViewportInformationVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewportInformationVector *pObjectX = (EarthView::World::Graphic::CViewportInformationVector*) pObjXXXX;
				pObjectX->clear();
			}
			class JCOverlayManagerProxy : public EarthView::World::Graphic::COverlayManager
			{
			 private:
				EarthView::World::Core::ev_string m_getScriptPatterns_void_callback;
				EarthView::World::Core::ev_string m_parseScript_DataStreamPtr_EVString_callback;
				EarthView::World::Core::ev_string m_getLoadingOrder_void_callback;
			public:
				JCOverlayManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayManager(pList)
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
						return this->COverlayManager::getScriptPatterns();
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
						return this->COverlayManager::parseScript(stream, groupName);
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
						return this->COverlayManager::getLoadingOrder();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOverlayManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::COverlayManager& __values1 = EarthView::World::Graphic::COverlayManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::COverlayManager* __values1 = EarthView::World::Graphic::COverlayManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_push_1EVString_1COverlay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				const EarthView::World::Graphic::COverlay *&ref_val = *(const EarthView::World::Graphic::COverlay**) ref_val_j;
				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::COverlayManager::OverlayMap& pObjectX = *(EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::COverlay*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				EarthView::World::Graphic::COverlay*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayPair_set_1second_1COverlay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COverlayManager::OverlayPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::COverlay*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlay* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlay** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlay* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_push_1EVString_1COverlayElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				const EarthView::World::Graphic::COverlayElement *&ref_val = *(const EarthView::World::Graphic::COverlayElement**) ref_val_j;
				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::COverlayManager::ElementMap& pObjectX = *(EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::COverlayElement*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024ElementMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::ElementMap *pObjectX = (EarthView::World::Graphic::COverlayManager::ElementMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlaymanagerElementPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlaymanagerElementPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlaymanagerElementPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlaymanagerElementPair_set_1second_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::COverlayElement*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024TemplateIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::TemplateIterator *pObjectX = (EarthView::World::Graphic::COverlayManager::TemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_push_1EVString_1COverlayElementFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				const EarthView::World::Graphic::COverlayElementFactory *&ref_val = *(const EarthView::World::Graphic::COverlayElementFactory**) ref_val_j;
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap& pObjectX = *(EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::COverlayElementFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::COverlayElementFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_00024OverlayFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager::OverlayFactoryMap *pObjectX = (EarthView::World::Graphic::COverlayManager::OverlayFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_removeViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->removeViewport(vp);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getScriptPatterns_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayManagerProxy))
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::COverlayManager::getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayManagerProxy *pObjectX = (JCOverlayManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getScriptPatterns_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::COverlayManager::getScriptPatterns();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayManager::parseScript(stream, groupName);
				}
				else
				{
					pObjectX->parseScript(stream, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayManagerProxy *pObjectX = (JCOverlayManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_parseScript_1DataStreamPtr_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayManager::parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayManager_getLoadingOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayManagerProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayManager::getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayManagerProxy *pObjectX = (JCOverlayManagerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayManager_getLoadingOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayManager::getLoadingOrder();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_create_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlay* __values1 = pObjectX->create(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_create_1EVString_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong ref_owner_j)
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
				EarthView::World::Graphic::CSceneManager *ref_owner = (EarthView::World::Graphic::CSceneManager*) ref_owner_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlay* __values1 = pObjectX->create(name, ref_owner);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlay* __values1 = pObjectX->getByName(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroy_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroy(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroy_1COverlay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong overlay_j)
			{
				EarthView::World::Graphic::COverlay *overlay = (EarthView::World::Graphic::COverlay*) overlay_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroy(overlay);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyAll();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getOverlayIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator __values1 = pObjectX->getOverlayIterator();
				EarthView::World::Graphic::COverlayManager::OverlayMapIterator *returnvalues = new EarthView::World::Graphic::COverlayManager::OverlayMapIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager__1queueOverlaysForRendering_1CCamera_1CRenderQueue_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong pQueue_j, jlong vp_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *pQueue = (EarthView::World::Graphic::CRenderQueue*) pQueue_j;
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->_queueOverlaysForRendering(cam, pQueue, vp);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_hasViewportChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasViewportChanged();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayManager_getViewportHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getViewportHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayManager_getViewportWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getViewportWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayManager_getViewportAspectRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				Real __values1 = pObjectX->getViewportAspectRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayManager_getViewportOrientationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::OrientationMode __values1 = pObjectX->getViewportOrientationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_createOverlayElement_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jstring instanceName_j, jboolean isTemplate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(typeName, instanceName, isTemplate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_createOverlayElement_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElement(typeName, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getOverlayElement_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isTemplate_j)
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
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->getOverlayElement(name, isTemplate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->getOverlayElement(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_hasOverlayElement_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean isTemplate_j)
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
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasOverlayElement(name, isTemplate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_hasOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasOverlayElement(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyOverlayElement_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j, jboolean isTemplate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyOverlayElement(instanceName, isTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyOverlayElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyOverlayElement(instanceName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyOverlayElement_1COverlayElement_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pInstance_j, jboolean isTemplate_j)
			{
				EarthView::World::Graphic::COverlayElement *pInstance = (EarthView::World::Graphic::COverlayElement*) pInstance_j;
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyOverlayElement(pInstance, isTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyOverlayElement_1COverlayElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pInstance_j)
			{
				EarthView::World::Graphic::COverlayElement *pInstance = (EarthView::World::Graphic::COverlayElement*) pInstance_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyOverlayElement(pInstance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyAllOverlayElements_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isTemplate_j)
			{
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyAllOverlayElements(isTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_destroyAllOverlayElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->destroyAllOverlayElements();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayManager_addOverlayElementFactory_1COverlayElementFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_elemFactory_j)
			{
				EarthView::World::Graphic::COverlayElementFactory *ref_elemFactory = (EarthView::World::Graphic::COverlayElementFactory*) ref_elemFactory_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				pObjectX->addOverlayElementFactory(ref_elemFactory);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getOverlayElementFactoryMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap& __values1 = pObjectX->getOverlayElementFactoryMap();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_createOverlayElementFromTemplate_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring templateName_j, jstring typeName_j, jstring instanceName_j, jboolean isTemplate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* templateName_ch = (const ev_char*)__env->GetStringUTFChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringUTFChars(templateName_j, (const char *)templateName_ch);
				#else
				const ev_wchar* templateName_ch = (const ev_wchar*)__env->GetStringChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringChars(templateName_j, (const jchar *)templateName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				ev_bool isTemplate = (ev_bool) isTemplate_j;
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElementFromTemplate(templateName, typeName, instanceName, isTemplate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_createOverlayElementFromTemplate_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring templateName_j, jstring typeName_j, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* templateName_ch = (const ev_char*)__env->GetStringUTFChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringUTFChars(templateName_j, (const char *)templateName_ch);
				#else
				const ev_wchar* templateName_ch = (const ev_wchar*)__env->GetStringChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringChars(templateName_j, (const jchar *)templateName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElementFromTemplate(templateName, typeName, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_cloneOverlayElementFromTemplate_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring templateName_j, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* templateName_ch = (const ev_char*)__env->GetStringUTFChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringUTFChars(templateName_j, (const char *)templateName_ch);
				#else
				const ev_wchar* templateName_ch = (const ev_wchar*)__env->GetStringChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringChars(templateName_j, (const jchar *)templateName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->cloneOverlayElementFromTemplate(templateName, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_createOverlayElementFromFactory_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
				#else
				const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
				const EVString typeName = typeName_ch;
				__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->createOverlayElementFromFactory(typeName, instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayManager_getTemplateIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				EarthView::World::Graphic::COverlayManager::TemplateIterator __values1 = pObjectX->getTemplateIterator();
				EarthView::World::Graphic::COverlayManager::TemplateIterator *returnvalues = new EarthView::World::Graphic::COverlayManager::TemplateIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayManager_isTemplate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
				EVString strName = strName_ch;
				__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
				#else
				const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
				EVString strName = strName_ch;
				__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
				#endif
				const 				EarthView::World::Graphic::COverlayManager *pObjectX = (EarthView::World::Graphic::COverlayManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTemplate(strName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
