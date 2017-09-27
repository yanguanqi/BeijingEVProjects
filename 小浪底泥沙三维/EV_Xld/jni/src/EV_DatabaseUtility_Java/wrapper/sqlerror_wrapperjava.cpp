/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlerror.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_SqlError_00024EVErrorTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSqlError::ET_NoError,
						CSqlError::ET_ConnectionError,
						CSqlError::ET_StatementError,
						CSqlError::ET_TransactionError,
						CSqlError::ET_UnknownError
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlError_OperatorAssign_1CSqlError(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlError& pObjectX = *(EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlError &other = *(EarthView::World::Core::Database::CSqlError*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlError& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlError_driverText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->driverText();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlError_setDriverText_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring driverText_j)
				{
					const ev_wchar* driverText_wch = (const ev_wchar*)__env->GetStringChars(driverText_j,JNI_FALSE);
					const ev_wstring driverText = driverText_wch;
					__env->ReleaseStringChars(driverText_j,(jchar*)driverText_wch);
					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					pObjectX->setDriverText(driverText);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlError_databaseText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->databaseText();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlError_setDatabaseText_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring databaseText_j)
				{
					const ev_wchar* databaseText_wch = (const ev_wchar*)__env->GetStringChars(databaseText_j,JNI_FALSE);
					const ev_wstring databaseText = databaseText_wch;
					__env->ReleaseStringChars(databaseText_j,(jchar*)databaseText_wch);
					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					pObjectX->setDatabaseText(databaseText);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlError_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					EarthView::World::Core::Database::CSqlError::EVErrorType __values1 = pObjectX->type();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlError_setType_1EVErrorType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Core::Database::CSqlError::EVErrorType type = (EarthView::World::Core::Database::CSqlError::EVErrorType) type_j;
					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					pObjectX->setType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlError_number_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					int __values1 = pObjectX->number();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlError_setNumber_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint number_j)
				{
					int number = (int) number_j;
					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					pObjectX->setNumber(number);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_database_SqlError_text_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					ev_wstring __values1 = pObjectX->text();
					jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlError_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlError *pObjectX = (EarthView::World::Core::Database::CSqlError*) pObjXXXX;
					bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
