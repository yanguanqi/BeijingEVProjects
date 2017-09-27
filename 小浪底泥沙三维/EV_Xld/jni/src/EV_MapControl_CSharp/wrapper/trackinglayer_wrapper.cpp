/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackinglayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItemSet_count_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItemSet* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->count();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CTrackingItem*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItemSet_item_CTrackingItem_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItemSet* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* objXXXX = ptrNativeObject->item(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItemSet_isExist_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItemSet* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExist(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_addItem_void_CTrackingItem(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CTrackingItem* ref_item )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->addItem(ref_item);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_removeItem_void_CTrackingItem(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CTrackingItem* item )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->removeItem(item);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CTrackingItem*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_itemAt_CTrackingItem_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* objXXXX = ptrNativeObject->itemAt(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_items_CTrackingItemSet_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet objXXXX = ptrNativeObject->items(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pXXXX = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_items_CTrackingItemSet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet objXXXX = ptrNativeObject->items();
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pXXXX = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_selectedItems_CTrackingItemSet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet objXXXX = ptrNativeObject->selectedItems();
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pXXXX = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_select_ev_bool_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CTrackingItem*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_foucsItem_CTrackingItem(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* objXXXX = ptrNativeObject->foucsItem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_itemsBoundingRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->itemsBoundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_update_void_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->update(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_paintInterestItems_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->paintInterestItems();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_repaint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->repaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingLayer_repaint_void_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjectXXXX;
					ptrNativeObject->repaint(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
			}
		}
	}
}
