/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlquery.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_EVBatchExecutionModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						ValuesAsRows,
						ValuesAsColumns
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_OperatorAssign_1CSqlQuery(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlQuery& pObjectX = *(EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlQuery &other = *(EarthView::World::Core::Database::CSqlQuery*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlQuery& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_bindValue_1ev_1wstring_1CVariant_1EVParamType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring placeholder_j, jlong val_j, jint type_j)
				{
					const ev_wchar* placeholder_wch = (const ev_wchar*)__env->GetStringChars(placeholder_j,JNI_FALSE);
					const ev_wstring placeholder = placeholder_wch;
					__env->ReleaseStringChars(placeholder_j,(jchar*)placeholder_wch);
					const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
					EarthView::World::Core::Database::EVParamType type = (EarthView::World::Core::Database::EVParamType) type_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->bindValue(placeholder, val, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_bindValue_1ev_1int32_1CVariant_1EVParamType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j, jlong val_j, jint type_j)
				{
					ev_int32 pos = (ev_int32) pos_j;
					const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
					EarthView::World::Core::Database::EVParamType type = (EarthView::World::Core::Database::EVParamType) type_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->bindValue(pos, val, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_addBindValue_1CVariant_1EVParamType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jint type_j)
				{
					const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
					EarthView::World::Core::Database::EVParamType type = (EarthView::World::Core::Database::EVParamType) type_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->addBindValue(val, type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_boundValue_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring placeholder_j)
				{
					const ev_wchar* placeholder_wch = (const ev_wchar*)__env->GetStringChars(placeholder_j,JNI_FALSE);
					const ev_wstring placeholder = placeholder_wch;
					__env->ReleaseStringChars(placeholder_j,(jchar*)placeholder_wch);
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->boundValue(placeholder);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_boundValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
				{
					ev_int32 pos = (ev_int32) pos_j;
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->boundValue(pos);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_driver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlDriver* __values1 = pObjectX->driver();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_exec_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring query_j)
				{
					const ev_wchar* query_wch = (const ev_wchar*)__env->GetStringChars(query_j,JNI_FALSE);
					const ev_wstring query = query_wch;
					__env->ReleaseStringChars(query_j,(jchar*)query_wch);
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->exec(query);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_exec_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->exec();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_execBatch_1EVBatchExecutionMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Core::Database::EVBatchExecutionMode mode = (EarthView::World::Core::Database::EVBatchExecutionMode) mode_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					bool __values1 = pObjectX->execBatch(mode);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlQuery_executedQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_wstring __values1 = pObjectX->executedQuery();
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_finish_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->finish();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_first_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->first();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_last_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->last();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->next();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_previous_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->previous();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_isActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->isActive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_isForwardOnly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->isForwardOnly();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_seek_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jboolean relative_j)
				{
					ev_int32 index = (ev_int32) index_j;
					ev_bool relative = (ev_bool) relative_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->seek(index, relative);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_result_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlResult* __values1 = pObjectX->result();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_record_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::Database::CSqlRecord __values1 = pObjectX->record();
					EarthView::World::Core::Database::CSqlRecord *returnvalues = new EarthView::World::Core::Database::CSqlRecord(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_value_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->value(i);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlQuery_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_int32 __values1 = pObjectX->size();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_isNull_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint field_j)
				{
					ev_int32 field = (ev_int32) field_j;
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNull(field);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlQuery_at_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_int32 __values1 = pObjectX->at();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_isSelect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSelect();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_setForwardOnly_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forward_j)
				{
					ev_bool forward = (ev_bool) forward_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->setForwardOnly(forward);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_prepare_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring query_j)
				{
					const ev_wchar* query_wch = (const ev_wchar*)__env->GetStringChars(query_j,JNI_FALSE);
					const ev_wstring query = query_wch;
					__env->ReleaseStringChars(query_j,(jchar*)query_wch);
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->prepare(query);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlQuery_lastInsertId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->lastInsertId();
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlQuery_numRowsAffected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_int32 __values1 = pObjectX->numRowsAffected();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlQuery_setNumericalPrecisionPolicy_1EVNumericalPrecisionPolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint precisionPolicy_j)
				{
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy precisionPolicy = (EarthView::World::Core::Database::EVNumericalPrecisionPolicy) precisionPolicy_j;
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					pObjectX->setNumericalPrecisionPolicy(precisionPolicy);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlQuery_numericalPrecisionPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy __values1 = pObjectX->numericalPrecisionPolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlQuery_nextResult_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlQuery *pObjectX = (EarthView::World::Core::Database::CSqlQuery*) pObjXXXX;
					ev_bool __values1 = pObjectX->nextResult();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
