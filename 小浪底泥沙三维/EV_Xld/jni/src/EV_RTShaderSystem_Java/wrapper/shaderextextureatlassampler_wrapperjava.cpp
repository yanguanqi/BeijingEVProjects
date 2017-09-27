/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderextextureatlassampler.h"
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
			namespace RTShaderSystem
			{
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1posU_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->posU);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1posU_1float(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					pObjectX->posU = (float)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1posV_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->posV);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1posV_1float(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					pObjectX->posV = (float)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1width_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->width);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1width_1float(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					pObjectX->width = (float)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1height_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->height);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1height_1float(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					pObjectX->height = (float)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1originalTextureName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->originalTextureName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1originalTextureName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->originalTextureName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1atlasTextureName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->atlasTextureName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1atlasTextureName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->atlasTextureName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_get_1indexInAtlas_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->indexInAtlas);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasRecord_set_1indexInAtlas_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*)pObjXXXX;
					pObjectX->indexInAtlas = (size_t)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_push_1back_1TextureAtlasRecord(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord t = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) t_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_insert_1ev_1uint32_1TextureAtlasRecord(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord &t = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord*) t_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTable_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasTablePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_push_1EVString_1TextureAtlasTablePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &val = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) val_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap *pObjectX = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				class JCTextureAtlasSamplerProxy : public EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getExecutionOrder_void_callback;
					EarthView::World::Core::ev_string m_copyFrom_CSubRenderState_callback;
					EarthView::World::Core::ev_string m_createCpuSubPrograms_CProgramSet_callback;
					EarthView::World::Core::ev_string m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback;
					EarthView::World::Core::ev_string m_preAddToRenderState_CRenderState_CPass_CPass_callback;
					EarthView::World::Core::ev_string m_resolveParameters_CProgramSet_callback;
					EarthView::World::Core::ev_string m_resolveDependencies_CProgramSet_callback;
					EarthView::World::Core::ev_string m_addFunctionInvocations_CProgramSet_callback;
				public:
					JCTextureAtlasSamplerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureAtlasSampler(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getExecutionOrder_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExecutionOrder_void_callback = __method;
					}
					void register_copyFrom_CSubRenderState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyFrom_CSubRenderState_callback = __method;
					}
					void register_createCpuSubPrograms_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createCpuSubPrograms_CProgramSet_callback = __method;
					}
					void register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback = __method;
					}
					void register_preAddToRenderState_CRenderState_CPass_CPass_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preAddToRenderState_CRenderState_CPass_CPass_callback = __method;
					}
					void register_resolveParameters_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resolveParameters_CProgramSet_callback = __method;
					}
					void register_resolveDependencies_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resolveDependencies_CProgramSet_callback = __method;
					}
					void register_addFunctionInvocations_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addFunctionInvocations_CProgramSet_callback = __method;
					}
					virtual EVString getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::getType();
						}
					}
					virtual int getExecutionOrder() const
					{
						if (this->_gRef != NULL && this->m_getExecutionOrder_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getExecutionOrder_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							int __values1 = (int) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::getExecutionOrder();
						}
					}
					virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if (this->_gRef != NULL && this->m_copyFrom_CSubRenderState_callback != "" && this->isCustomExtend())
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
							jlong rhs_j = (jlong) &rhs;
							jmethodID __method = __gr->getMethod("copyFrom_CSubRenderState_callback");
							__env->CallVoidMethod(__obj, __method , rhs_j);
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
							return this->CTextureAtlasSampler::copyFrom(rhs);
						}
					}
					virtual void updateGpuProgramsParams(EarthView::World::Graphic::CRenderable* rend, EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList)
					{
						if (this->_gRef != NULL && this->m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback != "" && this->isCustomExtend())
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
							jlong rend_j = (jlong) rend;
							jlong pass_j = (jlong) pass;
							jlong source_j = (jlong) source;
							jlong pLightList_j = (jlong) pLightList;
							jmethodID __method = __gr->getMethod("updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback");
							__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j);
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
							return this->CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
						}
					}
					virtual bool preAddToRenderState(const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, EarthView::World::Graphic::CPass* srcPass, EarthView::World::Graphic::CPass* dstPass)
					{
						if (this->_gRef != NULL && this->m_preAddToRenderState_CRenderState_CPass_CPass_callback != "" && this->isCustomExtend())
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
							jlong renderState_j = (jlong) renderState;
							jlong srcPass_j = (jlong) srcPass;
							jlong dstPass_j = (jlong) dstPass;
							jmethodID __method = __gr->getMethod("preAddToRenderState_CRenderState_CPass_CPass_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , renderState_j, srcPass_j, dstPass_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
						}
					}
					virtual bool resolveParameters(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_resolveParameters_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("resolveParameters_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::resolveParameters(programSet);
						}
					}
					virtual bool resolveDependencies(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_resolveDependencies_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("resolveDependencies_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::resolveDependencies(programSet);
						}
					}
					virtual bool addFunctionInvocations(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_addFunctionInvocations_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("addFunctionInvocations_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::addFunctionInvocations(programSet);
						}
					}
					virtual bool createCpuSubPrograms(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_createCpuSubPrograms_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("createCpuSubPrograms_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSampler::createCpuSubPrograms(programSet);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTextureAtlasSamplerProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_getExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getExecutionOrder();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						int __values1 = pObjectX->getExecutionOrder();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1getExecutionOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExecutionOrder_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExecutionOrder_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_getExecutionOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::getExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_copyFrom_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::copyFrom(rhs);
					}
					else
					{
						pObjectX->copyFrom(rhs);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1copyFrom_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyFrom_CSubRenderState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyFrom_CSubRenderState_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_copyFrom_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::copyFrom(rhs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					else
					{
						pObjectX->updateGpuProgramsParams(rend, pass, source, pLightList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->preAddToRenderState(renderState, srcPass, dstPass);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preAddToRenderState_CRenderState_CPass_CPass_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preAddToRenderState_CRenderState_CPass_CPass_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_preAddToRenderState_1CRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::preAddToRenderState(renderState, srcPass, dstPass);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_get_1Type_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::Type;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_set_1Type_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::Type = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveParameters(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->resolveParameters(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resolveParameters_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resolveParameters_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveDependencies(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->resolveDependencies(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resolveDependencies_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resolveDependencies_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_addFunctionInvocations_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::addFunctionInvocations(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->addFunctionInvocations(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addFunctionInvocations_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addFunctionInvocations_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_addFunctionInvocations_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSampler::addFunctionInvocations(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSampler_register_1createCpuSubPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerProxy *pObjectX = (JCTextureAtlasSamplerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createCpuSubPrograms_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createCpuSubPrograms_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCTextureAtlasSamplerFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createInstance_void_callback;
					EarthView::World::Core::ev_string m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_createOrRetrieveInstance_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_destroyInstance_CSubRenderState_callback;
					EarthView::World::Core::ev_string m_destroyAllInstances_void_callback;
					EarthView::World::Core::ev_string m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback;
					EarthView::World::Core::ev_string m_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback;
					EarthView::World::Core::ev_string m_createInstanceImpl_void_callback;
				public:
					JCTextureAtlasSamplerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureAtlasSamplerFactory(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_createInstance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_void_callback = __method;
					}
					void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback = __method;
					}
					void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback = __method;
					}
					void register_createOrRetrieveInstance_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createOrRetrieveInstance_CSGScriptTranslator_callback = __method;
					}
					void register_destroyInstance_CSubRenderState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_CSubRenderState_callback = __method;
					}
					void register_destroyAllInstances_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyAllInstances_void_callback = __method;
					}
					void register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback = __method;
					}
					void register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback = __method;
					}
					void register_createInstanceImpl_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstanceImpl_void_callback = __method;
					}
					virtual EVString getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSamplerFactory::getType();
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(EarthView::World::Graphic::CScriptCompiler* compiler, EarthView::World::Graphic::CPropertyAbstractNode* prop, EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if (this->_gRef != NULL && this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback != "" && this->isCustomExtend())
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
							jlong compiler_j = (jlong) compiler;
							jlong prop_j = (jlong) prop;
							jlong pass_j = (jlong) pass;
							jlong translator_j = (jlong) translator;
							jmethodID __method = __gr->getMethod("createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , compiler_j, prop_j, pass_j, translator_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
						}
					}
					virtual void writeInstance(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, EarthView::World::Graphic::CPass* srcPass, EarthView::World::Graphic::CPass* dstPass)
					{
						if (this->_gRef != NULL && this->m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jlong subRenderState_j = (jlong) subRenderState;
							jlong srcPass_j = (jlong) srcPass;
							jlong dstPass_j = (jlong) dstPass;
							jmethodID __method = __gr->getMethod("writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, subRenderState_j, srcPass_j, dstPass_j);
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
							return this->CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if (this->_gRef != NULL && this->m_createInstanceImpl_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createInstanceImpl_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSamplerFactory::createInstanceImpl();
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if (this->_gRef != NULL && this->m_createOrRetrieveInstance_CSGScriptTranslator_callback != "" && this->isCustomExtend())
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
							jlong translator_j = (jlong) translator;
							jmethodID __method = __gr->getMethod("createOrRetrieveInstance_CSGScriptTranslator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translator_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextureAtlasSamplerFactory::createOrRetrieveInstance(translator);
						}
					}
					virtual void destroyInstance(EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_CSubRenderState_callback != "" && this->isCustomExtend())
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
							jlong subRenderState_j = (jlong) subRenderState;
							jmethodID __method = __gr->getMethod("destroyInstance_CSubRenderState_callback");
							__env->CallVoidMethod(__obj, __method , subRenderState_j);
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
							return this->CTextureAtlasSamplerFactory::destroyInstance(subRenderState);
						}
					}
					virtual void destroyAllInstances()
					{
						if (this->_gRef != NULL && this->m_destroyAllInstances_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroyAllInstances_void_callback");
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
							return this->CTextureAtlasSamplerFactory::destroyAllInstances();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTextureAtlasSamplerFactoryProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024IndexPositionModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CTextureAtlasSamplerFactory::ipmRelative,
						CTextureAtlasSamplerFactory::ipmAbsolute
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_get_1positionMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->positionMode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_set_1positionMode_1IndexPositionMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					pObjectX->positionMode = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_get_1positionOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->positionOffset);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_set_1positionOffset_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					pObjectX->positionOffset = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_get_1autoBorderAdjust_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->autoBorderAdjust);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_00024TextureAtlasAttib_set_1autoBorderAdjust_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*)pObjXXXX;
					pObjectX->autoBorderAdjust = (bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory* __values1 = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory& __values1 = EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerFactoryProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstance(compiler, prop, pass, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback", "(JJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstance(compiler, prop, pass, translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					else
					{
						pObjectX->writeInstance(ser, subRenderState, srcPass, dstPass);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_addTexutreAtlasDefinition_1EVString_1TextureAtlasTablePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jlong textureAtlasTable_j)
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
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) textureAtlasTable_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->addTexutreAtlasDefinition(filename, textureAtlasTable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_addTexutreAtlasDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->addTexutreAtlasDefinition(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_addTexutreAtlasDefinition_1DataStreamPtr_1TextureAtlasTablePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong textureAtlasTable_j)
				{
					EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
					EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) textureAtlasTable_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->addTexutreAtlasDefinition(stream, textureAtlasTable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_addTexutreAtlasDefinition_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->addTexutreAtlasDefinition(stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_setTextureAtlasTable_1EVString_1TextureAtlasTablePtr_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j, jlong atlasData_j, jboolean autoBorderAdjust_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
					#else
					const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
					#endif
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &atlasData = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) atlasData_j;
					bool autoBorderAdjust = (bool) autoBorderAdjust_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->setTextureAtlasTable(textureName, atlasData, autoBorderAdjust);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_setTextureAtlasTable_1EVString_1TextureAtlasTablePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j, jlong atlasData_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
					#else
					const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
					#endif
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &atlasData = *(EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr*) atlasData_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->setTextureAtlasTable(textureName, atlasData);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_removeTextureAtlasTable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
					#else
					const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->removeTextureAtlasTable(textureName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_removeAllTextureAtlasTables_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->removeAllTextureAtlasTables();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getTextureAtlasTable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
					#else
					const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
					const EVString textureName = textureName_ch;
					__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
					#endif
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& __values1 = pObjectX->getTextureAtlasTable(textureName);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_setDefaultAtlasingAttributes_1IndexPositionMode_1ev_1uint16_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jint offset_j, jboolean autoAdjustBorders_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode mode = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode) mode_j;
					ev_uint16 offset = (ev_uint16) offset_j;
					bool autoAdjustBorders = (bool) autoAdjustBorders_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->setDefaultAtlasingAttributes(mode, offset, autoAdjustBorders);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_getDefaultAtlasingAttributes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib& __values1 = pObjectX->getDefaultAtlasingAttributes();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_setMaterialAtlasingAttributes_1CMaterial_1IndexPositionMode_1ev_1uint16_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong material_j, jint mode_j, jint offset_j, jboolean autoAdjustBorders_j)
				{
					EarthView::World::Graphic::CMaterial *material = (EarthView::World::Graphic::CMaterial*) material_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode mode = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode) mode_j;
					ev_uint16 offset = (ev_uint16) offset_j;
					bool autoAdjustBorders = (bool) autoAdjustBorders_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					pObjectX->setMaterialAtlasingAttributes(material, mode, offset, autoAdjustBorders);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_hasMaterialAtlasingAttributes_1CMaterial_1TextureAtlasAttib(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong material_j, jlong attrib_j)
				{
					EarthView::World::Graphic::CMaterial *material = (EarthView::World::Graphic::CMaterial*) material_j;
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *attrib = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib*) attrib_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->hasMaterialAtlasingAttributes(material, attrib);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_hasMaterialAtlasingAttributes_1CMaterial(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong material_j)
				{
					EarthView::World::Graphic::CMaterial *material = (EarthView::World::Graphic::CMaterial*) material_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					bool __values1 = pObjectX->hasMaterialAtlasingAttributes(material);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_createInstanceImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextureAtlasSamplerFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstanceImpl();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstanceImpl();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1createInstanceImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstanceImpl_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstanceImpl_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_createInstanceImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::createInstanceImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback", "(JJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1createOrRetrieveInstance_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createOrRetrieveInstance_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieveInstance_CSGScriptTranslator_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1destroyInstance_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_CSubRenderState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CSubRenderState_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1destroyAllInstances_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyAllInstances_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllInstances_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TextureAtlasSamplerFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextureAtlasSamplerFactoryProxy *pObjectX = (JCTextureAtlasSamplerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
