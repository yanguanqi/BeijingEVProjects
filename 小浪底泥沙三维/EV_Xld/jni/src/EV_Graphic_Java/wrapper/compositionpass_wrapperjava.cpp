/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositionpass.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CompositionPass_00024PassTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CCompositionPass::PT_CLEAR,
					CCompositionPass::PT_STENCIL,
					CCompositionPass::PT_RENDERSCENE,
					CCompositionPass::PT_RENDERQUAD,
					CCompositionPass::PT_RENDERCUSTOM
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setType_1PassType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Graphic::CCompositionPass::PassType type = (EarthView::World::Graphic::CCompositionPass::PassType) type_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setType(type);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionPass_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass::PassType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setIdentifier_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setIdentifier(id);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getIdentifier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getIdentifier();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setMaterial_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Graphic::CMaterialPtr &mat = *(EarthView::World::Graphic::CMaterialPtr*) mat_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setMaterial(mat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setMaterialName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setMaterialName(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setFirstRenderQueue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort id_j)
			{
				ev_uint8 id = (ev_uint8) id_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setFirstRenderQueue(id);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_CompositionPass_getFirstRenderQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->getFirstRenderQueue();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setLastRenderQueue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort id_j)
			{
				ev_uint8 id = (ev_uint8) id_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setLastRenderQueue(id);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_CompositionPass_getLastRenderQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->getLastRenderQueue();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setMaterialScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setMaterialScheme(schemeName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getMaterialScheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMaterialScheme();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setClearBuffers_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setClearBuffers(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getClearBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getClearBuffers();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setClearColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Graphic::CColourValue val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setClearColour(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getClearColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getClearColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setClearDepth_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble depth_j)
			{
				Real depth = (Real) depth_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setClearDepth(depth);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_CompositionPass_getClearDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				Real __values1 = pObjectX->getClearDepth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setClearStencil_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setClearStencil(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getClearStencil_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getClearStencil();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilCheck_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilCheck(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilCheck_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getStencilCheck();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilFunc_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				EarthView::World::Graphic::CompareFunction value = (EarthView::World::Graphic::CompareFunction) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilFunc(value);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilFunc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				EarthView::World::Graphic::CompareFunction __values1 = pObjectX->getStencilFunc();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilRefValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilRefValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilRefValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getStencilRefValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilMask(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getStencilMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilFailOp_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				StencilOperation value = (StencilOperation) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilFailOp(value);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilFailOp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				StencilOperation __values1 = pObjectX->getStencilFailOp();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilDepthFailOp_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				StencilOperation value = (StencilOperation) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilDepthFailOp(value);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilDepthFailOp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				StencilOperation __values1 = pObjectX->getStencilDepthFailOp();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilPassOp_1StencilOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				StencilOperation value = (StencilOperation) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilPassOp(value);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilPassOp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				StencilOperation __values1 = pObjectX->getStencilPassOp();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setStencilTwoSidedOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setStencilTwoSidedOperation(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass_getStencilTwoSidedOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getStencilTwoSidedOperation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositionPass_00024InputTex_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPass::InputTex *pObjectX = (EarthView::World::Graphic::CCompositionPass::InputTex*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_00024InputTex_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCompositionPass::InputTex *pObjectX = (EarthView::World::Graphic::CCompositionPass::InputTex*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_00024InputTex_get_1mrtIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPass::InputTex *pObjectX = (EarthView::World::Graphic::CCompositionPass::InputTex*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mrtIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_00024InputTex_set_1mrtIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositionPass::InputTex *pObjectX = (EarthView::World::Graphic::CCompositionPass::InputTex*)pObjXXXX;
				pObjectX->mrtIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setInput_1ev_1size_1t_1EVString_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jstring input_j, jlong mrtIndex_j)
			{
				ev_size_t id = (ev_size_t) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* input_ch = (const ev_char*)__env->GetStringUTFChars(input_j,JNI_FALSE);
				const EVString input = input_ch;
				__env->ReleaseStringUTFChars(input_j, (const char *)input_ch);
				#else
				const ev_wchar* input_ch = (const ev_wchar*)__env->GetStringChars(input_j,JNI_FALSE);
				const EVString input = input_ch;
				__env->ReleaseStringChars(input_j, (const jchar *)input_ch);
				#endif
				ev_size_t mrtIndex = (ev_size_t) mrtIndex_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setInput(id, input, mrtIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setInput_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jstring input_j)
			{
				ev_size_t id = (ev_size_t) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* input_ch = (const ev_char*)__env->GetStringUTFChars(input_j,JNI_FALSE);
				const EVString input = input_ch;
				__env->ReleaseStringUTFChars(input_j, (const char *)input_ch);
				#else
				const ev_wchar* input_ch = (const ev_wchar*)__env->GetStringChars(input_j,JNI_FALSE);
				const EVString input = input_ch;
				__env->ReleaseStringChars(input_j, (const jchar *)input_ch);
				#endif
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setInput(id, input);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setInput_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_size_t id = (ev_size_t) id_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setInput(id);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getInput_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_size_t id = (ev_size_t) id_j;
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				const EarthView::World::Graphic::CCompositionPass::InputTex& __values1 = pObjectX->getInput(id);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getNumInputs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumInputs();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_clearAllInputs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->clearAllInputs();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass__1isSupported_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->_isSupported();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setQuadCorners_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble right_j, jdouble bottom_j)
			{
				Real left = (Real) left_j;
				Real top = (Real) top_j;
				Real right = (Real) right_j;
				Real bottom = (Real) bottom_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setQuadCorners(left, top, right, bottom);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass_getQuadCorners_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				Real &left = *(Real*) left_j;
				Real &top = *(Real*) top_j;
				Real &right = *(Real*) right_j;
				Real &bottom = *(Real*) bottom_j;
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getQuadCorners(left, top, right, bottom);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setQuadFarCorners_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean farCorners_j, jboolean farCornersViewSpace_j)
			{
				ev_bool farCorners = (ev_bool) farCorners_j;
				ev_bool farCornersViewSpace = (ev_bool) farCornersViewSpace_j;
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setQuadFarCorners(farCorners, farCornersViewSpace);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass_getQuadFarCorners_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getQuadFarCorners();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionPass_getQuadFarCornersViewSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getQuadFarCornersViewSpace();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionPass_setCustomType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring customType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* customType_ch = (const ev_char*)__env->GetStringUTFChars(customType_j,JNI_FALSE);
				const EVString customType = customType_ch;
				__env->ReleaseStringUTFChars(customType_j, (const char *)customType_ch);
				#else
				const ev_wchar* customType_ch = (const ev_wchar*)__env->GetStringChars(customType_j,JNI_FALSE);
				const EVString customType = customType_ch;
				__env->ReleaseStringChars(customType_j, (const jchar *)customType_ch);
				#endif
				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				pObjectX->setCustomType(customType);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionPass_getCustomType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionPass *pObjectX = (EarthView::World::Graphic::CCompositionPass*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCustomType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
