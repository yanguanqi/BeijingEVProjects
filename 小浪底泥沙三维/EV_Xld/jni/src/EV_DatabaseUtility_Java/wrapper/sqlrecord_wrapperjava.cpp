/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlrecord.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlRecord_OperatorAssign_1CSqlRecord(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlRecord& pObjectX = *(EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlRecord &other = *(EarthView::World::Core::Database::CSqlRecord*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlRecord& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_OperatorEquals_1CSqlRecord(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlRecord& pObjectX = *(EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlRecord &other = *(EarthView::World::Core::Database::CSqlRecord*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_OperatorNotEquals_1CSqlRecord(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlRecord& pObjectX = *(EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlRecord &other = *(EarthView::World::Core::Database::CSqlRecord*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlRecord_value_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->value(i);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlRecord_value_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->value(name);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setValue_1ev_1int32_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j, jlong val_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setValue(i, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setValue_1ev_1wstring_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const EarthView::World::Core::CVariant &val = *(EarthView::World::Core::CVariant*) val_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setValue(name, val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setNull_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setNull(i);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setNull_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setNull(name);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_isNull_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNull(i);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_isNull_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNull(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlRecord_indexOf_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_int32 __values1 = pObjectX->indexOf(name);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlRecord_fieldName_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_wstring __values1 = pObjectX->fieldName(i);
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlRecord_field_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					EarthView::World::Core::Database::CSqlField __values1 = pObjectX->field(i);
					EarthView::World::Core::Database::CSqlField *returnvalues = new EarthView::World::Core::Database::CSqlField(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlRecord_field_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					EarthView::World::Core::Database::CSqlField __values1 = pObjectX->field(name);
					EarthView::World::Core::Database::CSqlField *returnvalues = new EarthView::World::Core::Database::CSqlField(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_isGenerated_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->isGenerated(i);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_isGenerated_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->isGenerated(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setGenerated_1ev_1wstring_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean generated_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					ev_bool generated = (ev_bool) generated_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setGenerated(name, generated);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_setGenerated_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j, jboolean generated_j)
				{
					ev_int32 i = (ev_int32) i_j;
					ev_bool generated = (ev_bool) generated_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->setGenerated(i, generated);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_append_1CSqlField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->append(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_replace_1ev_1int32_1CSqlField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j, jlong field_j)
				{
					ev_int32 pos = (ev_int32) pos_j;
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->replace(pos, field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_insert_1ev_1int32_1CSqlField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j, jlong field_j)
				{
					ev_int32 pos = (ev_int32) pos_j;
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->insert(pos, field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_remove_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pos_j)
				{
					ev_int32 pos = (ev_int32) pos_j;
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->isEmpty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlRecord_contains_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_bool __values1 = pObjectX->contains(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlRecord_clearValues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					pObjectX->clearValues();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlRecord_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlRecord *pObjectX = (EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					ev_int32 __values1 = pObjectX->count();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
