/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/layoutactiveevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_setControl_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ptrNativeObject->setControl(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_getControl_ISpatialControl(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getControl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_getPageLayout_IPageLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->getPageLayout();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_setPageLayout_void_IPageLayout(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPageLayout* ref_pageLayout )
				{
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ptrNativeObject->setPageLayout(ref_pageLayout);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CLayoutOperationEvent_setElement_void_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					EarthView::World::Spatial::SystemUI::CLayoutOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutOperationEvent*) pObjectXXXX;
					ptrNativeObject->setElement(pElement);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_SystemUI_CLayoutOperationEvent_getElement_IElement(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CLayoutOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayoutOperationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->getElement();
					return objXXXX;
				}
			}
		}
	}
}
