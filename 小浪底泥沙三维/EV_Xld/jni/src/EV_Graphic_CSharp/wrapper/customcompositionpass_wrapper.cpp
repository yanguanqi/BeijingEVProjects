/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/customcompositionpass.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*  ( _stdcall EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback)(_in EarthView::World::Graphic::CCompositorInstance* instance, _in const EarthView::World::Graphic::CCompositionPass* pass);
			class CCustomCompositionPassProxy : public EarthView::World::Graphic::CCustomCompositionPass
			{
			private:
				EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback* m_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback;
			public:
				CCustomCompositionPassProxy(EarthView::World::Core::CNameValuePairList *pList) : CCustomCompositionPass(pList)
				{
					m_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* createOperation(_in EarthView::World::Graphic::CCompositorInstance* instance, _in const EarthView::World::Graphic::CCompositionPass* pass)
				{
					if(m_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* returnValue = m_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback(instance, pass);
						return returnValue;
					}
					else
						return this->CCustomCompositionPass::createOperation(instance, pass);
				}
			};
			REGISTER_FACTORY_CLASS(CCustomCompositionPassProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*  _stdcall EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* instance, _in const EarthView::World::Graphic::CCompositionPass* pass )
			{
				EarthView::World::Graphic::CCustomCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCustomCompositionPass*) pObjectXXXX;
				if (dynamic_cast<CCustomCompositionPassProxy*>((EarthView::World::Graphic::CCustomCompositionPass*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCustomCompositionPass::createOperation(instance, pass);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* objXXXX = ptrNativeObject->createOperation(instance, pass);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass( void *pObjectXXXX, EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Callback* pCallback )
			{
				CCustomCompositionPassProxy* ptr = dynamic_cast<CCustomCompositionPassProxy*>((EarthView::World::Graphic::CCustomCompositionPass*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation*  _stdcall EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* instance, _in const EarthView::World::Graphic::CCompositionPass* pass )
			{
				EarthView::World::Graphic::CCustomCompositionPass* ptrNativeObject = (EarthView::World::Graphic::CCustomCompositionPass*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCustomCompositionPass::createOperation(instance, pass);
				return objXXXX;
			}
		}
	}
}
