/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffprenderstatebuilder.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffprenderstatebuilder_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder& __values1 = EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffprenderstatebuilder_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder* __values1 = EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffprenderstatebuilder_initialize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjXXXX;
					ev_bool __values1 = pObjectX->initialize();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffprenderstatebuilder_ev_1finalize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjXXXX;
					pObjectX->finalize();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffprenderstatebuilder_buildRenderState_1SGPass_1CTargetRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sgPass_j, jlong renderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *sgPass = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) sgPass_j;
					EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState = (EarthView::World::Graphic::RTShaderSystem::CTargetRenderState*) renderState_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjXXXX;
					pObjectX->buildRenderState(sgPass, renderState);
				}
			}
		}
	}
}
