/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffprenderstatebuilder.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPRenderStateBuilder_getSingleton_CFFPRenderStateBuilder( )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder& objXXXX = EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder::getSingleton();
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPRenderStateBuilder_getSingletonPtr_CFFPRenderStateBuilder( )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder* objXXXX = EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPRenderStateBuilder_initialize_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->initialize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPRenderStateBuilder_finalize_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjectXXXX;
					ptrNativeObject->finalize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPRenderStateBuilder_buildRenderState_void_SGPass_CTargetRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass* sgPass, _in EarthView::World::Graphic::RTShaderSystem::CTargetRenderState* renderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder*) pObjectXXXX;
					ptrNativeObject->buildRenderState(sgPass, renderState);
				}
			}
		}
	}
}
