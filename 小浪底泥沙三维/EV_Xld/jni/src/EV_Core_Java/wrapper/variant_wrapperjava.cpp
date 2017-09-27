/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/variant.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_Variant_00024EVDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CVariant::DT_Unknown,
					CVariant::DT_Bool,
					CVariant::DT_UInt32,
					CVariant::DT_Int32,
					CVariant::DT_UInt64,
					CVariant::DT_Int64,
					CVariant::DT_Real32,
					CVariant::DT_Real64,
					CVariant::DT_String,
					CVariant::DT_WString,
					CVariant::DT_Time,
					CVariant::DT_MemoryDataStream,
					CVariant::DT_UserType
				};
				jintArray array = __env->NewIntArray(13);
				__env->SetIntArrayRegion(array, 0, 13, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Variant_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				EarthView::World::Core::CVariant::EVDataType __values1 = pObjectX->type();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_data_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				void* __values1 = pObjectX->data();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_constData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				const void* __values1 = pObjectX->constData();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_toBool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_bool __values1 = pObjectX->toBool(ok);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_toBool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_bool __values1 = pObjectX->toBool();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Variant_toInt32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_int32 __values1 = pObjectX->toInt32(ok);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Variant_toInt32_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_int32 __values1 = pObjectX->toInt32();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toUInt32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->toUInt32(ok);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toUInt32_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->toUInt32();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toInt64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_int64 __values1 = pObjectX->toInt64(ok);
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toInt64_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_int64 __values1 = pObjectX->toInt64();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Variant_toUInt64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->toUInt64(ok);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Variant_toUInt64_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->toUInt64();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_core_Variant_toReal32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_real32 __values1 = pObjectX->toReal32(ok);
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_core_Variant_toReal32_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_real32 __values1 = pObjectX->toReal32();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_Variant_toReal64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
			{
				ev_bool *ok = (ev_bool*) ok_j;
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_real64 __values1 = pObjectX->toReal64(ok);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_core_Variant_toReal64_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_real64 __values1 = pObjectX->toReal64();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toDateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->toDateTime();
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Variant_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_string __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_Variant_toWString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				ev_wstring __values1 = pObjectX->toWString();
				jstring __values1_j = __env->NewString((const jchar*)__values1.getString(),__values1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_toDataStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->toDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromBool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromBool(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromInt32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromInt32(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromUInt32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromUInt32(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromInt64_1ev_1int64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				ev_int64 val = (ev_int64) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromInt64(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromUInt64_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				ev_uint64 val = *(ev_uint64*) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromUInt64(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromReal32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat val_j)
			{
				ev_real32 val = (ev_real32) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromReal32(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromReal64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				ev_real64 val = (ev_real64) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromReal64(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromDateTime_1CCoreTime(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Core::CCoreTime &val = *(EarthView::World::Core::CCoreTime*) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromDateTime(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromString_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const ev_string val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const ev_string val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromString(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromWString_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring val_j)
			{
				const ev_wchar* val_wch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const ev_wstring val = val_wch;
				__env->ReleaseStringChars(val_j,(jchar*)val_wch);
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromWString(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromDataStream_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Core::MemoryDataStreamPtr &val = *(EarthView::World::Core::MemoryDataStreamPtr*) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromDataStream(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromCharString_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_char *val = (const ev_char*) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromCharString(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Variant_fromWCharString_1ev_1wchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_wchar *val = (const ev_wchar*) val_j;
				EarthView::World::Core::CVariant *pObjectX = (EarthView::World::Core::CVariant*) pObjXXXX;
				pObjectX->fromWCharString(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Variant_OperatorAssign_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CVariant& pObjectX = *(EarthView::World::Core::CVariant*) pObjXXXX;
				const EarthView::World::Core::CVariant &other = *(EarthView::World::Core::CVariant*) other_j;
				pObjectX = other;
				EarthView::World::Core::CVariant& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_OperatorEquals_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CVariant& pObjectX = *(EarthView::World::Core::CVariant*) pObjXXXX;
				const EarthView::World::Core::CVariant &other = *(EarthView::World::Core::CVariant*) other_j;
				ev_bool __values1 = (pObjectX == other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Variant_OperatorNotEquals_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CVariant& pObjectX = *(EarthView::World::Core::CVariant*) pObjXXXX;
				const EarthView::World::Core::CVariant &other = *(EarthView::World::Core::CVariant*) other_j;
				ev_bool __values1 = (pObjectX != other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_VariantArray_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_int32 __values1 = pObjectX->count();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_at_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_int32 index = (ev_int32) index_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->at(index);
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_take_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_int32 index = (ev_int32) index_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->take(index);
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_VariantArray_find_1CVariant_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong var_j, jlong from_j)
			{
				EarthView::World::Core::CVariant var = *(EarthView::World::Core::CVariant*) var_j;
				ev_uint32 from = (ev_uint32) from_j;
				const 				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_int32 __values1 = pObjectX->find(var, from);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_VariantArray_find_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong var_j)
			{
				EarthView::World::Core::CVariant var = *(EarthView::World::Core::CVariant*) var_j;
				const 				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_int32 __values1 = pObjectX->find(var);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_prepend_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong var_j)
			{
				EarthView::World::Core::CVariant var = *(EarthView::World::Core::CVariant*) var_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->prepend(var);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_insert_1ev_1int32_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong var_j)
			{
				ev_int32 index = (ev_int32) index_j;
				EarthView::World::Core::CVariant var = *(EarthView::World::Core::CVariant*) var_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->insert(index, var);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_append_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong var_j)
			{
				EarthView::World::Core::CVariant var = *(EarthView::World::Core::CVariant*) var_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->append(var);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_append_1CVariantArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Core::CVariantArray &other = *(EarthView::World::Core::CVariantArray*) other_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->append(other);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_erase_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_int32 index = (ev_int32) index_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->erase(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_swap_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint first_j, jint second_j)
			{
				ev_int32 first = (ev_int32) first_j;
				ev_int32 second = (ev_int32) second_j;
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->swap(first, second);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_VariantArray_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEmpty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_VariantArray_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CVariantArray *pObjectX = (EarthView::World::Core::CVariantArray*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_OperatorAssign_1CVariantArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CVariantArray& pObjectX = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				const EarthView::World::Core::CVariantArray &other = *(EarthView::World::Core::CVariantArray*) other_j;
				pObjectX = other;
				EarthView::World::Core::CVariantArray& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_OperatorPlus_1CVariantArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CVariantArray& pObjectX = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				const EarthView::World::Core::CVariantArray &other = *(EarthView::World::Core::CVariantArray*) other_j;
				EarthView::World::Core::CVariantArray __values1 = pObjectX + (other);
				EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_OperatorIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint i_j )
			{
				EarthView::World::Core::CVariantArray& pObjectX = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_int32 i = (ev_int32) i_j;
				EarthView::World::Core::CVariant& __values1 = pObjectX[i];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_VariantArray_OperatorIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
			{
				EarthView::World::Core::CVariantArray& pObjectX = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				ev_uint32 i = (ev_uint32) i_j;
				EarthView::World::Core::CVariant& __values1 = pObjectX[i];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
