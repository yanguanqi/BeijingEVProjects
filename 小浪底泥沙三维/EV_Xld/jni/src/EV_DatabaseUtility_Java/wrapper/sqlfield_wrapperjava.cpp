/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlfield.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_database_SqlField_00024EVRequiredStatusHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSqlField::RS_Unknown,
						CSqlField::RS_Optional,
						CSqlField::RS_Required
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlField_OperatorAssign_1CSqlField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlField& pObjectX = *(EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlField &other = *(EarthView::World::Core::Database::CSqlField*) other_j;
					pObjectX = other;
					EarthView::World::Core::Database::CSqlField& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_OperatorEquals_1CSqlField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlField& pObjectX = *(EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlField &other = *(EarthView::World::Core::Database::CSqlField*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_OperatorNotEquals_1CSqlField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Core::Database::CSqlField& pObjectX = *(EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlField &other = *(EarthView::World::Core::Database::CSqlField*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setValue_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setValue(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlField_value_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->value();
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setName_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					const ev_wchar* name_wch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const ev_wstring name = name_wch;
					__env->ReleaseStringChars(name_j,(jchar*)name_wch);
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlField_name_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const ev_wstring& __values1 = pObjectX->name();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNull();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setReadOnly_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean readOnly_j)
				{
					ev_bool readOnly = (ev_bool) readOnly_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setReadOnly(readOnly);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_isReadOnly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_bool __values1 = pObjectX->isReadOnly();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlField_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					EarthView::World::Core::CVariant::EVDataType __values1 = pObjectX->type();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_isAutoValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAutoValue();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setType_1EVDataType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Core::CVariant::EVDataType type = (EarthView::World::Core::CVariant::EVDataType) type_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setRequiredStatus_1EVRequiredStatus(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint status_j)
				{
					EarthView::World::Core::Database::CSqlField::EVRequiredStatus status = (EarthView::World::Core::Database::CSqlField::EVRequiredStatus) status_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setRequiredStatus(status);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setRequired_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean required_j)
				{
					ev_bool required = (ev_bool) required_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setRequired(required);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setLength_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint fieldLength_j)
				{
					ev_int32 fieldLength = (ev_int32) fieldLength_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setLength(fieldLength);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setPrecision_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint precision_j)
				{
					ev_int32 precision = (ev_int32) precision_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setPrecision(precision);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setDefaultValue_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setDefaultValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setSqlType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setSqlType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setGenerated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean gen_j)
				{
					ev_bool gen = (ev_bool) gen_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setGenerated(gen);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_database_SqlField_setAutoValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoVal_j)
				{
					ev_bool autoVal = (ev_bool) autoVal_j;
					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					pObjectX->setAutoValue(autoVal);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlField_RequiredStatus_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					EarthView::World::Core::Database::CSqlField::EVRequiredStatus __values1 = pObjectX->RequiredStatus();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlField_length_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_int32 __values1 = pObjectX->length();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_database_SqlField_precision_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_int32 __values1 = pObjectX->precision();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_database_SqlField_defaultValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->defaultValue();
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_isGenerated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_bool __values1 = pObjectX->isGenerated();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_database_SqlField_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Core::Database::CSqlField *pObjectX = (EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
