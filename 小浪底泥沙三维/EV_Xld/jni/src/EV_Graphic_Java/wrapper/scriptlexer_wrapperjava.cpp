/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptlexer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TokenIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TID_LBRACKET,
					TID_RBRACKET,
					TID_COLON,
					TID_VARIABLE,
					TID_WORD,
					TID_QUOTE,
					TID_NEWLINE,
					TID_UNKNOWN,
					TID_END
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptToken_get_1file_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->file;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptToken_set_1file_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->file = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptToken_get_1lexeme_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->lexeme;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptToken_set_1lexeme_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->lexeme = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptToken_get_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->type);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptToken_set_1type_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				pObjectX->type = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptToken_get_1line_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->line);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptToken_set_1line_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ScriptToken *pObjectX = (EarthView::World::Graphic::ScriptToken*)pObjXXXX;
				pObjectX->line = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ScriptTokenPtr *pObjectX = (EarthView::World::Graphic::ScriptTokenPtr*) pObjXXXX;
				EarthView::World::Graphic::ScriptToken* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_push_1back_1ScriptTokenPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ScriptTokenPtr &t = *(EarthView::World::Graphic::ScriptTokenPtr*) t_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_insert_1ev_1uint32_1ScriptTokenPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::ScriptTokenPtr &t = *(EarthView::World::Graphic::ScriptTokenPtr*) t_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptTokenList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::ScriptTokenList& pObjectX = *(EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ScriptTokenPtr& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenPtr& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptTokenList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ScriptTokenList *pObjectX = (EarthView::World::Graphic::ScriptTokenList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptTokenListPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ScriptTokenListPtr *pObjectX = (EarthView::World::Graphic::ScriptTokenListPtr*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenList* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptLexer_tokenize_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				EarthView::World::Graphic::CScriptLexer *pObjectX = (EarthView::World::Graphic::CScriptLexer*) pObjXXXX;
				EarthView::World::Graphic::ScriptTokenListPtr __values1 = pObjectX->tokenize(str, source);
				EarthView::World::Graphic::ScriptTokenListPtr *returnvalues = new EarthView::World::Graphic::ScriptTokenListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
