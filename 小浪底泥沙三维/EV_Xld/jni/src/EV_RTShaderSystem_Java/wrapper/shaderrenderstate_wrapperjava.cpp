/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderrenderstate.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->reset();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_addTemplateSubRenderState_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->addTemplateSubRenderState(subRenderState);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_removeTemplateSubRenderState_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->removeTemplateSubRenderState(subRenderState);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_getTemplateSubRenderStateList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList& __values1 = pObjectX->getTemplateSubRenderStateList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_setLightCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightCount_j)
				{
					ev_int32 lightCount[3];
					for (int i = 0; i<3; i++)
					{
						lightCount[i] = *(ev_int32*)lightCount_j;
						lightCount_j++;
					}
					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->setLightCount(lightCount);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_getLightCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightCount_j)
				{
					ev_int32 lightCount[3];
					for (int i = 0; i<3; i++)
					{
						lightCount[i] = *(ev_int32*)lightCount_j;
						lightCount_j++;
					}
					const 					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->getLightCount(lightCount);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_setLightCountAutoUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoUpdate_j)
				{
					ev_bool autoUpdate = (ev_bool) autoUpdate_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					pObjectX->setLightCountAutoUpdate(autoUpdate);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderState_getLightCountAutoUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjXXXX;
					ev_bool __values1 = pObjectX->getLightCountAutoUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_push_1back_1CRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState *t = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) t_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_insert_1ev_1uint32_1CRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState *&t = *(EarthView::World::Graphic::RTShaderSystem::CRenderState**) t_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_resize_1ev_1size_1t_1CRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j, jlong t_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::CRenderState *t = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) t_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->resize(newSize, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_RenderStateList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TargetRenderState_link_1CRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState &other = *(EarthView::World::Graphic::RTShaderSystem::CRenderState*) other_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTargetRenderState*) pObjXXXX;
					pObjectX->link(other, srcPass, dstPass);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_TargetRenderState_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CTargetRenderState*) pObjXXXX;
					pObjectX->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
			}
		}
	}
}
