/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlindex.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlIndex_OperatorAssign_1CSqlIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlIndex& pObjectX = *(EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlIndex &other = *(EarthView::World::Core::Database::CSqlIndex*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlIndex& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlIndex_setCursorName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cursorName_j)
				{
					const ev_wchar* cursorName_wch = (const ev_wchar*)__env->GetStringChars(cursorName_j,JNI_FALSE);
					const ev_wstring cursorName = cursorName_wch;
					__env->ReleaseStringChars(cursorName_j,(jchar*)cursorName_wch);
					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					pObjectX->setCursorName(cursorName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlIndex_cursorName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->cursorName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlIndex_setName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlIndex_name_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->name();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlIndex_append_1CSqlField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					pObjectX->append(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlIndex_append_1CSqlField_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j, jboolean desc_j)
				{
					const EarthView::World::Core::Database::CSqlField &field = *(EarthView::World::Core::Database::CSqlField*) field_j;
					ev_bool desc = (ev_bool) desc_j;
					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					pObjectX->append(field, desc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlIndex_isDescending_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j)
				{
					ev_int32 i = (ev_int32) i_j;
					const 					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDescending(i);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlIndex_setDescending_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint i_j, jboolean desc_j)
				{
					ev_int32 i = (ev_int32) i_j;
					ev_bool desc = (ev_bool) desc_j;
					EarthView::World::Core::Database::CSqlIndex *pObjectX = (EarthView::World::Core::Database::CSqlIndex*) pObjXXXX;
					pObjectX->setDescending(i, desc);
				}
			}
		}
	}
}
