/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositiontargetpass.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024InputModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CCompositionTargetPass::IM_NONE,
					CCompositionTargetPass::IM_PREVIOUS
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_push_1back_1CCompositionPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_descript_j)
			{
				EarthView::World::Graphic::CCompositionPass *&ref_descript = *(EarthView::World::Graphic::CCompositionPass**) ref_descript_j;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				pObjectX->push_back(ref_descript);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses& pObjectX = *(EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionPass*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPasses_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_00024CompositionPassIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setInputMode_1InputMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CCompositionTargetPass::InputMode mode = (EarthView::World::Graphic::CCompositionTargetPass::InputMode) mode_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setInputMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getInputMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass::InputMode __values1 = pObjectX->getInputMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setOutputName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring out_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* out_ch = (const ev_char*)__env->GetStringUTFChars(out_j,JNI_FALSE);
				const EVString out = out_ch;
				__env->ReleaseStringUTFChars(out_j, (const char *)out_ch);
				#else
				const ev_wchar* out_ch = (const ev_wchar*)__env->GetStringChars(out_j,JNI_FALSE);
				const EVString out = out_ch;
				__env->ReleaseStringChars(out_j, (const jchar *)out_ch);
				#endif
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setOutputName(out);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getOutputName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				const EVString& __values1 = pObjectX->getOutputName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setOnlyInitial_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setOnlyInitial(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getOnlyInitial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getOnlyInitial();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setVisibilityMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setVisibilityMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getVisibilityMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getVisibilityMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setMaterialScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
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
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setMaterialScheme(schemeName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getMaterialScheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMaterialScheme();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setShadowsEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setShadowsEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getShadowsEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getShadowsEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_setLodBias_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat bias_j)
			{
				ev_real32 bias = (ev_real32) bias_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->setLodBias(bias);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getLodBias_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getLodBias();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_createPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->createPass();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_removePass_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->removePass(idx);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getPass_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionPass* __values1 = pObjectX->getPass(idx);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getNumPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumPasses();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_removeAllPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				pObjectX->removeAllPasses();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getPassIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator __values1 = pObjectX->getPassIterator();
				EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *returnvalues = new EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTargetPass_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTargetPass__1isSupported_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTargetPass *pObjectX = (EarthView::World::Graphic::CCompositionTargetPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->_isSupported();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
