/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqldatabase.h"
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
				class JCSqlDriverCreatorBaseProxy : public EarthView::World::Core::Database::CSqlDriverCreatorBase
				{
				 private:
					EarthView::World::Core::ev_string m_createObject_void_callback;
				public:
					JCSqlDriverCreatorBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlDriverCreatorBase(pList)
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
					void register_createObject_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createObject_void_callback = __method;
					}
					virtual EarthView::World::Core::Database::CSqlDriver* createObject()
					{
						if (this->_gRef != NULL && this->m_createObject_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createObject_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::Database::CSqlDriver *__values1 = (EarthView::World::Core::Database::CSqlDriver*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlDriverCreatorBase::createObject();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSqlDriverCreatorBaseProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriverCreatorBase_createObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriverCreatorBase *pObjectX = (EarthView::World::Core::Database::CSqlDriverCreatorBase*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverCreatorBaseProxy))
					{
						EarthView::World::Core::Database::CSqlDriver* __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriverCreatorBase::createObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::Database::CSqlDriver* __values1 = pObjectX->createObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriverCreatorBase_register_1createObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverCreatorBaseProxy *pObjectX = (JCSqlDriverCreatorBaseProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createObject_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createObject_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriverCreatorBase_createObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriverCreatorBase *pObjectX = (EarthView::World::Core::Database::CSqlDriverCreatorBase*) pObjXXXX;
					EarthView::World::Core::Database::CSqlDriver* __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriverCreatorBase::createObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_OperatorAssign_1CSqlDatabase(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlDatabase& pObjectX = *(EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlDatabase &other = *(EarthView::World::Core::Database::CSqlDatabase*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_open_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->open();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_open_1ev_1wstring_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring user_j, jstring password_j)
				{
					const ev_wchar* user_wch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
					const ev_wstring user = user_wch;
					__env->ReleaseStringChars(user_j,(jchar*)user_wch);
					const ev_wchar* password_wch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
					const ev_wstring password = password_wch;
					__env->ReleaseStringChars(password_j,(jchar*)password_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->open(user, password);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->close();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpen();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_isOpenError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpenError();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_transaction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->transaction();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_commit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->commit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_rollback_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_bool __values1 = pObjectX->rollback();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setDatabaseName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setDatabaseName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setUserName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setUserName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setPassword_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring password_j)
				{
					const ev_wchar* password_wch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
					const ev_wstring password = password_wch;
					__env->ReleaseStringChars(password_j,(jchar*)password_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setPassword(password);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setHostName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring host_j)
				{
					const ev_wchar* host_wch = (const ev_wchar*)__env->GetStringChars(host_j,JNI_FALSE);
					const ev_wstring host = host_wch;
					__env->ReleaseStringChars(host_j,(jchar*)host_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setHostName(host);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setPort_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint p_j)
				{
					ev_int32 p = (ev_int32) p_j;
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setPort(p);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setConnectOptions_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring options_j)
				{
					const ev_wchar* options_wch = (const ev_wchar*)__env->GetStringChars(options_j,JNI_FALSE);
					const ev_wstring options = options_wch;
					__env->ReleaseStringChars(options_j,(jchar*)options_wch);
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setConnectOptions(options);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_databaseName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->databaseName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_userName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->userName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_password_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->password();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_hostName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->hostName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_driverName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->driverName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlDatabase_port_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					ev_int32 __values1 = pObjectX->port();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_connectOptions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->connectOptions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_connectionName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->connectionName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_driver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					EarthView::World::Core::Database::CSqlDriver* __values1 = pObjectX->driver();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_tables_1EVTableType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Core::Database::EVTableType type = (EarthView::World::Core::Database::EVTableType) type_j;
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					EarthView::World::Core::CWStringArray __values1 = pObjectX->tables(type);
					EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_record_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tablename_j)
				{
					const ev_wchar* tablename_wch = (const ev_wchar*)__env->GetStringChars(tablename_j,JNI_FALSE);
					const ev_wstring tablename = tablename_wch;
					__env->ReleaseStringChars(tablename_j,(jchar*)tablename_wch);
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					EarthView::World::Core::Database::CSqlRecord __values1 = pObjectX->record(tablename);
					EarthView::World::Core::Database::CSqlRecord *returnvalues = new EarthView::World::Core::Database::CSqlRecord(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_primaryIndex_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tablename_j)
				{
					const ev_wchar* tablename_wch = (const ev_wchar*)__env->GetStringChars(tablename_j,JNI_FALSE);
					const ev_wstring tablename = tablename_wch;
					__env->ReleaseStringChars(tablename_j,(jchar*)tablename_wch);
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					EarthView::World::Core::Database::CSqlIndex __values1 = pObjectX->primaryIndex(tablename);
					EarthView::World::Core::Database::CSqlIndex *returnvalues = new EarthView::World::Core::Database::CSqlIndex(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_addDatabase_1ev_1wstring_1ev_1wstring(JNIEnv *__env , jclass __clazz, jstring type_j, jstring connectionName_j)
				{
					const ev_wchar* type_wch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const ev_wstring type = type_wch;
					__env->ReleaseStringChars(type_j,(jchar*)type_wch);
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					EarthView::World::Core::Database::CSqlDatabase __values1 = EarthView::World::Core::Database::CSqlDatabase::addDatabase(type, connectionName);
					EarthView::World::Core::Database::CSqlDatabase *returnvalues = new EarthView::World::Core::Database::CSqlDatabase(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_addDatabase_1CSqlDriver_1ev_1wstring(JNIEnv *__env , jclass __clazz, jlong driver_j, jstring connectionName_j)
				{
					EarthView::World::Core::Database::CSqlDriver *driver = (EarthView::World::Core::Database::CSqlDriver*) driver_j;
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					EarthView::World::Core::Database::CSqlDatabase __values1 = EarthView::World::Core::Database::CSqlDatabase::addDatabase(driver, connectionName);
					EarthView::World::Core::Database::CSqlDatabase *returnvalues = new EarthView::World::Core::Database::CSqlDatabase(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_cloneDatabase_1CSqlDatabase_1ev_1wstring(JNIEnv *__env , jclass __clazz, jlong other_j, jstring connectionName_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &other = *(EarthView::World::Core::Database::CSqlDatabase*) other_j;
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					EarthView::World::Core::Database::CSqlDatabase __values1 = EarthView::World::Core::Database::CSqlDatabase::cloneDatabase(other, connectionName);
					EarthView::World::Core::Database::CSqlDatabase *returnvalues = new EarthView::World::Core::Database::CSqlDatabase(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_database_1ev_1wstring_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring connectionName_j, jboolean open_j)
				{
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					ev_bool open = (ev_bool) open_j;
					EarthView::World::Core::Database::CSqlDatabase __values1 = EarthView::World::Core::Database::CSqlDatabase::database(connectionName, open);
					EarthView::World::Core::Database::CSqlDatabase *returnvalues = new EarthView::World::Core::Database::CSqlDatabase(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_removeDatabase_1ev_1wstring(JNIEnv *__env , jclass __clazz, jstring connectionName_j)
				{
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					EarthView::World::Core::Database::CSqlDatabase::removeDatabase(connectionName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_contains_1ev_1wstring(JNIEnv *__env , jclass __clazz, jstring connectionName_j)
				{
					const ev_wchar* connectionName_wch = (const ev_wchar*)__env->GetStringChars(connectionName_j,JNI_FALSE);
					const ev_wstring connectionName = connectionName_wch;
					__env->ReleaseStringChars(connectionName_j,(jchar*)connectionName_wch);
					ev_bool __values1 = EarthView::World::Core::Database::CSqlDatabase::contains(connectionName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_drivers_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Core::CWStringArray __values1 = EarthView::World::Core::Database::CSqlDatabase::drivers();
					EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDatabase_connectionNames_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Core::CWStringArray __values1 = EarthView::World::Core::Database::CSqlDatabase::connectionNames();
					EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_registerSqlDriver_1ev_1wstring_1CSqlDriverCreatorBase(JNIEnv *__env , jclass __clazz, jstring name_j, jlong creator_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlDriverCreatorBase *creator = (EarthView::World::Core::Database::CSqlDriverCreatorBase*) creator_j;
					EarthView::World::Core::Database::CSqlDatabase::registerSqlDriver(name, creator);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDatabase_isDriverAvailable_1ev_1wstring(JNIEnv *__env , jclass __clazz, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					ev_bool __values1 = EarthView::World::Core::Database::CSqlDatabase::isDriverAvailable(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDatabase_setNumericalPrecisionPolicy_1EVNumericalPrecisionPolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint precisionPolicy_j)
				{
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy precisionPolicy = (EarthView::World::Core::Database::EVNumericalPrecisionPolicy) precisionPolicy_j;
					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					pObjectX->setNumericalPrecisionPolicy(precisionPolicy);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlDatabase_numericalPrecisionPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDatabase *pObjectX = (EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy __values1 = pObjectX->numericalPrecisionPolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
