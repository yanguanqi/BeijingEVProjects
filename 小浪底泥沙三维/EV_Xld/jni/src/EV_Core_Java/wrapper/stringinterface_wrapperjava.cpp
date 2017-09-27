/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/stringinterface.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_ParameterTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PT_BOOL,
					PT_REAL,
					PT_INT,
					PT_UNSIGNED_INT,
					PT_SHORT,
					PT_UNSIGNED_SHORT,
					PT_LONG,
					PT_UNSIGNED_LONG,
					PT_STRING,
					PT_VECTOR3,
					PT_MATRIX3,
					PT_MATRIX4,
					PT_QUATERNION,
					PT_COLOURVALUE,
					PT_FONT,
					PT_ENUM,
					PT_DATETIME,
					PT_MATERIAL,
					PT_PICTURE,
					PT_UNKNOW
				};
				jintArray array = __env->NewIntArray(20);
				__env->SetIntArrayRegion(array, 0, 20, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ParameterDef_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ParameterDef_get_1description_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->description;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_set_1description_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->description = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_ParameterDef_get_1paramType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->paramType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_set_1paramType_1ParameterType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				pObjectX->paramType = (EarthView::World::Core::ParameterType)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParameterDef_get_1mbReadOnly_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mbReadOnly);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_set_1mbReadOnly_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				pObjectX->mbReadOnly = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParameterDef_get_1mbEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mbEnabled);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_set_1mbEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*)pObjXXXX;
				pObjectX->mbEnabled = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_release_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*) pObjXXXX;
				pObjectX->release();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_setParameter_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint min_j, jint max_j, jint singleStep_j)
			{
				ev_int32 min = (ev_int32) min_j;
				ev_int32 max = (ev_int32) max_j;
				ev_int32 singleStep = (ev_int32) singleStep_j;
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*) pObjXXXX;
				pObjectX->setParameter(min, max, singleStep);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_setParameter_1ev_1real64_1ev_1real64_1ev_1uint8_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j, jshort decimals_j, jdouble singleStep_j)
			{
				ev_real64 min = (ev_real64) min_j;
				ev_real64 max = (ev_real64) max_j;
				ev_uint8 decimals = (ev_uint8) decimals_j;
				ev_real64 singleStep = (ev_real64) singleStep_j;
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*) pObjXXXX;
				pObjectX->setParameter(min, max, decimals, singleStep);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterDef_setParameter_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong options_j)
			{
				EarthView::World::Core::StringVector options = *(EarthView::World::Core::StringVector*) options_j;
				EarthView::World::Core::CParameterDef *pObjectX = (EarthView::World::Core::CParameterDef*) pObjXXXX;
				pObjectX->setParameter(options);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_push_1back_1CParameterDef(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::CParameterDef &t = *(EarthView::World::Core::CParameterDef*) t_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParameterList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				EarthView::World::Core::CParameterDef& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParameterList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				EarthView::World::Core::CParameterDef& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_insert_1ev_1uint32_1CParameterDef(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::CParameterDef &t = *(EarthView::World::Core::CParameterDef*) t_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParameterList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParameterList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::ParameterList& pObjectX = *(EarthView::World::Core::ParameterList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::CParameterDef& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParameterList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				EarthView::World::Core::CParameterDef& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParameterList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParameterList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParameterList *pObjectX = (EarthView::World::Core::ParameterList*) pObjXXXX;
				pObjectX->clear();
			}
			class JCParamCommandProxy : public EarthView::World::Core::CParamCommand
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCParamCommandProxy(EarthView::World::Core::CNameValuePairList *pList) : CParamCommand(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CParamCommand::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CParamCommand::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CParamCommand::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParamCommandProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ParamCommand_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParamCommandProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CParamCommand::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommand_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParamCommandProxy *pObjectX = (JCParamCommandProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_ParamCommand_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CParamCommand::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommand_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParamCommandProxy))
				{
					pObjectX->EarthView::World::Core::CParamCommand::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommand_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParamCommandProxy *pObjectX = (JCParamCommandProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommand_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				pObjectX->EarthView::World::Core::CParamCommand::doSet(target, val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamCommand_trySet_1void_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j, jlong reason_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EVString &reason = *(EVString*) reason_j;
				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParamCommandProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CParamCommand::trySet(target, val, reason);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->trySet(target, val, reason);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommand_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParamCommandProxy *pObjectX = (JCParamCommandProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamCommand_trySet_1void_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j, jlong reason_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EVString &reason = *(EVString*) reason_j;
				EarthView::World::Core::CParamCommand *pObjectX = (EarthView::World::Core::CParamCommand*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CParamCommand::trySet(target, val, reason);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamCommandMap_push_1EVString_1CParamCommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Core::CParamCommand *&val = *(const EarthView::World::Core::CParamCommand**) val_j;
				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamCommandMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamCommandMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Core::ParamCommandMap& pObjectX = *(EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CParamCommand*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamCommandMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				EarthView::World::Core::CParamCommand*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommandMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamCommandMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamCommandMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamCommandMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParamCommandMap *pObjectX = (EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamDictionary_addParameter_1CParameterDef_1CParamCommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramDef_j, jlong paramCmd_j)
			{
				const EarthView::World::Core::CParameterDef &paramDef = *(EarthView::World::Core::CParameterDef*) paramDef_j;
				EarthView::World::Core::CParamCommand *paramCmd = (EarthView::World::Core::CParamCommand*) paramCmd_j;
				EarthView::World::Core::CParamDictionary *pObjectX = (EarthView::World::Core::CParamDictionary*) pObjXXXX;
				pObjectX->addParameter(paramDef, paramCmd);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamDictionary_getParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CParamDictionary *pObjectX = (EarthView::World::Core::CParamDictionary*) pObjXXXX;
				const EarthView::World::Core::ParameterList& __values1 = pObjectX->getParameters();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamDictionaryMap_push_1EVString_1CParamDictionary(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				const EarthView::World::Core::CParamDictionary &val = *(EarthView::World::Core::CParamDictionary*) val_j;
				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamDictionaryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamDictionaryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Core::ParamDictionaryMap& pObjectX = *(EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Core::CParamDictionary& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamDictionaryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				EarthView::World::Core::CParamDictionary& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamDictionaryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_ParamDictionaryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_ParamDictionaryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_ParamDictionaryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::ParamDictionaryMap *pObjectX = (EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_ParamStatusHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PS_HIDDEN,
					PS_DISABLED,
					PS_READWRITE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			class JIStringInterfaceObserverProxy : public EarthView::World::Core::IStringInterfaceObserver
			{
			 private:
				EarthView::World::Core::ev_string m_valueChanged_EVString_callback;
				EarthView::World::Core::ev_string m_destroyed_void_callback;
				EarthView::World::Core::ev_string m_statusChanged_EVString_ParamStatus_callback;
				EarthView::World::Core::ev_string m_valueModified_EVString_callback;
			public:
				JIStringInterfaceObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IStringInterfaceObserver(pList)
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
				void register_valueChanged_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_valueChanged_EVString_callback = __method;
				}
				void register_destroyed_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyed_void_callback = __method;
				}
				void register_statusChanged_EVString_ParamStatus_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_statusChanged_EVString_ParamStatus_callback = __method;
				}
				void register_valueModified_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_valueModified_EVString_callback = __method;
				}
				virtual void valueChanged(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_valueChanged_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("valueChanged_EVString_callback");
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
						return this->IStringInterfaceObserver::valueChanged(name);
					}
				}
				virtual void destroyed()
				{
					if (this->_gRef != NULL && this->m_destroyed_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyed_void_callback");
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
						return this->IStringInterfaceObserver::destroyed();
					}
				}
				virtual void statusChanged(const EVString& name, EarthView::World::Core::ParamStatus status)
				{
					if (this->_gRef != NULL && this->m_statusChanged_EVString_ParamStatus_callback != "" && this->isCustomExtend())
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
						jint status_j = (jint) status;
						jmethodID __method = __gr->getMethod("statusChanged_EVString_ParamStatus_callback");
						__env->CallVoidMethod(__obj, __method , name_j, status_j);
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
						return this->IStringInterfaceObserver::statusChanged(name, status);
					}
				}
				virtual void valueModified(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_valueModified_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("valueModified_EVString_callback");
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
						return this->IStringInterfaceObserver::valueModified(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIStringInterfaceObserverProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_valueChanged_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIStringInterfaceObserverProxy))
				{
					pObjectX->EarthView::World::Core::IStringInterfaceObserver::valueChanged(name);
				}
				else
				{
					pObjectX->valueChanged(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_register_1valueChanged_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIStringInterfaceObserverProxy *pObjectX = (JIStringInterfaceObserverProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_valueChanged_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"valueChanged_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_valueChanged_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				pObjectX->EarthView::World::Core::IStringInterfaceObserver::valueChanged(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_destroyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIStringInterfaceObserverProxy))
				{
					pObjectX->EarthView::World::Core::IStringInterfaceObserver::destroyed();
				}
				else
				{
					pObjectX->destroyed();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_register_1destroyed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIStringInterfaceObserverProxy *pObjectX = (JIStringInterfaceObserverProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyed_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyed_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_destroyed_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				pObjectX->EarthView::World::Core::IStringInterfaceObserver::destroyed();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_statusChanged_1EVString_1ParamStatus(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint status_j)
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
				EarthView::World::Core::ParamStatus status = (EarthView::World::Core::ParamStatus) status_j;
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIStringInterfaceObserverProxy))
				{
					pObjectX->EarthView::World::Core::IStringInterfaceObserver::statusChanged(name, status);
				}
				else
				{
					pObjectX->statusChanged(name, status);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_register_1statusChanged_1EVString_1ParamStatus(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIStringInterfaceObserverProxy *pObjectX = (JIStringInterfaceObserverProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_statusChanged_EVString_ParamStatus_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"statusChanged_EVString_ParamStatus_callback", "(Ljava/lang/String;I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_statusChanged_1EVString_1ParamStatus_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint status_j)
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
				EarthView::World::Core::ParamStatus status = (EarthView::World::Core::ParamStatus) status_j;
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				pObjectX->EarthView::World::Core::IStringInterfaceObserver::statusChanged(name, status);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_valueModified_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIStringInterfaceObserverProxy))
				{
					pObjectX->EarthView::World::Core::IStringInterfaceObserver::valueModified(name);
				}
				else
				{
					pObjectX->valueModified(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_register_1valueModified_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIStringInterfaceObserverProxy *pObjectX = (JIStringInterfaceObserverProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_valueModified_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"valueModified_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Istringinterfaceobserver_valueModified_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Core::IStringInterfaceObserver *pObjectX = (EarthView::World::Core::IStringInterfaceObserver*) pObjXXXX;
				pObjectX->EarthView::World::Core::IStringInterfaceObserver::valueModified(name);
			}
			class JCStringInterfaceProxy : public EarthView::World::Core::CStringInterface
			{
			 private:
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CStringInterface(pList)
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
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->CStringInterface::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->CStringInterface::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
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
						return this->CStringInterface::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CStringInterface::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
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
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
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
						return this->CStringInterface::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCStringInterfaceProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_startEdit_1ev_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean immediate_j, jboolean restoreable_j)
			{
				ev_bool immediate = (ev_bool) immediate_j;
				bool restoreable = (bool) restoreable_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->startEdit(immediate, restoreable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_endEdit_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean apply_j)
			{
				ev_bool apply = (ev_bool) apply_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->endEdit(apply);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_hasValueChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasValueChanged();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_appendObserver_1IStringInterfaceObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
			{
				EarthView::World::Core::IStringInterfaceObserver *observer = (EarthView::World::Core::IStringInterfaceObserver*) observer_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->appendObserver(observer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_removeObserver_1IStringInterfaceObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
			{
				EarthView::World::Core::IStringInterfaceObserver *observer = (EarthView::World::Core::IStringInterfaceObserver*) observer_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->removeObserver(observer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_notifyValueChanged_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->notifyValueChanged(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_notifyStatusChanged_1EVString_1ParamStatus(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint status_j)
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
				EarthView::World::Core::ParamStatus status = (EarthView::World::Core::ParamStatus) status_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->notifyStatusChanged(name, status);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_createParamDictionary_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
				const EVString className = className_ch;
				__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
				#else
				const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
				const EVString className = className_ch;
				__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
				#endif
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				ev_bool __values1 = pObjectX->createParamDictionary(className);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringInterface_getLastErrorMessage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				EVString __values1 = pObjectX->getLastErrorMessage();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringInterface_getParamDictionary_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				EarthView::World::Core::CParamDictionary* __values1 = pObjectX->getParamDictionary();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_StringInterface_getParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				const EarthView::World::Core::ParameterList& __values1 = pObjectX->getParameters();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_setParameter_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring value_j)
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
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStringInterfaceProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CStringInterface::setParameter(name, value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setParameter(name, value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStringInterfaceProxy *pObjectX = (JCStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_setParameter_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring value_j)
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
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CStringInterface::setParameter(name, value);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean readOnly_j, jboolean enable_j)
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
				ev_bool readOnly = (ev_bool) readOnly_j;
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStringInterfaceProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CStringInterface::setParameter(name, readOnly, enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setParameter(name, readOnly, enable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStringInterfaceProxy *pObjectX = (JCStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_StringInterface_setParameter_1EVString_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean readOnly_j, jboolean enable_j)
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
				ev_bool readOnly = (ev_bool) readOnly_j;
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CStringInterface::setParameter(name, readOnly, enable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_setParameterList_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramList_j)
			{
				const EarthView::World::Core::CommonStringPairList &paramList = *(EarthView::World::Core::CommonStringPairList*) paramList_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStringInterfaceProxy))
				{
					pObjectX->EarthView::World::Core::CStringInterface::setParameterList(paramList);
				}
				else
				{
					pObjectX->setParameterList(paramList);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStringInterfaceProxy *pObjectX = (JCStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_setParameterList_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramList_j)
			{
				const EarthView::World::Core::CommonStringPairList &paramList = *(EarthView::World::Core::CommonStringPairList*) paramList_j;
				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->EarthView::World::Core::CStringInterface::setParameterList(paramList);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringInterface_getParameter_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStringInterfaceProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CStringInterface::getParameter(name);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getParameter(name);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStringInterfaceProxy *pObjectX = (JCStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_StringInterface_getParameter_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CStringInterface::getParameter(name);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_copyParametersTo_1CStringInterface(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
			{
				EarthView::World::Core::CStringInterface *dest = (EarthView::World::Core::CStringInterface*) dest_j;
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStringInterfaceProxy))
				{
					pObjectX->EarthView::World::Core::CStringInterface::copyParametersTo(dest);
				}
				else
				{
					pObjectX->copyParametersTo(dest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStringInterfaceProxy *pObjectX = (JCStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_copyParametersTo_1CStringInterface_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
			{
				EarthView::World::Core::CStringInterface *dest = (EarthView::World::Core::CStringInterface*) dest_j;
				const 				EarthView::World::Core::CStringInterface *pObjectX = (EarthView::World::Core::CStringInterface*) pObjXXXX;
				pObjectX->EarthView::World::Core::CStringInterface::copyParametersTo(dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_StringInterface_cleanupDictionary_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CStringInterface::cleanupDictionary();
			}
		}
	}
}
