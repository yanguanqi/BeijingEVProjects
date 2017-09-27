/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqldriver.h"
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
				class JCSqlDriverProxy : public EarthView::World::Core::Database::CSqlDriver
				{
				 private:
					EarthView::World::Core::ev_string m_handle_void_callback;
					EarthView::World::Core::ev_string m_hasFeature_EVDriverFeature_callback;
					EarthView::World::Core::ev_string m_isOpen_void_callback;
					EarthView::World::Core::ev_string m_exist_ev_wstring_callback;
					EarthView::World::Core::ev_string m_tables_EVTableType_callback;
					EarthView::World::Core::ev_string m_primaryIndex_ev_wstring_callback;
					EarthView::World::Core::ev_string m_record_ev_wstring_callback;
					EarthView::World::Core::ev_string m_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback;
					EarthView::World::Core::ev_string m_close_void_callback;
					EarthView::World::Core::ev_string m_createResult_void_callback;
					EarthView::World::Core::ev_string m_beginTransaction_void_callback;
					EarthView::World::Core::ev_string m_commitTransaction_void_callback;
					EarthView::World::Core::ev_string m_rollbackTransaction_void_callback;
					EarthView::World::Core::ev_string m_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback;
					EarthView::World::Core::ev_string m_isIdentifierEscaped_ev_wstring_EVIdentifierType_callback;
					EarthView::World::Core::ev_string m_escapeIdentifier_ev_wstring_EVIdentifierType_callback;
					EarthView::World::Core::ev_string m_formatValue_CSqlField_ev_bool_callback;
				public:
					JCSqlDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlDriver(pList)
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
					void register_hasFeature_EVDriverFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasFeature_EVDriverFeature_callback = __method;
					}
					void register_isOpen_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isOpen_void_callback = __method;
					}
					void register_exist_ev_wstring_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exist_ev_wstring_callback = __method;
					}
					void register_tables_EVTableType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_tables_EVTableType_callback = __method;
					}
					void register_primaryIndex_ev_wstring_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_primaryIndex_ev_wstring_callback = __method;
					}
					void register_record_ev_wstring_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_record_ev_wstring_callback = __method;
					}
					void register_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback = __method;
					}
					void register_close_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_close_void_callback = __method;
					}
					void register_createResult_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createResult_void_callback = __method;
					}
					void register_beginTransaction_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_beginTransaction_void_callback = __method;
					}
					void register_commitTransaction_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_commitTransaction_void_callback = __method;
					}
					void register_rollbackTransaction_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rollbackTransaction_void_callback = __method;
					}
					void register_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback = __method;
					}
					void register_isIdentifierEscaped_ev_wstring_EVIdentifierType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIdentifierEscaped_ev_wstring_EVIdentifierType_callback = __method;
					}
					void register_escapeIdentifier_ev_wstring_EVIdentifierType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_escapeIdentifier_ev_wstring_EVIdentifierType_callback = __method;
					}
					void register_formatValue_CSqlField_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_formatValue_CSqlField_ev_bool_callback = __method;
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
							return this->CSqlDriver::handle();
						}
					}
					virtual ev_bool hasFeature(EarthView::World::Core::Database::CSqlDriver::EVDriverFeature f) const
					{
						if (this->_gRef != NULL && this->m_hasFeature_EVDriverFeature_callback != "" && this->isCustomExtend())
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
							jint f_j = (jint) f;
							jmethodID __method = __gr->getMethod("hasFeature_EVDriverFeature_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , f_j);
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
							return this->CSqlDriver::hasFeature(f);
						}
					}
					virtual ev_bool isOpen() const
					{
						if (this->_gRef != NULL && this->m_isOpen_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isOpen_void_callback");
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
							return this->CSqlDriver::isOpen();
						}
					}
					virtual ev_bool exist(const ev_wstring& dbname) const
					{
						if (this->_gRef != NULL && this->m_exist_ev_wstring_callback != "" && this->isCustomExtend())
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
							jstring dbname_j = __env->NewString((const jchar*)dbname.getString(),dbname.size());
							jmethodID __method = __gr->getMethod("exist_ev_wstring_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dbname_j);
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
							return this->CSqlDriver::exist(dbname);
						}
					}
					virtual EarthView::World::Core::CWStringArray tables(EarthView::World::Core::Database::EVTableType tableType) const
					{
						if (this->_gRef != NULL && this->m_tables_EVTableType_callback != "" && this->isCustomExtend())
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
							jint tableType_j = (jint) tableType;
							jmethodID __method = __gr->getMethod("tables_EVTableType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tableType_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CWStringArray __values1 = *(EarthView::World::Core::CWStringArray*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlDriver::tables(tableType);
						}
					}
					virtual EarthView::World::Core::Database::CSqlIndex primaryIndex(const ev_wstring& tableName) const
					{
						if (this->_gRef != NULL && this->m_primaryIndex_ev_wstring_callback != "" && this->isCustomExtend())
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
							jstring tableName_j = __env->NewString((const jchar*)tableName.getString(),tableName.size());
							jmethodID __method = __gr->getMethod("primaryIndex_ev_wstring_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tableName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::Database::CSqlIndex __values1 = *(EarthView::World::Core::Database::CSqlIndex*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlDriver::primaryIndex(tableName);
						}
					}
					virtual EarthView::World::Core::Database::CSqlRecord record(const ev_wstring& tableName) const
					{
						if (this->_gRef != NULL && this->m_record_ev_wstring_callback != "" && this->isCustomExtend())
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
							jstring tableName_j = __env->NewString((const jchar*)tableName.getString(),tableName.size());
							jmethodID __method = __gr->getMethod("record_ev_wstring_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tableName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::Database::CSqlRecord __values1 = *(EarthView::World::Core::Database::CSqlRecord*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlDriver::record(tableName);
						}
					}
					virtual ev_bool open(const ev_wstring& db, const ev_wstring& user, const ev_wstring& password, const ev_wstring& host, ev_int32 port, const ev_wstring& connOpts)
					{
						if (this->_gRef != NULL && this->m_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback != "" && this->isCustomExtend())
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
							jstring db_j = __env->NewString((const jchar*)db.getString(),db.size());
							jstring user_j = __env->NewString((const jchar*)user.getString(),user.size());
							jstring password_j = __env->NewString((const jchar*)password.getString(),password.size());
							jstring host_j = __env->NewString((const jchar*)host.getString(),host.size());
							jint port_j = (jint) port;
							jstring connOpts_j = __env->NewString((const jchar*)connOpts.getString(),connOpts.size());
							jmethodID __method = __gr->getMethod("open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , db_j, user_j, password_j, host_j, port_j, connOpts_j);
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
							return this->CSqlDriver::open(db, user, password, host, port, connOpts);
						}
					}
					virtual void close()
					{
						if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("close_void_callback");
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
							return this->CSqlDriver::close();
						}
					}
					virtual EarthView::World::Core::Database::CSqlResult* createResult() const
					{
						if (this->_gRef != NULL && this->m_createResult_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createResult_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::Database::CSqlResult *__values1 = (EarthView::World::Core::Database::CSqlResult*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSqlDriver::createResult();
						}
					}
					virtual ev_bool beginTransaction()
					{
						if (this->_gRef != NULL && this->m_beginTransaction_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("beginTransaction_void_callback");
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
							return this->CSqlDriver::beginTransaction();
						}
					}
					virtual ev_bool commitTransaction()
					{
						if (this->_gRef != NULL && this->m_commitTransaction_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("commitTransaction_void_callback");
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
							return this->CSqlDriver::commitTransaction();
						}
					}
					virtual ev_bool rollbackTransaction()
					{
						if (this->_gRef != NULL && this->m_rollbackTransaction_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("rollbackTransaction_void_callback");
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
							return this->CSqlDriver::rollbackTransaction();
						}
					}
					virtual ev_wstring sqlStatement(EarthView::World::Core::Database::CSqlDriver::EVStatementType type, const ev_wstring& tableName, const EarthView::World::Core::Database::CSqlRecord& rec, ev_bool preparedStatement) const
					{
						if (this->_gRef != NULL && this->m_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback != "" && this->isCustomExtend())
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
							jstring tableName_j = __env->NewString((const jchar*)tableName.getString(),tableName.size());
							jlong rec_j = (jlong) &rec;
							jboolean preparedStatement_j = (jboolean) preparedStatement;
							jmethodID __method = __gr->getMethod("sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , type_j, tableName_j, rec_j, preparedStatement_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_wchar* values_wch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							ev_wstring __values1 = values_wch;
							__env->ReleaseStringChars(__values1_j,(jchar*)values_wch);
							return __values1;
						}
						else
						{
							return this->CSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
						}
					}
					virtual ev_bool isIdentifierEscaped(const ev_wstring& identifier, EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const
					{
						if (this->_gRef != NULL && this->m_isIdentifierEscaped_ev_wstring_EVIdentifierType_callback != "" && this->isCustomExtend())
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
							jstring identifier_j = __env->NewString((const jchar*)identifier.getString(),identifier.size());
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("isIdentifierEscaped_ev_wstring_EVIdentifierType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , identifier_j, type_j);
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
							return this->CSqlDriver::isIdentifierEscaped(identifier, type);
						}
					}
					virtual ev_wstring escapeIdentifier(const ev_wstring& identifier, EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const
					{
						if (this->_gRef != NULL && this->m_escapeIdentifier_ev_wstring_EVIdentifierType_callback != "" && this->isCustomExtend())
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
							jstring identifier_j = __env->NewString((const jchar*)identifier.getString(),identifier.size());
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("escapeIdentifier_ev_wstring_EVIdentifierType_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , identifier_j, type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_wchar* values_wch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							ev_wstring __values1 = values_wch;
							__env->ReleaseStringChars(__values1_j,(jchar*)values_wch);
							return __values1;
						}
						else
						{
							return this->CSqlDriver::escapeIdentifier(identifier, type);
						}
					}
					virtual ev_wstring formatValue(const EarthView::World::Core::Database::CSqlField& field, ev_bool trimStrings) const
					{
						if (this->_gRef != NULL && this->m_formatValue_CSqlField_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong field_j = (jlong) &field;
							jboolean trimStrings_j = (jboolean) trimStrings;
							jmethodID __method = __gr->getMethod("formatValue_CSqlField_ev_bool_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , field_j, trimStrings_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_wchar* values_wch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							ev_wstring __values1 = values_wch;
							__env->ReleaseStringChars(__values1_j,(jchar*)values_wch);
							return __values1;
						}
						else
						{
							return this->CSqlDriver::formatValue(field, trimStrings);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSqlDriverProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_SqlDriver_00024EVDriverFeatureHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSqlDriver::DF_Transactions,
						CSqlDriver::DF_QuerySize,
						CSqlDriver::DF_BLOB,
						CSqlDriver::DF_Unicode,
						CSqlDriver::DF_PreparedQueries,
						CSqlDriver::DF_NamedPlaceholders,
						CSqlDriver::DF_PositionalPlaceholders,
						CSqlDriver::DF_LastInsertId,
						CSqlDriver::DF_BatchOperations,
						CSqlDriver::DF_SimpleLocking,
						CSqlDriver::DF_LowPrecisionNumbers,
						CSqlDriver::DF_EventNotifications,
						CSqlDriver::DF_FinishQuery,
						CSqlDriver::DF_MultipleResultSets
					};
					jintArray array = __env->NewIntArray(14);
					__env->SetIntArrayRegion(array, 0, 14, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_SqlDriver_00024EVStatementTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSqlDriver::ST_WhereStatement,
						CSqlDriver::ST_SelectStatement,
						CSqlDriver::ST_UpdateStatement,
						CSqlDriver::ST_InsertStatement,
						CSqlDriver::ST_DeleteStatement
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_SqlDriver_00024EVIdentifierTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSqlDriver::IT_FieldName,
						CSqlDriver::IT_TableName
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_handle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::handle();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1handle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_handle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::handle();
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_hasFeature_1EVDriverFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint f_j)
				{
					EarthView::World::Core::Database::CSqlDriver::EVDriverFeature f = (EarthView::World::Core::Database::CSqlDriver::EVDriverFeature) f_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::hasFeature(f);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasFeature(f);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1hasFeature_1EVDriverFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasFeature_EVDriverFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasFeature_EVDriverFeature_callback", "(I)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_hasFeature_1EVDriverFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint f_j)
				{
					EarthView::World::Core::Database::CSqlDriver::EVDriverFeature f = (EarthView::World::Core::Database::CSqlDriver::EVDriverFeature) f_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::hasFeature(f);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::isOpen();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isOpen();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1isOpen_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isOpen_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isOpen_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_isOpen_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::isOpen();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_isOpenError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpenError();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_lastError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::Database::CSqlError __values1 = pObjectX->lastError();
					EarthView::World::Core::Database::CSqlError *returnvalues = new EarthView::World::Core::Database::CSqlError(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_exist_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dbname_j)
				{
					const ev_wchar* dbname_wch = (const ev_wchar*)__env->GetStringChars(dbname_j,JNI_FALSE);
					const ev_wstring dbname = dbname_wch;
					__env->ReleaseStringChars(dbname_j,(jchar*)dbname_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::exist(dbname);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->exist(dbname);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1exist_1ev_1wstring(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exist_ev_wstring_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exist_ev_wstring_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_exist_1ev_1wstring_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dbname_j)
				{
					const ev_wchar* dbname_wch = (const ev_wchar*)__env->GetStringChars(dbname_j,JNI_FALSE);
					const ev_wstring dbname = dbname_wch;
					__env->ReleaseStringChars(dbname_j,(jchar*)dbname_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::exist(dbname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_tables_1EVTableType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tableType_j)
				{
					EarthView::World::Core::Database::EVTableType tableType = (EarthView::World::Core::Database::EVTableType) tableType_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						EarthView::World::Core::CWStringArray __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::tables(tableType);
						EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CWStringArray __values1 = pObjectX->tables(tableType);
						EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1tables_1EVTableType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_tables_EVTableType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"tables_EVTableType_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_tables_1EVTableType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tableType_j)
				{
					EarthView::World::Core::Database::EVTableType tableType = (EarthView::World::Core::Database::EVTableType) tableType_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::CWStringArray __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::tables(tableType);
					EarthView::World::Core::CWStringArray *returnvalues = new EarthView::World::Core::CWStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_primaryIndex_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tableName_j)
				{
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						EarthView::World::Core::Database::CSqlIndex __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::primaryIndex(tableName);
						EarthView::World::Core::Database::CSqlIndex *returnvalues = new EarthView::World::Core::Database::CSqlIndex(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::Database::CSqlIndex __values1 = pObjectX->primaryIndex(tableName);
						EarthView::World::Core::Database::CSqlIndex *returnvalues = new EarthView::World::Core::Database::CSqlIndex(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1primaryIndex_1ev_1wstring(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_primaryIndex_ev_wstring_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"primaryIndex_ev_wstring_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_primaryIndex_1ev_1wstring_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tableName_j)
				{
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::Database::CSqlIndex __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::primaryIndex(tableName);
					EarthView::World::Core::Database::CSqlIndex *returnvalues = new EarthView::World::Core::Database::CSqlIndex(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_record_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tableName_j)
				{
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						EarthView::World::Core::Database::CSqlRecord __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::record(tableName);
						EarthView::World::Core::Database::CSqlRecord *returnvalues = new EarthView::World::Core::Database::CSqlRecord(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::Database::CSqlRecord __values1 = pObjectX->record(tableName);
						EarthView::World::Core::Database::CSqlRecord *returnvalues = new EarthView::World::Core::Database::CSqlRecord(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1record_1ev_1wstring(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_record_ev_wstring_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"record_ev_wstring_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_record_1ev_1wstring_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tableName_j)
				{
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::Database::CSqlRecord __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::record(tableName);
					EarthView::World::Core::Database::CSqlRecord *returnvalues = new EarthView::World::Core::Database::CSqlRecord(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_open_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1int32_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring db_j, jstring user_j, jstring password_j, jstring host_j, jint port_j, jstring connOpts_j)
				{
					const ev_wchar* db_wch = (const ev_wchar*)__env->GetStringChars(db_j,JNI_FALSE);
					const ev_wstring db = db_wch;
					__env->ReleaseStringChars(db_j,(jchar*)db_wch);
					const ev_wchar* user_wch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
					const ev_wstring user = user_wch;
					__env->ReleaseStringChars(user_j,(jchar*)user_wch);
					const ev_wchar* password_wch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
					const ev_wstring password = password_wch;
					__env->ReleaseStringChars(password_j,(jchar*)password_wch);
					const ev_wchar* host_wch = (const ev_wchar*)__env->GetStringChars(host_j,JNI_FALSE);
					const ev_wstring host = host_wch;
					__env->ReleaseStringChars(host_j,(jchar*)host_wch);
					ev_int32 port = (ev_int32) port_j;
					const ev_wchar* connOpts_wch = (const ev_wchar*)__env->GetStringChars(connOpts_j,JNI_FALSE);
					const ev_wstring connOpts = connOpts_wch;
					__env->ReleaseStringChars(connOpts_j,(jchar*)connOpts_wch);
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::open(db, user, password, host, port, connOpts);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->open(db, user, password, host, port, connOpts);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1open_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1int32_1ev_1wstring(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"open_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_open_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1wstring_1ev_1int32_1ev_1wstring_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring db_j, jstring user_j, jstring password_j, jstring host_j, jint port_j, jstring connOpts_j)
				{
					const ev_wchar* db_wch = (const ev_wchar*)__env->GetStringChars(db_j,JNI_FALSE);
					const ev_wstring db = db_wch;
					__env->ReleaseStringChars(db_j,(jchar*)db_wch);
					const ev_wchar* user_wch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
					const ev_wstring user = user_wch;
					__env->ReleaseStringChars(user_j,(jchar*)user_wch);
					const ev_wchar* password_wch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
					const ev_wstring password = password_wch;
					__env->ReleaseStringChars(password_j,(jchar*)password_wch);
					const ev_wchar* host_wch = (const ev_wchar*)__env->GetStringChars(host_j,JNI_FALSE);
					const ev_wstring host = host_wch;
					__env->ReleaseStringChars(host_j,(jchar*)host_wch);
					ev_int32 port = (ev_int32) port_j;
					const ev_wchar* connOpts_wch = (const ev_wchar*)__env->GetStringChars(connOpts_j,JNI_FALSE);
					const ev_wstring connOpts = connOpts_wch;
					__env->ReleaseStringChars(connOpts_j,(jchar*)connOpts_wch);
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::open(db, user, password, host, port, connOpts);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						pObjectX->EarthView::World::Core::Database::CSqlDriver::close();
					}
					else
					{
						pObjectX->close();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_close_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					pObjectX->EarthView::World::Core::Database::CSqlDriver::close();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_createResult_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						EarthView::World::Core::Database::CSqlResult* __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::createResult();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::Database::CSqlResult* __values1 = pObjectX->createResult();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1createResult_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createResult_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createResult_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlDriver_createResult_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::Database::CSqlResult* __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::createResult();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_beginTransaction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::beginTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->beginTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1beginTransaction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_beginTransaction_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"beginTransaction_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_beginTransaction_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::beginTransaction();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_commitTransaction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::commitTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->commitTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1commitTransaction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_commitTransaction_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"commitTransaction_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_commitTransaction_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::commitTransaction();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_rollbackTransaction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::rollbackTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->rollbackTransaction();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1rollbackTransaction_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rollbackTransaction_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rollbackTransaction_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_rollbackTransaction_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::rollbackTransaction();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_sqlStatement_1EVStatementType_1ev_1wstring_1CSqlRecord_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jstring tableName_j, jlong rec_j, jboolean preparedStatement_j)
				{
					EarthView::World::Core::Database::CSqlDriver::EVStatementType type = (EarthView::World::Core::Database::CSqlDriver::EVStatementType) type_j;
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const EarthView::World::Core::Database::CSqlRecord &rec = *(EarthView::World::Core::Database::CSqlRecord*) rec_j;
					ev_bool preparedStatement = (ev_bool) preparedStatement_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
					else
					{
						ev_wstring __values1 = pObjectX->sqlStatement(type, tableName, rec, preparedStatement);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1sqlStatement_1EVStatementType_1ev_1wstring_1CSqlRecord_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"sqlStatement_EVStatementType_ev_wstring_CSqlRecord_ev_bool_callback", "(ILjava/lang/String;JZ)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_sqlStatement_1EVStatementType_1ev_1wstring_1CSqlRecord_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jstring tableName_j, jlong rec_j, jboolean preparedStatement_j)
				{
					EarthView::World::Core::Database::CSqlDriver::EVStatementType type = (EarthView::World::Core::Database::CSqlDriver::EVStatementType) type_j;
					const ev_wchar* tableName_wch = (const ev_wchar*)__env->GetStringChars(tableName_j,JNI_FALSE);
					const ev_wstring tableName = tableName_wch;
					__env->ReleaseStringChars(tableName_j,(jchar*)tableName_wch);
					const EarthView::World::Core::Database::CSqlRecord &rec = *(EarthView::World::Core::Database::CSqlRecord*) rec_j;
					ev_bool preparedStatement = (ev_bool) preparedStatement_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_isIdentifierEscaped_1ev_1wstring_1EVIdentifierType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring identifier_j, jint type_j)
				{
					const ev_wchar* identifier_wch = (const ev_wchar*)__env->GetStringChars(identifier_j,JNI_FALSE);
					const ev_wstring identifier = identifier_wch;
					__env->ReleaseStringChars(identifier_j,(jchar*)identifier_wch);
					EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type = (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType) type_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::isIdentifierEscaped(identifier, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isIdentifierEscaped(identifier, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1isIdentifierEscaped_1ev_1wstring_1EVIdentifierType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIdentifierEscaped_ev_wstring_EVIdentifierType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIdentifierEscaped_ev_wstring_EVIdentifierType_callback", "(Ljava/lang/String;I)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlDriver_isIdentifierEscaped_1ev_1wstring_1EVIdentifierType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring identifier_j, jint type_j)
				{
					const ev_wchar* identifier_wch = (const ev_wchar*)__env->GetStringChars(identifier_j,JNI_FALSE);
					const ev_wstring identifier = identifier_wch;
					__env->ReleaseStringChars(identifier_j,(jchar*)identifier_wch);
					EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type = (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType) type_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::isIdentifierEscaped(identifier, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_escapeIdentifier_1ev_1wstring_1EVIdentifierType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring identifier_j, jint type_j)
				{
					const ev_wchar* identifier_wch = (const ev_wchar*)__env->GetStringChars(identifier_j,JNI_FALSE);
					const ev_wstring identifier = identifier_wch;
					__env->ReleaseStringChars(identifier_j,(jchar*)identifier_wch);
					EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type = (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType) type_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::escapeIdentifier(identifier, type);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
					else
					{
						ev_wstring __values1 = pObjectX->escapeIdentifier(identifier, type);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1escapeIdentifier_1ev_1wstring_1EVIdentifierType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_escapeIdentifier_ev_wstring_EVIdentifierType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"escapeIdentifier_ev_wstring_EVIdentifierType_callback", "(Ljava/lang/String;I)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_escapeIdentifier_1ev_1wstring_1EVIdentifierType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring identifier_j, jint type_j)
				{
					const ev_wchar* identifier_wch = (const ev_wchar*)__env->GetStringChars(identifier_j,JNI_FALSE);
					const ev_wstring identifier = identifier_wch;
					__env->ReleaseStringChars(identifier_j,(jchar*)identifier_wch);
					EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type = (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType) type_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::escapeIdentifier(identifier, type);
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_formatValue_1CSqlField_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j, jboolean trimStrings_j)
				{
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					ev_bool trimStrings = (ev_bool) trimStrings_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSqlDriverProxy))
					{
						ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::formatValue(field, trimStrings);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
					else
					{
						ev_wstring __values1 = pObjectX->formatValue(field, trimStrings);
						jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_register_1formatValue_1CSqlField_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSqlDriverProxy *pObjectX = (JCSqlDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_formatValue_CSqlField_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"formatValue_CSqlField_ev_bool_callback", "(JZ)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlDriver_formatValue_1CSqlField_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j, jboolean trimStrings_j)
				{
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					ev_bool trimStrings = (ev_bool) trimStrings_j;
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					ev_wstring __values1 = pObjectX->EarthView::World::Core::Database::CSqlDriver::formatValue(field, trimStrings);
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlDriver_setNumericalPrecisionPolicy_1EVNumericalPrecisionPolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint precisionPolicy_j)
				{
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy precisionPolicy = (EarthView::World::Core::Database::EVNumericalPrecisionPolicy) precisionPolicy_j;
					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					pObjectX->setNumericalPrecisionPolicy(precisionPolicy);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlDriver_numericalPrecisionPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlDriver *pObjectX = (EarthView::World::Core::Database::CSqlDriver*) pObjXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy __values1 = pObjectX->numericalPrecisionPolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
