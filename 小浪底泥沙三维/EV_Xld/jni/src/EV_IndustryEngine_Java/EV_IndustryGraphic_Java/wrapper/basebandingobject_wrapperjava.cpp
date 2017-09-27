/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/basebandingobject.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class JCBaseBandingObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject
			{
			 private:
				EarthView::World::Core::ev_string m_getCanSwapBuffer_void_callback;
				EarthView::World::Core::ev_string m_setName_EarthView_World_Core_ev_string_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setNeedUpdate_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedUpdate_void_callback;
				EarthView::World::Core::ev_string m_getNode_void_callback;
				EarthView::World::Core::ev_string m_update_void_callback;
			public:
				JCBaseBandingObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CBaseBandingObject(pList)
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
				void register_getCanSwapBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCanSwapBuffer_void_callback = __method;
				}
				void register_setName_EarthView_World_Core_ev_string_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EarthView_World_Core_ev_string_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setNeedUpdate_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedUpdate_ev_bool_callback = __method;
				}
				void register_getNeedUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedUpdate_void_callback = __method;
				}
				void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNode_void_callback = __method;
				}
				void register_update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_void_callback = __method;
				}
				virtual ev_bool getCanSwapBuffer() const
				{
					if (this->_gRef != NULL && this->m_getCanSwapBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCanSwapBuffer_void_callback");
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
						return this->CBaseBandingObject::getCanSwapBuffer();
					}
				}
				virtual void setName(const EarthView::World::Core::ev_string& name)
				{
					if (this->_gRef != NULL && this->m_setName_EarthView_World_Core_ev_string_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setName_EarthView_World_Core_ev_string_callback");
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
						return this->CBaseBandingObject::setName(name);
					}
				}
				virtual EarthView::World::Core::ev_string getName() const
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
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CBaseBandingObject::getName();
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
						return this->CBaseBandingObject::setNeedUpdate(needUpdate);
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
						return this->CBaseBandingObject::getNeedUpdate();
					}
				}
				virtual EarthView::World::Graphic::CNode* getNode() const
				{
					if (this->_gRef != NULL && this->m_getNode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNode_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBaseBandingObject::getNode();
					}
				}
				virtual void update()
				{
					if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("update_void_callback");
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
						return this->CBaseBandingObject::update();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBaseBandingObjectProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getCanSwapBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getCanSwapBuffer();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getCanSwapBuffer();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1getCanSwapBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCanSwapBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCanSwapBuffer_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getCanSwapBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getCanSwapBuffer();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_setName_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EarthView::World::Core::ev_string name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EarthView::World::Core::ev_string name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1setName_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setName_EarthView_World_Core_ev_string_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setName_EarthView_World_Core_ev_string_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_setName_1EarthView_1World_1Core_1ev_1string_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EarthView::World::Core::ev_string name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EarthView::World::Core::ev_string name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_setNeedUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setNeedUpdate(needUpdate);
				}
				else
				{
					pObjectX->setNeedUpdate(needUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1setNeedUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_setNeedUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::setNeedUpdate(needUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getNeedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNeedUpdate();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1getNeedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getNeedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNeedUpdate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_getNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::getNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBaseBandingObjectProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::update();
				}
				else
				{
					pObjectX->update();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBaseBandingObjectProxy *pObjectX = (JCBaseBandingObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_BaseBandingObject_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject::update();
			}
		}
	}
}
