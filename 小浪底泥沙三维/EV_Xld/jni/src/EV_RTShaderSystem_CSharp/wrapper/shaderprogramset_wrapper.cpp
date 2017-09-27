/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderprogramset.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CProgram*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramSet_getCpuVertexProgram_CProgram(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CProgram* objXXXX = ptrNativeObject->getCpuVertexProgram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CProgram*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramSet_getCpuFragmentProgram_CProgram(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CProgram* objXXXX = ptrNativeObject->getCpuFragmentProgram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramSet_getGpuVertexProgram_CGpuProgramPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjectXXXX;
					EarthView::World::Graphic::CGpuProgramPtr objXXXX = ptrNativeObject->getGpuVertexProgram();
					EarthView::World::Graphic::CGpuProgramPtr *pXXXX = new EarthView::World::Graphic::CGpuProgramPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramSet_getGpuFragmentProgram_CGpuProgramPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) pObjectXXXX;
					EarthView::World::Graphic::CGpuProgramPtr objXXXX = ptrNativeObject->getGpuFragmentProgram();
					EarthView::World::Graphic::CGpuProgramPtr *pXXXX = new EarthView::World::Graphic::CGpuProgramPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
