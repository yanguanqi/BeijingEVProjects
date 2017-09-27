/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderprogramset.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ProgramSet_getCpuVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CProgram* __values1 = pObjectX->getCpuVertexProgram();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ProgramSet_getCpuFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CProgram* __values1 = pObjectX->getCpuFragmentProgram();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ProgramSet_getGpuVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjXXXX;
					EarthView::World::Graphic::CGpuProgramPtr __values1 = pObjectX->getGpuVertexProgram();
					EarthView::World::Graphic::CGpuProgramPtr *returnvalues = new EarthView::World::Graphic::CGpuProgramPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ProgramSet_getGpuFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjXXXX;
					EarthView::World::Graphic::CGpuProgramPtr __values1 = pObjectX->getGpuFragmentProgram();
					EarthView::World::Graphic::CGpuProgramPtr *returnvalues = new EarthView::World::Graphic::CGpuProgramPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
