/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogramparams.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuConstantTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GCT_FLOAT1,
					GCT_FLOAT2,
					GCT_FLOAT3,
					GCT_FLOAT4,
					GCT_SAMPLER1D,
					GCT_SAMPLER2D,
					GCT_SAMPLER3D,
					GCT_SAMPLERCUBE,
					GCT_SAMPLER1DSHADOW,
					GCT_SAMPLER2DSHADOW,
					GCT_SAMPLER2DARRAY,
					GCT_MATRIX_2X2,
					GCT_MATRIX_2X3,
					GCT_MATRIX_2X4,
					GCT_MATRIX_3X2,
					GCT_MATRIX_3X3,
					GCT_MATRIX_3X4,
					GCT_MATRIX_4X2,
					GCT_MATRIX_4X3,
					GCT_MATRIX_4X4,
					GCT_INT1,
					GCT_INT2,
					GCT_INT3,
					GCT_INT4,
					GCT_UNKNOWN
				};
				jintArray array = __env->NewIntArray(25);
				__env->SetIntArrayRegion(array, 0, 25, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuParamVariabilityHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GPV_GLOBAL,
					GPV_PER_OBJECT,
					GPV_LIGHTS,
					GPV_PASS_ITERATION_NUMBER,
					GPV_ALL
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuProgramTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GPT_VERTEX_PROGRAM,
					GPT_FRAGMENT_PROGRAM,
					GPT_GEOMETRY_PROGRAM
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1constType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->constType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1constType_1GpuConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->constType = (EarthView::World::Graphic::GpuConstantType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1physicalIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->physicalIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1physicalIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->physicalIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1logicalIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->logicalIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1logicalIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->logicalIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1elementSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->elementSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1elementSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->elementSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1arraySize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->arraySize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1arraySize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->arraySize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_get_1variability_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->variability);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_set_1variability_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*)pObjXXXX;
				pObjectX->variability = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_isFloat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*) pObjXXXX;
				ev_bool __values1 = pObjectX->isFloat();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_isFloat_1GpuConstantType(JNIEnv *__env , jclass __clazz, jint c_j)
			{
				EarthView::World::Graphic::GpuConstantType c = (EarthView::World::Graphic::GpuConstantType) c_j;
				ev_bool __values1 = EarthView::World::Graphic::GpuConstantDefinition::isFloat(c);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_isSampler_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinition *pObjectX = (EarthView::World::Graphic::GpuConstantDefinition*) pObjXXXX;
				ev_bool __values1 = pObjectX->isSampler();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_isSampler_1GpuConstantType(JNIEnv *__env , jclass __clazz, jint c_j)
			{
				EarthView::World::Graphic::GpuConstantType c = (EarthView::World::Graphic::GpuConstantType) c_j;
				ev_bool __values1 = EarthView::World::Graphic::GpuConstantDefinition::isSampler(c);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinition_getElementSize_1GpuConstantType_1ev_1bool(JNIEnv *__env , jclass __clazz, jint ctype_j, jboolean padToMultiplesOf4_j)
			{
				EarthView::World::Graphic::GpuConstantType ctype = (EarthView::World::Graphic::GpuConstantType) ctype_j;
				ev_bool padToMultiplesOf4 = (ev_bool) padToMultiplesOf4_j;
				ev_size_t __values1 = EarthView::World::Graphic::GpuConstantDefinition::getElementSize(ctype, padToMultiplesOf4);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_push_1EVString_1GpuConstantDefinition(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::GpuConstantDefinition &val = *(EarthView::World::Graphic::GpuConstantDefinition*) val_j;
				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::GpuConstantDefinitionMap& pObjectX = *(EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::GpuConstantDefinition& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinition& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinitionMap *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionPair_set_1second_1GpuConstantDefinition(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuConstantDefinitionPair *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::GpuConstantDefinition*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinition __values1 = pObjectX->nextValue();
				EarthView::World::Graphic::GpuConstantDefinition *returnvalues = new EarthView::World::Graphic::GpuConstantDefinition(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinition* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinition __values1 = pObjectX->next();
				EarthView::World::Graphic::GpuConstantDefinition *returnvalues = new EarthView::World::Graphic::GpuConstantDefinition(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuConstantDefinitionIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuConstantDefinitionIterator *pObjectX = (EarthView::World::Graphic::GpuConstantDefinitionIterator*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinitionPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_get_1floatBufferSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->floatBufferSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_set_1floatBufferSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				pObjectX->floatBufferSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_get_1intBufferSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->intBufferSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_set_1intBufferSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				pObjectX->intBufferSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_get_1map_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->map);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_set_1map_1GpuConstantDefinitionMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*)pObjXXXX;
				pObjectX->map = *(EarthView::World::Graphic::GpuConstantDefinitionMap*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_generateConstantDefinitionArrayEntries_1EVString_1GpuConstantDefinition(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring paramName_j, jlong baseDef_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* paramName_ch = (const ev_char*)__env->GetStringUTFChars(paramName_j,JNI_FALSE);
				const EVString paramName = paramName_ch;
				__env->ReleaseStringUTFChars(paramName_j, (const char *)paramName_ch);
				#else
				const ev_wchar* paramName_ch = (const ev_wchar*)__env->GetStringChars(paramName_j,JNI_FALSE);
				const EVString paramName = paramName_ch;
				__env->ReleaseStringChars(paramName_j, (const jchar *)paramName_ch);
				#endif
				const EarthView::World::Graphic::GpuConstantDefinition &baseDef = *(EarthView::World::Graphic::GpuConstantDefinition*) baseDef_j;
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*) pObjXXXX;
				pObjectX->generateConstantDefinitionArrayEntries(paramName, baseDef);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_getGenerateAllConstantDefinitionArrayEntries_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Graphic::GpuNamedConstants::getGenerateAllConstantDefinitionArrayEntries();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_setGenerateAllConstantDefinitionArrayEntries_1ev_1bool(JNIEnv *__env , jclass __clazz, jboolean generateAll_j)
			{
				ev_bool generateAll = (ev_bool) generateAll_j;
				EarthView::World::Graphic::GpuNamedConstants::setGenerateAllConstantDefinitionArrayEntries(generateAll);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_save_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*) pObjXXXX;
				pObjectX->save(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstants_load_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::GpuNamedConstants *pObjectX = (EarthView::World::Graphic::GpuNamedConstants*) pObjXXXX;
				pObjectX->load(stream);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuNamedConstantsPtr *pObjectX = (EarthView::World::Graphic::GpuNamedConstantsPtr*) pObjXXXX;
				EarthView::World::Graphic::GpuNamedConstants* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCGpuNamedConstantsSerializerProxy : public EarthView::World::Graphic::CGpuNamedConstantsSerializer
			{
			 private:
				EarthView::World::Core::ev_string m_writeFileHeader_void_callback;
				EarthView::World::Core::ev_string m_writeChunkHeader_ev_uint16_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readFileHeader_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_readChunk_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipToLittleEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipFromLittleEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_determineEndianness_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_determineEndianness_Endian_callback;
			public:
				JCGpuNamedConstantsSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuNamedConstantsSerializer(pList)
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
				void register_writeFileHeader_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeFileHeader_void_callback = __method;
				}
				void register_writeChunkHeader_ev_uint16_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkHeader_ev_uint16_ev_size_t_callback = __method;
				}
				void register_readFileHeader_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readFileHeader_DataStreamPtr_callback = __method;
				}
				void register_readChunk_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunk_DataStreamPtr_callback = __method;
				}
				void register_flipToLittleEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipToLittleEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipToLittleEndian_void_ev_size_t_callback = __method;
				}
				void register_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipFromLittleEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipFromLittleEndian_void_ev_size_t_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_callback = __method;
				}
				void register_determineEndianness_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_determineEndianness_DataStreamPtr_callback = __method;
				}
				void register_determineEndianness_Endian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_determineEndianness_Endian_callback = __method;
				}
				virtual void writeFileHeader()
				{
					if (this->_gRef != NULL && this->m_writeFileHeader_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("writeFileHeader_void_callback");
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
						return this->CGpuNamedConstantsSerializer::writeFileHeader();
					}
				}
				virtual void writeChunkHeader(ev_uint16 id, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_writeChunkHeader_ev_uint16_ev_size_t_callback != "" && this->isCustomExtend())
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
						jint id_j = (jint) id;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("writeChunkHeader_ev_uint16_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , id_j, size_j);
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
						return this->CGpuNamedConstantsSerializer::writeChunkHeader(id, size);
					}
				}
				virtual void readFileHeader(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_readFileHeader_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jlong stream_j = (jlong) &stream;
						jmethodID __method = __gr->getMethod("readFileHeader_DataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , stream_j);
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
						return this->CGpuNamedConstantsSerializer::readFileHeader(stream);
					}
				}
				virtual ev_uint16 readChunk(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_readChunk_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jlong stream_j = (jlong) &stream;
						jmethodID __method = __gr->getMethod("readChunk_DataStreamPtr_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , stream_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuNamedConstantsSerializer::readChunk(stream);
					}
				}
				virtual void flipToLittleEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j, count_j);
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
						return this->CGpuNamedConstantsSerializer::flipToLittleEndian(pData, size, count);
					}
				}
				virtual void flipToLittleEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipToLittleEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("flipToLittleEndian_void_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j);
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
						return this->CGpuNamedConstantsSerializer::flipToLittleEndian(pData, size);
					}
				}
				virtual void flipFromLittleEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j, count_j);
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
						return this->CGpuNamedConstantsSerializer::flipFromLittleEndian(pData, size, count);
					}
				}
				virtual void flipFromLittleEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipFromLittleEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("flipFromLittleEndian_void_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j);
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
						return this->CGpuNamedConstantsSerializer::flipFromLittleEndian(pData, size);
					}
				}
				virtual void flipEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("flipEndian_void_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j, count_j);
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
						return this->CGpuNamedConstantsSerializer::flipEndian(pData, size, count);
					}
				}
				virtual void flipEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("flipEndian_void_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j);
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
						return this->CGpuNamedConstantsSerializer::flipEndian(pData, size);
					}
				}
				virtual void determineEndianness(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_determineEndianness_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jlong stream_j = (jlong) &stream;
						jmethodID __method = __gr->getMethod("determineEndianness_DataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , stream_j);
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
						return this->CGpuNamedConstantsSerializer::determineEndianness(stream);
					}
				}
				virtual void determineEndianness(EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if (this->_gRef != NULL && this->m_determineEndianness_Endian_callback != "" && this->isCustomExtend())
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
						jint requestedEndian_j = (jint) requestedEndian;
						jmethodID __method = __gr->getMethod("determineEndianness_Endian_callback");
						__env->CallVoidMethod(__obj, __method , requestedEndian_j);
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
						return this->CGpuNamedConstantsSerializer::determineEndianness(requestedEndian);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGpuNamedConstantsSerializerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_exportNamedConstants_1GpuNamedConstants_1EVString_1Endian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pConsts_j, jstring filename_j, jint endianMode_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants *pConsts = (const EarthView::World::Graphic::GpuNamedConstants*) pConsts_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CSerializer::Endian endianMode = (EarthView::World::Graphic::CSerializer::Endian) endianMode_j;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer *pObjectX = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjXXXX;
				pObjectX->exportNamedConstants(pConsts, filename, endianMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_exportNamedConstants_1GpuNamedConstants_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pConsts_j, jstring filename_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants *pConsts = (const EarthView::World::Graphic::GpuNamedConstants*) pConsts_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CGpuNamedConstantsSerializer *pObjectX = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjXXXX;
				pObjectX->exportNamedConstants(pConsts, filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_exportNamedConstants_1GpuNamedConstants_1DataStreamPtr_1Endian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pConsts_j, jlong stream_j, jint endianMode_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants *pConsts = (const EarthView::World::Graphic::GpuNamedConstants*) pConsts_j;
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CSerializer::Endian endianMode = (EarthView::World::Graphic::CSerializer::Endian) endianMode_j;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer *pObjectX = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjXXXX;
				pObjectX->exportNamedConstants(pConsts, stream, endianMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_exportNamedConstants_1GpuNamedConstants_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pConsts_j, jlong stream_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants *pConsts = (const EarthView::World::Graphic::GpuNamedConstants*) pConsts_j;
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer *pObjectX = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjXXXX;
				pObjectX->exportNamedConstants(pConsts, stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_importNamedConstants_1DataStreamPtr_1GpuNamedConstants(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pDest_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::GpuNamedConstants *pDest = (EarthView::World::Graphic::GpuNamedConstants*) pDest_j;
				EarthView::World::Graphic::CGpuNamedConstantsSerializer *pObjectX = (EarthView::World::Graphic::CGpuNamedConstantsSerializer*) pObjXXXX;
				pObjectX->importNamedConstants(stream, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1writeFileHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeFileHeader_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeFileHeader_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1writeChunkHeader_1ev_1uint16_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkHeader_ev_uint16_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkHeader_ev_uint16_ev_size_t_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1readFileHeader_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readFileHeader_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readFileHeader_DataStreamPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1readChunk_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunk_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunk_DataStreamPtr_callback", "(J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipToLittleEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipToLittleEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipToLittleEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipToLittleEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipFromLittleEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipFromLittleEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipFromLittleEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1determineEndianness_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_determineEndianness_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"determineEndianness_DataStreamPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuNamedConstantsSerializer_register_1determineEndianness_1Endian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuNamedConstantsSerializerProxy *pObjectX = (JCGpuNamedConstantsSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_determineEndianness_Endian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"determineEndianness_Endian_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_get_1physicalIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->physicalIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_set_1physicalIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				pObjectX->physicalIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_get_1currentSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->currentSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_set_1currentSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				pObjectX->currentSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_get_1variability_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->variability);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUse_set_1variability_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::GpuLogicalIndexUse *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUse*)pObjXXXX;
				pObjectX->variability = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_push_1ev_1size_1t_1GpuLogicalIndexUse(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::GpuLogicalIndexUse &val = *(EarthView::World::Graphic::GpuLogicalIndexUse*) val_j;
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_exist_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong key_j )
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap& pObjectX = *(EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::GpuLogicalIndexUse& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_get_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				EarthView::World::Graphic::GpuLogicalIndexUse& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				const ev_size_t key = (const ev_size_t) key_j;
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuLogicalIndexUseMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuLogicalIndexUseMap *pObjectX = (EarthView::World::Graphic::GpuLogicalIndexUseMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalBufferStruct_get_1map_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct *pObjectX = (EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->map);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalBufferStruct_set_1map_1GpuLogicalIndexUseMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct *pObjectX = (EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjXXXX;
				pObjectX->map = *(EarthView::World::Graphic::GpuLogicalIndexUseMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalBufferStruct_get_1bufferSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct *pObjectX = (EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->bufferSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuLogicalBufferStruct_set_1bufferSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::GpuLogicalBufferStruct *pObjectX = (EarthView::World::Graphic::GpuLogicalBufferStruct*)pObjXXXX;
				pObjectX->bufferSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuLogicalBufferStructPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuLogicalBufferStructPtr *pObjectX = (EarthView::World::Graphic::GpuLogicalBufferStructPtr*) pObjXXXX;
				EarthView::World::Graphic::GpuLogicalBufferStruct* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_push_1back_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat t_j)
			{
				ev_real32 t = (ev_real32) t_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatConstantList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_real32& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatConstantList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_real32& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_insert_1ev_1uint32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jfloat t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_real32 t = (ev_real32) t_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FloatConstantList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatConstantList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::FloatConstantList& pObjectX = *(EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_real32& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatConstantList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_real32& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FloatConstantList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatConstantList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FloatConstantList *pObjectX = (EarthView::World::Graphic::FloatConstantList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_push_1back_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				ev_int32 t = (ev_int32) t_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntConstantList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_int32& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntConstantList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_int32& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_insert_1ev_1uint32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_int32 t = (ev_int32) t_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IntConstantList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntConstantList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::IntConstantList& pObjectX = *(EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_int32& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntConstantList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_int32& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IntConstantList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IntConstantList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IntConstantList *pObjectX = (EarthView::World::Graphic::IntConstantList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_addConstantDefinition_1EVString_1GpuConstantType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint constType_j, jlong arraySize_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::GpuConstantType constType = (EarthView::World::Graphic::GpuConstantType) constType_j;
				ev_size_t arraySize = (ev_size_t) arraySize_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->addConstantDefinition(name, constType, arraySize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_addConstantDefinition_1EVString_1GpuConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint constType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::GpuConstantType constType = (EarthView::World::Graphic::GpuConstantType) constType_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->addConstantDefinition(name, constType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_removeConstantDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->removeConstantDefinition(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_removeAllConstantDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->removeAllConstantDefinitions();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getVersion();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters__1markDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->_markDirty();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getFrameLastUpdated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getFrameLastUpdated();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getConstantDefinitionIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinitionIterator __values1 = pObjectX->getConstantDefinitionIterator();
				EarthView::World::Graphic::GpuConstantDefinitionIterator *returnvalues = new EarthView::World::Graphic::GpuConstantDefinitionIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getConstantDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition& __values1 = pObjectX->getConstantDefinition(name);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getConstantDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->getConstantDefinitions();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real val = (Real) val_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong m_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, m);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong m_j, jlong numEntries_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 *m = (const EarthView::World::Spatial::Math::CMatrix4*) m_j;
				ev_size_t numEntries = (ev_size_t) numEntries_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, m, numEntries);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong colour_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_setNamedConstant_1EVString_1ev_1int32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_int32 *val = (const ev_int32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getFloatPointer_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				ev_real32* __values1 = pObjectX->getFloatPointer(pos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParameters_getIntPointer_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuSharedParameters *pObjectX = (EarthView::World::Graphic::CGpuSharedParameters*) pObjXXXX;
				ev_int32* __values1 = pObjectX->getIntPointer(pos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParametersPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuSharedParametersPtr *pObjectX = (EarthView::World::Graphic::GpuSharedParametersPtr*) pObjXXXX;
				EarthView::World::Graphic::CGpuSharedParameters* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuSharedParametersUsage__1copySharedParamsToTargetParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuSharedParametersUsage *pObjectX = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjXXXX;
				pObjectX->_copySharedParamsToTargetParams();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParametersUsage_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParametersUsage *pObjectX = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParametersUsage_getSharedParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParametersUsage *pObjectX = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjXXXX;
				EarthView::World::Graphic::GpuSharedParametersPtr __values1 = pObjectX->getSharedParams();
				EarthView::World::Graphic::GpuSharedParametersPtr *returnvalues = new EarthView::World::Graphic::GpuSharedParametersPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuSharedParametersUsage_getTargetParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuSharedParametersUsage *pObjectX = (EarthView::World::Graphic::CGpuSharedParametersUsage*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters* __values1 = pObjectX->getTargetParams();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CGpuProgramParameters::ACT_WORLD_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_WORLD_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_WORLD_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLD_MATRIX,
					CGpuProgramParameters::ACT_WORLD_MATRIX_ARRAY_3x4,
					CGpuProgramParameters::ACT_WORLD_MATRIX_ARRAY,
					CGpuProgramParameters::ACT_WORLD_DUALQUATERNION_ARRAY_2x4,
					CGpuProgramParameters::ACT_WORLD_SCALE_SHEAR_MATRIX_ARRAY_3x4,
					CGpuProgramParameters::ACT_VIEW_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_VIEW_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_VIEW_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_VIEW_MATRIX,
					CGpuProgramParameters::ACT_PROJECTION_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_PROJECTION_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_PROJECTION_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX,
					CGpuProgramParameters::ACT_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_WORLDVIEW_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_WORLDVIEW_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_WORLDVIEW_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX,
					CGpuProgramParameters::ACT_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_RENDER_TARGET_FLIPPING,
					CGpuProgramParameters::ACT_VERTEX_WINDING,
					CGpuProgramParameters::ACT_FOG_COLOUR,
					CGpuProgramParameters::ACT_FOG_PARAMS,
					CGpuProgramParameters::ACT_SURFACE_AMBIENT_COLOUR,
					CGpuProgramParameters::ACT_SURFACE_DIFFUSE_COLOUR,
					CGpuProgramParameters::ACT_SURFACE_SPECULAR_COLOUR,
					CGpuProgramParameters::ACT_SURFACE_EMISSIVE_COLOUR,
					CGpuProgramParameters::ACT_SURFACE_SHININESS,
					CGpuProgramParameters::ACT_VERTEX_COLOUR_TRACKING,
					CGpuProgramParameters::ACT_LIGHT_ENABLED,
					CGpuProgramParameters::ACT_LIGHT_COUNT,
					CGpuProgramParameters::ACT_AMBIENT_LIGHT_COLOUR,
					CGpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR,
					CGpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR,
					CGpuProgramParameters::ACT_LIGHT_ATTENUATION,
					CGpuProgramParameters::ACT_SPOTLIGHT_PARAMS,
					CGpuProgramParameters::ACT_LIGHT_POSITION,
					CGpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE,
					CGpuProgramParameters::ACT_LIGHT_POSITION_VIEW_SPACE,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION_OBJECT_SPACE,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION_VIEW_SPACE,
					CGpuProgramParameters::ACT_LIGHT_DISTANCE_OBJECT_SPACE,
					CGpuProgramParameters::ACT_LIGHT_POWER_SCALE,
					CGpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED,
					CGpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED,
					CGpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_ATTENUATION_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_POSITION_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_POWER_SCALE_ARRAY,
					CGpuProgramParameters::ACT_SPOTLIGHT_PARAMS_ARRAY,
					CGpuProgramParameters::ACT_DERIVED_AMBIENT_LIGHT_COLOUR,
					CGpuProgramParameters::ACT_DERIVED_SCENE_COLOUR,
					CGpuProgramParameters::ACT_DERIVED_LIGHT_DIFFUSE_COLOUR,
					CGpuProgramParameters::ACT_DERIVED_LIGHT_SPECULAR_COLOUR,
					CGpuProgramParameters::ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY,
					CGpuProgramParameters::ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY,
					CGpuProgramParameters::ACT_LIGHT_NUMBER,
					CGpuProgramParameters::ACT_LIGHT_CASTS_SHADOWS,
					CGpuProgramParameters::ACT_SHADOW_EXTRUSION_DISTANCE,
					CGpuProgramParameters::ACT_CAMERA_POSITION,
					CGpuProgramParameters::ACT_CAMERA_RELATIVE_POSITION,
					CGpuProgramParameters::ACT_CAMERA_POSITION_OBJECT_SPACE,
					CGpuProgramParameters::ACT_TEXTURE_VIEW_MATRIX,
					CGpuProgramParameters::ACT_TEXTURE_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY,
					CGpuProgramParameters::ACT_TEXTURE_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY,
					CGpuProgramParameters::ACT_SPOTLIGHT_VIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY,
					CGpuProgramParameters::ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX,
					CGpuProgramParameters::ACT_CUSTOM,
					CGpuProgramParameters::ACT_TIME,
					CGpuProgramParameters::ACT_TIME_0_X,
					CGpuProgramParameters::ACT_COSTIME_0_X,
					CGpuProgramParameters::ACT_SINTIME_0_X,
					CGpuProgramParameters::ACT_TANTIME_0_X,
					CGpuProgramParameters::ACT_TIME_0_X_PACKED,
					CGpuProgramParameters::ACT_TIME_0_1,
					CGpuProgramParameters::ACT_COSTIME_0_1,
					CGpuProgramParameters::ACT_SINTIME_0_1,
					CGpuProgramParameters::ACT_TANTIME_0_1,
					CGpuProgramParameters::ACT_TIME_0_1_PACKED,
					CGpuProgramParameters::ACT_TIME_0_2PI,
					CGpuProgramParameters::ACT_COSTIME_0_2PI,
					CGpuProgramParameters::ACT_SINTIME_0_2PI,
					CGpuProgramParameters::ACT_TANTIME_0_2PI,
					CGpuProgramParameters::ACT_TIME_0_2PI_PACKED,
					CGpuProgramParameters::ACT_FRAME_TIME,
					CGpuProgramParameters::ACT_FPS,
					CGpuProgramParameters::ACT_VIEWPORT_WIDTH,
					CGpuProgramParameters::ACT_VIEWPORT_HEIGHT,
					CGpuProgramParameters::ACT_INVERSE_VIEWPORT_WIDTH,
					CGpuProgramParameters::ACT_INVERSE_VIEWPORT_HEIGHT,
					CGpuProgramParameters::ACT_VIEWPORT_SIZE,
					CGpuProgramParameters::ACT_VIEW_DIRECTION,
					CGpuProgramParameters::ACT_VIEW_SIDE_VECTOR,
					CGpuProgramParameters::ACT_VIEW_UP_VECTOR,
					CGpuProgramParameters::ACT_FOV,
					CGpuProgramParameters::ACT_NEAR_CLIP_DISTANCE,
					CGpuProgramParameters::ACT_FAR_CLIP_DISTANCE,
					CGpuProgramParameters::ACT_PASS_NUMBER,
					CGpuProgramParameters::ACT_PASS_ITERATION_NUMBER,
					CGpuProgramParameters::ACT_ANIMATION_PARAMETRIC,
					CGpuProgramParameters::ACT_TEXEL_OFFSETS,
					CGpuProgramParameters::ACT_SCENE_DEPTH_RANGE,
					CGpuProgramParameters::ACT_SHADOW_SCENE_DEPTH_RANGE,
					CGpuProgramParameters::ACT_SHADOW_COLOUR,
					CGpuProgramParameters::ACT_TEXTURE_SIZE,
					CGpuProgramParameters::ACT_INVERSE_TEXTURE_SIZE,
					CGpuProgramParameters::ACT_PACKED_TEXTURE_SIZE,
					CGpuProgramParameters::ACT_TEXTURE_MATRIX,
					CGpuProgramParameters::ACT_LOD_CAMERA_POSITION,
					CGpuProgramParameters::ACT_LOD_CAMERA_POSITION_OBJECT_SPACE,
					CGpuProgramParameters::ACT_LIGHT_CUSTOM,
					CGpuProgramParameters::ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_0,
					CGpuProgramParameters::ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_1,
					CGpuProgramParameters::ACT_SOFTSHADOW_TEXTURE_VIEWPROJ_MATRIX_2,
					CGpuProgramParameters::ACT_SOFTSHADOW_CASCADE_DEPTH,
					CGpuProgramParameters::ACT_SOFTSHADOW_VIEWPROJ_MATRIX_0,
					CGpuProgramParameters::ACT_SOFTSHADOW_VIEWPROJ_MATRIX_1,
					CGpuProgramParameters::ACT_SOFTSHADOW_VIEWPROJ_MATRIX_2,
					CGpuProgramParameters::ACT_SOFTSHADOW_ISOPEN_FLAG,
					CGpuProgramParameters::ACT_SOFTSHADOW_LIGHT_BLEED_POWER,
					CGpuProgramParameters::ACT_SOFTSHADOW_DEPTH_OFFSET,
					CGpuProgramParameters::ACT_SOFTSHADOW_NORMAL_FACTOR,
					CGpuProgramParameters::ACT_SOFTSHADOW_NEARCLIP,
					CGpuProgramParameters::ACT_SOFTSHADOW_FARCLIP,
					CGpuProgramParameters::ACT_SOFTSHADOW_NEARCLIP_0,
					CGpuProgramParameters::ACT_SOFTSHADOW_FARCLIP_0,
					CGpuProgramParameters::ACT_SOFTSHADOW_NEARCLIP_1,
					CGpuProgramParameters::ACT_SOFTSHADOW_FARCLIP_1,
					CGpuProgramParameters::ACT_SOFTSHADOW_NEARCLIP_2,
					CGpuProgramParameters::ACT_SOFTSHADOW_FARCLIP_2,
					CGpuProgramParameters::ACT_SOFTSHADOW_COLOR_R_RATIO,
					CGpuProgramParameters::ACT_SOFTSHADOW_COLOR_G_RATIO,
					CGpuProgramParameters::ACT_SOFTSHADOW_COLOR_B_RATIO
				};
				jintArray array = __env->NewIntArray(155);
				__env->SetIntArrayRegion(array, 0, 155, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024ACDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CGpuProgramParameters::ACDT_NONE,
					CGpuProgramParameters::ACDT_INT,
					CGpuProgramParameters::ACDT_REAL
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024ElementTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CGpuProgramParameters::ET_INT,
					CGpuProgramParameters::ET_REAL
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_get_1acType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->acType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_set_1acType_1AutoConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				pObjectX->acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_get_1elementCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->elementCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_set_1elementCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				pObjectX->elementCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_get_1elementType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->elementType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_set_1elementType_1ElementType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				pObjectX->elementType = (EarthView::World::Graphic::CGpuProgramParameters::ElementType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_get_1dataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->dataType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantDefinition_set_1dataType_1ACDataType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition*)pObjXXXX;
				pObjectX->dataType = (EarthView::World::Graphic::CGpuProgramParameters::ACDataType)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_get_1paramType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->paramType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_set_1paramType_1AutoConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				pObjectX->paramType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_get_1physicalIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->physicalIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_set_1physicalIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				pObjectX->physicalIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_get_1elementCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->elementCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_set_1elementCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				pObjectX->elementCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_get_1variability_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->variability);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantEntry_set_1variability_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)pObjXXXX;
				pObjectX->variability = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_push_1back_1CAutoConstantEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &t = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) t_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_insert_1ev_1uint32_1CAutoConstantEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &t = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) t_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList& pObjectX = *(EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_push_1back_1CGpuSharedParametersUsage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CGpuSharedParametersUsage &t = *(EarthView::World::Graphic::CGpuSharedParametersUsage*) t_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_insert_1ev_1uint32_1CGpuSharedParametersUsage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CGpuSharedParametersUsage &t = *(EarthView::World::Graphic::CGpuSharedParametersUsage*) t_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList& pObjectX = *(EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CGpuSharedParametersUsage& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				EarthView::World::Graphic::CGpuSharedParametersUsage& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024GpuSharedParamUsageList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_OperatorAssign_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong oth_j )
			{
				EarthView::World::Graphic::CGpuProgramParameters& pObjectX = *(EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters &oth = *(EarthView::World::Graphic::CGpuProgramParameters*) oth_j;
				pObjectX = oth;
				EarthView::World::Graphic::CGpuProgramParameters& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setNamedConstants_1GpuNamedConstantsPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong constantmap_j)
			{
				const EarthView::World::Graphic::GpuNamedConstantsPtr &constantmap = *(EarthView::World::Graphic::GpuNamedConstantsPtr*) constantmap_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setNamedConstants(constantmap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setLogicalIndexes_1GpuLogicalBufferStructPtr_1GpuLogicalBufferStructPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong floatIndexMap_j, jlong intIndexMap_j)
			{
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr &floatIndexMap = *(EarthView::World::Graphic::GpuLogicalBufferStructPtr*) floatIndexMap_j;
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr &intIndexMap = *(EarthView::World::Graphic::GpuLogicalBufferStructPtr*) intIndexMap_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setLogicalIndexes(floatIndexMap, intIndexMap);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_hasNamedParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasNamedParameters();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_hasLogicalIndexedParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasLogicalIndexedParameters();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong vec_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble val_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				Real val = (Real) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong vec_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong m_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, m);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong m_j, jlong numEntries_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CMatrix4 **m = (const EarthView::World::Spatial::Math::CMatrix4**) m_j;
				ev_size_t numEntries = (ev_size_t) numEntries_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, m, numEntries);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong val_j, jlong count_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong val_j, jlong count_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong colour_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstant_1ev_1size_1t_1ev_1int32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong val_j, jlong count_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const ev_int32 *val = (const ev_int32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstant(index, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstants_1ev_1size_1t_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong val_j, jlong count_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstants_1ev_1size_1t_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong val_j, jlong count_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstants_1ev_1size_1t_1ev_1int32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong val_j, jlong count_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const ev_int32 *val = (const ev_int32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstants(physicalIndex, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1readRawConstants_1ev_1size_1t_1ev_1size_1t_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong count_j, jlong dest_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				ev_size_t count = (ev_size_t) count_j;
				ev_real32 *dest = (ev_real32*) dest_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_readRawConstants(physicalIndex, count, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1readRawConstants_1ev_1size_1t_1ev_1size_1t_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong count_j, jlong dest_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				ev_size_t count = (ev_size_t) count_j;
				ev_int32 *dest = (ev_int32*) dest_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_readRawConstants(physicalIndex, count, dest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CVector4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong vec_j, jlong count_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, vec, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong vec_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jdouble val_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				Real val = (Real) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jint val_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong vec_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong m_j, jlong elementCount_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				ev_size_t elementCount = (ev_size_t) elementCount_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, m, elementCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CMatrix4_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong m_j, jlong numEntries_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Spatial::Math::CMatrix4 **m = (const EarthView::World::Spatial::Math::CMatrix4**) m_j;
				ev_uint32 numEntries = (ev_uint32) numEntries_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, m, numEntries);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CColourValue_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong colour_j, jlong count_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, colour, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1writeRawConstant_1ev_1size_1t_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jlong colour_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_writeRawConstant(physicalIndex, colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getConstantDefinitionIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				EarthView::World::Graphic::GpuConstantDefinitionIterator __values1 = pObjectX->getConstantDefinitionIterator();
				EarthView::World::Graphic::GpuConstantDefinitionIterator *returnvalues = new EarthView::World::Graphic::GpuConstantDefinitionIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getConstantDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition& __values1 = pObjectX->getConstantDefinition(name);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getConstantDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->getConstantDefinitions();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getFloatLogicalBufferStruct_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr& __values1 = pObjectX->getFloatLogicalBufferStruct();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getFloatLogicalIndexForPhysicalIndex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getFloatLogicalIndexForPhysicalIndex(physicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getIntLogicalIndexForPhysicalIndex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getIntLogicalIndexForPhysicalIndex(physicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getIntLogicalBufferStruct_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuLogicalBufferStructPtr& __values1 = pObjectX->getIntLogicalBufferStruct();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getFloatConstantList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::FloatConstantList& __values1 = pObjectX->getFloatConstantList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getFloatPointer_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_real32* __values1 = pObjectX->getFloatPointer(pos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getIntConstantList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::IntConstantList& __values1 = pObjectX->getIntConstantList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getIntPointer_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_int32* __values1 = pObjectX->getIntPointer(pos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantList& __values1 = pObjectX->getAutoConstantList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setAutoConstant_1ev_1size_1t_1AutoConstantType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint acType_j, jlong extraInfo_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_size_t extraInfo = (ev_size_t) extraInfo_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setAutoConstant(index, acType, extraInfo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setAutoConstant_1ev_1size_1t_1AutoConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint acType_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setAutoConstant(index, acType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setAutoConstantReal_1ev_1size_1t_1AutoConstantType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint acType_j, jdouble rData_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				Real rData = (Real) rData_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setAutoConstantReal(index, acType, rData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setAutoConstant_1ev_1size_1t_1AutoConstantType_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint acType_j, jint extraInfo1_j, jint extraInfo2_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_uint16 extraInfo1 = (ev_uint16) extraInfo1_j;
				ev_uint16 extraInfo2 = (ev_uint16) extraInfo2_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setAutoConstant(index, acType, extraInfo1, extraInfo2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setRawAutoConstant_1ev_1size_1t_1AutoConstantType_1ev_1size_1t_1ev_1uint16_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jint acType_j, jlong extraInfo_j, jint variability_j, jlong elementSize_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_size_t extraInfo = (ev_size_t) extraInfo_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				ev_size_t elementSize = (ev_size_t) elementSize_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setRawAutoConstant(physicalIndex, acType, extraInfo, variability, elementSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setRawAutoConstant_1ev_1size_1t_1AutoConstantType_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jint acType_j, jlong extraInfo_j, jint variability_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_size_t extraInfo = (ev_size_t) extraInfo_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setRawAutoConstant(physicalIndex, acType, extraInfo, variability);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setRawAutoConstantReal_1ev_1size_1t_1AutoConstantType_1Real_1ev_1uint16_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jint acType_j, jdouble rData_j, jint variability_j, jlong elementSize_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				Real rData = (Real) rData_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				ev_size_t elementSize = (ev_size_t) elementSize_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setRawAutoConstantReal(physicalIndex, acType, rData, variability, elementSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1setRawAutoConstantReal_1ev_1size_1t_1AutoConstantType_1Real_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j, jint acType_j, jdouble rData_j, jint variability_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				Real rData = (Real) rData_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_setRawAutoConstantReal(physicalIndex, acType, rData, variability);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_clearAutoConstant_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->clearAutoConstant(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setConstantFromTime_1ev_1size_1t_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble factor_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				Real factor = (Real) factor_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setConstantFromTime(index, factor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_clearAutoConstants_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->clearAutoConstants();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *returnvalues = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry __values1 = pObjectX->next();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *returnvalues = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *returnvalues = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_00024AutoConstantIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry *returnvalues = new EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator __values1 = pObjectX->getAutoConstantIterator();
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator *returnvalues = new EarthView::World::Graphic::CGpuProgramParameters::AutoConstantIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getAutoConstantCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantEntry_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				const ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->getAutoConstantEntry(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_hasAutoConstants_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasAutoConstants();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_findFloatAutoConstantEntry_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong logicalIndex_j)
			{
				ev_size_t logicalIndex = (ev_size_t) logicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->findFloatAutoConstantEntry(logicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_findIntAutoConstantEntry_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong logicalIndex_j)
			{
				ev_size_t logicalIndex = (ev_size_t) logicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->findIntAutoConstantEntry(logicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_findAutoConstantEntry_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring paramName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* paramName_ch = (const ev_char*)__env->GetStringUTFChars(paramName_j,JNI_FALSE);
				const EVString paramName = paramName_ch;
				__env->ReleaseStringUTFChars(paramName_j, (const char *)paramName_ch);
				#else
				const ev_wchar* paramName_ch = (const ev_wchar*)__env->GetStringChars(paramName_j,JNI_FALSE);
				const EVString paramName = paramName_ch;
				__env->ReleaseStringChars(paramName_j, (const jchar *)paramName_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->findAutoConstantEntry(paramName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1findRawAutoConstantEntryFloat_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->_findRawAutoConstantEntryFloat(physicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1findRawAutoConstantEntryInt_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong physicalIndex_j)
			{
				ev_size_t physicalIndex = (ev_size_t) physicalIndex_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry* __values1 = pObjectX->_findRawAutoConstantEntryInt(physicalIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1updateAutoParams_1CAutoParamDataSource_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint variabilityMask_j)
			{
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				ev_uint16 variabilityMask = (ev_uint16) variabilityMask_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_updateAutoParams(source, variabilityMask);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setIgnoreMissingParams_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
			{
				ev_bool state = (ev_bool) state_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setIgnoreMissingParams(state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real val = (Real) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong m_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, m);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong m_j, jlong numEntries_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CMatrix4 *m = (const EarthView::World::Spatial::Math::CMatrix4*) m_j;
				ev_size_t numEntries = (ev_size_t) numEntries_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, m, numEntries);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1real32_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j, jlong multiple_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				ev_size_t multiple = (ev_size_t) multiple_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count, multiple);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1real64_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j, jlong multiple_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				ev_size_t multiple = (ev_size_t) multiple_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count, multiple);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong colour_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1int32_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j, jlong multiple_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_int32 *val = (const ev_int32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				ev_size_t multiple = (ev_size_t) multiple_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count, multiple);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstant_1EVString_1ev_1int32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong val_j, jlong count_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const ev_int32 *val = (const ev_int32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstant(name, val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedAutoConstant_1EVString_1AutoConstantType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint acType_j, jlong extraInfo_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_size_t extraInfo = (ev_size_t) extraInfo_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedAutoConstant(name, acType, extraInfo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedAutoConstant_1EVString_1AutoConstantType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint acType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedAutoConstant(name, acType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedAutoConstantReal_1EVString_1AutoConstantType_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint acType_j, jdouble rData_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				Real rData = (Real) rData_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedAutoConstantReal(name, acType, rData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedAutoConstant_1EVString_1AutoConstantType_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint acType_j, jint extraInfo1_j, jint extraInfo2_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType acType = (EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType) acType_j;
				ev_uint16 extraInfo1 = (ev_uint16) extraInfo1_j;
				ev_uint16 extraInfo2 = (ev_uint16) extraInfo2_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedAutoConstant(name, acType, extraInfo1, extraInfo2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setNamedConstantFromTime_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble factor_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real factor = (Real) factor_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setNamedConstantFromTime(name, factor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_clearNamedAutoConstant_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->clearNamedAutoConstant(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1findNamedConstantDefinition_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean throwExceptionIfMissing_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool throwExceptionIfMissing = (ev_bool) throwExceptionIfMissing_j;
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition* __values1 = pObjectX->_findNamedConstantDefinition(name, throwExceptionIfMissing);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1findNamedConstantDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::GpuConstantDefinition* __values1 = pObjectX->_findNamedConstantDefinition(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1getFloatConstantPhysicalIndex_1ev_1size_1t_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong logicalIndex_j, jlong requestedSize_j, jint variability_j)
			{
				ev_size_t logicalIndex = (ev_size_t) logicalIndex_j;
				ev_size_t requestedSize = (ev_size_t) requestedSize_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->_getFloatConstantPhysicalIndex(logicalIndex, requestedSize, variability);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1getIntConstantPhysicalIndex_1ev_1size_1t_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong logicalIndex_j, jlong requestedSize_j, jint variability_j)
			{
				ev_size_t logicalIndex = (ev_size_t) logicalIndex_j;
				ev_size_t requestedSize = (ev_size_t) requestedSize_j;
				ev_uint16 variability = (ev_uint16) variability_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->_getIntConstantPhysicalIndex(logicalIndex, requestedSize, variability);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_setTransposeMatrices_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->setTransposeMatrices(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getTransposeMatrices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTransposeMatrices();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_copyConstantsFrom_1CGpuProgramParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters &source = *(EarthView::World::Graphic::CGpuProgramParameters*) source_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->copyConstantsFrom(source);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_copyMatchingNamedConstantsFrom_1CGpuProgramParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters &source = *(EarthView::World::Graphic::CGpuProgramParameters*) source_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->copyMatchingNamedConstantsFrom(source);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantDefinition_1EVString(JNIEnv *__env , jclass __clazz, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* __values1 = EarthView::World::Graphic::CGpuProgramParameters::getAutoConstantDefinition(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getAutoConstantDefinition_1ev_1size_1t(JNIEnv *__env , jclass __clazz, jlong idx_j)
			{
				const ev_size_t idx = (ev_size_t) idx_j;
				const EarthView::World::Graphic::CGpuProgramParameters::AutoConstantDefinition* __values1 = EarthView::World::Graphic::CGpuProgramParameters::getAutoConstantDefinition(idx);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getNumAutoConstantDefinitions_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_size_t __values1 = EarthView::World::Graphic::CGpuProgramParameters::getNumAutoConstantDefinitions();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_incPassIterationNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->incPassIterationNumber();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_hasPassIterationNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasPassIterationNumber();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getPassIterationNumberIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getPassIterationNumberIndex();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_addSharedParameters_1GpuSharedParametersPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sharedParams_j)
			{
				EarthView::World::Graphic::GpuSharedParametersPtr sharedParams = *(EarthView::World::Graphic::GpuSharedParametersPtr*) sharedParams_j;
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->addSharedParameters(sharedParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_addSharedParameters_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sharedParamsName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sharedParamsName_ch = (const ev_char*)__env->GetStringUTFChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringUTFChars(sharedParamsName_j, (const char *)sharedParamsName_ch);
				#else
				const ev_wchar* sharedParamsName_ch = (const ev_wchar*)__env->GetStringChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringChars(sharedParamsName_j, (const jchar *)sharedParamsName_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->addSharedParameters(sharedParamsName);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_isUsingSharedParameters_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sharedParamsName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sharedParamsName_ch = (const ev_char*)__env->GetStringUTFChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringUTFChars(sharedParamsName_j, (const char *)sharedParamsName_ch);
				#else
				const ev_wchar* sharedParamsName_ch = (const ev_wchar*)__env->GetStringChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringChars(sharedParamsName_j, (const jchar *)sharedParamsName_ch);
				#endif
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				ev_bool __values1 = pObjectX->isUsingSharedParameters(sharedParamsName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_removeSharedParameters_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sharedParamsName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sharedParamsName_ch = (const ev_char*)__env->GetStringUTFChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringUTFChars(sharedParamsName_j, (const char *)sharedParamsName_ch);
				#else
				const ev_wchar* sharedParamsName_ch = (const ev_wchar*)__env->GetStringChars(sharedParamsName_j,JNI_FALSE);
				const EVString sharedParamsName = sharedParamsName_ch;
				__env->ReleaseStringChars(sharedParamsName_j, (const jchar *)sharedParamsName_ch);
				#endif
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->removeSharedParameters(sharedParamsName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_removeAllSharedParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->removeAllSharedParameters();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParameters_getSharedParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramParameters::GpuSharedParamUsageList& __values1 = pObjectX->getSharedParameters();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgramParameters__1copySharedParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgramParameters *pObjectX = (EarthView::World::Graphic::CGpuProgramParameters*) pObjXXXX;
				pObjectX->_copySharedParams();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramParametersSharedPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pObjectX = (EarthView::World::Graphic::GpuProgramParametersSharedPtr*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgramParameters* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
