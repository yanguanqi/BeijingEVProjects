/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_translator.h"
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
			class JCEvTranslatorProxy : public EarthView::World::Core::CEvTranslator
			{
			 private:
				EarthView::World::Core::ev_string m_translate_ev_char_ev_char_ev_char_callback;
			public:
				JCEvTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEvTranslator(pList)
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
				void register_translate_ev_char_ev_char_ev_char_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_ev_char_ev_char_ev_char_callback = __method;
				}
				virtual EVString translate(const ev_char* sourceText, const ev_char* context, const ev_char* comment) const
				{
					if (this->_gRef != NULL && this->m_translate_ev_char_ev_char_ev_char_callback != "" && this->isCustomExtend())
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
						jlong sourceText_j = (jlong) sourceText;
						jlong context_j = (jlong) context;
						jlong comment_j = (jlong) comment;
						jmethodID __method = __gr->getMethod("translate_ev_char_ev_char_ev_char_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , sourceText_j, context_j, comment_j);
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
						return this->CEvTranslator::translate(sourceText, context, comment);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEvTranslatorProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_EvTranslator_00024EvTranslatorFiedTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CEvTranslator::Contexts,
					CEvTranslator::Hashes,
					CEvTranslator::Messages,
					CEvTranslator::NumerusRules
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_EvTranslator_00024EvTranslatorMsgTagHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CEvTranslator::Tag_End,
					CEvTranslator::Tag_SourceText16,
					CEvTranslator::Tag_Translation,
					CEvTranslator::Tag_Context16,
					CEvTranslator::Tag_Obsolete1,
					CEvTranslator::Tag_SourceText,
					CEvTranslator::Tag_Context,
					CEvTranslator::Tag_Comment,
					CEvTranslator::Tag_Obsolete2
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_EvTranslator_00024EvTranslatorOpcodeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CEvTranslator::EV_EQ,
					CEvTranslator::EV_LT,
					CEvTranslator::EV_LEQ,
					CEvTranslator::EV_BETWEEN,
					CEvTranslator::EV_NOT,
					CEvTranslator::EV_MOD_10,
					CEvTranslator::EV_MOD_100,
					CEvTranslator::EV_LEAD_1000,
					CEvTranslator::EV_AND,
					CEvTranslator::EV_OR,
					CEvTranslator::EV_NEWRULE,
					CEvTranslator::EV_OP_MASK,
					CEvTranslator::EV_NEQ,
					CEvTranslator::EV_GT,
					CEvTranslator::EV_GEQ,
					CEvTranslator::EV_NOT_BETWEEN
				};
				jintArray array = __env->NewIntArray(16);
				__env->SetIntArrayRegion(array, 0, 16, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EvTranslator_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEmpty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EvTranslator_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				ev_bool __values1 = pObjectX->load(filename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EvTranslator_load_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring directory_j, jstring suffix_j)
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
				const ev_char* directory_ch = (const ev_char*)__env->GetStringUTFChars(directory_j,JNI_FALSE);
				const EVString directory = directory_ch;
				__env->ReleaseStringUTFChars(directory_j, (const char *)directory_ch);
				#else
				const ev_wchar* directory_ch = (const ev_wchar*)__env->GetStringChars(directory_j,JNI_FALSE);
				const EVString directory = directory_ch;
				__env->ReleaseStringChars(directory_j, (const jchar *)directory_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* suffix_ch = (const ev_char*)__env->GetStringUTFChars(suffix_j,JNI_FALSE);
				const EVString suffix = suffix_ch;
				__env->ReleaseStringUTFChars(suffix_j, (const char *)suffix_ch);
				#else
				const ev_wchar* suffix_ch = (const ev_wchar*)__env->GetStringChars(suffix_j,JNI_FALSE);
				const EVString suffix = suffix_ch;
				__env->ReleaseStringChars(suffix_j, (const jchar *)suffix_ch);
				#endif
				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				ev_bool __values1 = pObjectX->load(filename, directory, suffix);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_EvTranslator_translate_1ev_1char_1ev_1char_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceText_j, jlong context_j, jlong comment_j)
			{
				const ev_char *sourceText = (const ev_char*) sourceText_j;
				const ev_char *context = (const ev_char*) context_j;
				const ev_char *comment = (const ev_char*) comment_j;
				const 				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEvTranslatorProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CEvTranslator::translate(sourceText, context, comment);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->translate(sourceText, context, comment);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslator_register_1translate_1ev_1char_1ev_1char_1ev_1char(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEvTranslatorProxy *pObjectX = (JCEvTranslatorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_ev_char_ev_char_ev_char_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_ev_char_ev_char_ev_char_callback", "(JJJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_EvTranslator_translate_1ev_1char_1ev_1char_1ev_1char_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceText_j, jlong context_j, jlong comment_j)
			{
				const ev_char *sourceText = (const ev_char*) sourceText_j;
				const ev_char *context = (const ev_char*) context_j;
				const ev_char *comment = (const ev_char*) comment_j;
				const 				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CEvTranslator::translate(sourceText, context, comment);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_EvTranslator_translate_1ev_1char_1ev_1char_1ev_1char_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceText_j, jlong context_j, jlong comment_j, jint n_j)
			{
				const ev_char *sourceText = (const ev_char*) sourceText_j;
				const ev_char *context = (const ev_char*) context_j;
				const ev_char *comment = (const ev_char*) comment_j;
				ev_int32 n = (ev_int32) n_j;
				const 				EarthView::World::Core::CEvTranslator *pObjectX = (EarthView::World::Core::CEvTranslator*) pObjXXXX;
				EVString __values1 = pObjectX->translate(sourceText, context, comment, n);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			class JCEvTranslatorListenerProxy : public EarthView::World::Core::CEvTranslatorListener
			{
			 private:
				EarthView::World::Core::ev_string m_changeLanguage_void_callback;
			public:
				JCEvTranslatorListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEvTranslatorListener(pList)
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
				void register_changeLanguage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeLanguage_void_callback = __method;
				}
				virtual void changeLanguage()
				{
					if (this->_gRef != NULL && this->m_changeLanguage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("changeLanguage_void_callback");
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
						return this->CEvTranslatorListener::changeLanguage();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEvTranslatorListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorListener_changeLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CEvTranslatorListener *pObjectX = (EarthView::World::Core::CEvTranslatorListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEvTranslatorListenerProxy))
				{
					pObjectX->EarthView::World::Core::CEvTranslatorListener::changeLanguage();
				}
				else
				{
					pObjectX->changeLanguage();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorListener_register_1changeLanguage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEvTranslatorListenerProxy *pObjectX = (JCEvTranslatorListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeLanguage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeLanguage_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorListener_changeLanguage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CEvTranslatorListener *pObjectX = (EarthView::World::Core::CEvTranslatorListener*) pObjXXXX;
				pObjectX->EarthView::World::Core::CEvTranslatorListener::changeLanguage();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_EvTranslatorManager_00024EvLanguageTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CEvTranslatorManager::EV_ENGLISH,
					CEvTranslatorManager::EV_CHINESE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_installTranslator_1CEvTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTranslator_j)
			{
				EarthView::World::Core::CEvTranslator *pTranslator = (EarthView::World::Core::CEvTranslator*) pTranslator_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				pObjectX->installTranslator(pTranslator);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_removeTranslator_1CEvTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTranslator_j)
			{
				EarthView::World::Core::CEvTranslator *pTranslator = (EarthView::World::Core::CEvTranslator*) pTranslator_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				pObjectX->removeTranslator(pTranslator);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_setCurrentLanguage_1EvLanguageType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint currLanguage_j)
			{
				EarthView::World::Core::CEvTranslatorManager::EvLanguageType currLanguage = (EarthView::World::Core::CEvTranslatorManager::EvLanguageType) currLanguage_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				pObjectX->setCurrentLanguage(currLanguage);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_EvTranslatorManager_getCurrentLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				EarthView::World::Core::CEvTranslatorManager::EvLanguageType __values1 = pObjectX->getCurrentLanguage();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_EvTranslatorManager_translate_1ev_1char_1ev_1char_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceText_j, jlong context_j, jlong comment_j)
			{
				const ev_char *sourceText = (const ev_char*) sourceText_j;
				const ev_char *context = (const ev_char*) context_j;
				const ev_char *comment = (const ev_char*) comment_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				EVString __values1 = pObjectX->translate(sourceText, context, comment);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_EvTranslatorManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CEvTranslatorManager* __values1 = EarthView::World::Core::CEvTranslatorManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_releaseSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CEvTranslatorManager::releaseSingletonPtr();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_addTranslatorListener_1CEvTranslatorListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newListener_j)
			{
				EarthView::World::Core::CEvTranslatorListener *newListener = (EarthView::World::Core::CEvTranslatorListener*) newListener_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				pObjectX->addTranslatorListener(newListener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EvTranslatorManager_removeTranslatorListener_1CEvTranslatorListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldListener_j)
			{
				EarthView::World::Core::CEvTranslatorListener *oldListener = (EarthView::World::Core::CEvTranslatorListener*) oldListener_j;
				EarthView::World::Core::CEvTranslatorManager *pObjectX = (EarthView::World::Core::CEvTranslatorManager*) pObjXXXX;
				pObjectX->removeTranslatorListener(oldListener);
			}
		}
	}
}
