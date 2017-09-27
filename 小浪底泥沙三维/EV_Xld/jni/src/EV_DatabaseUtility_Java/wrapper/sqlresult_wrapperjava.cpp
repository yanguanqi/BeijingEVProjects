/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlresult.h"
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
			namespace Database
			{
				class JCSqlResultProxy : public EarthView::World::Core::Database::CSqlResult
				{
				 private:
					EarthView::World::Core::ev_string m_handle_void_callback;
				public:
					JCSqlResultProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlResult(pList)
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
					void register_handle_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handle_void_callback = __method;
					}
					virtual EarthView::World::Core::CVariant handle() const
					{
						if (this->_gRef != NULL && this->m_handle_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("handle_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CVariant __values1 = *(EarthView::World::Core::CVariant*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlResult::handle();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSqlResultProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlResult_handle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlResult *pObjectX = (EarthView::World::Core::Database::CSqlResult*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlResultProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Core::Database::CSqlResult::handle();
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->handle();
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlResult_register_1handle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlResultProxy *pObjectX = (JCSqlResultProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handle_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handle_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlResult_handle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlResult *pObjectX = (EarthView::World::Core::Database::CSqlResult*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Core::Database::CSqlResult::handle();
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
