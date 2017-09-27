/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackinggeomitemex.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback)();
				class CTrackingGeomItemExProxy : public EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback;
				public:
					CTrackingGeomItemExProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingGeomItemEx(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback = pCallback;
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingGeomItemEx::paint(display, state, rect);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingGeomItemEx::type();
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingGeomItemEx::boundingRect();
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingGeomItemEx::isContains(x, y);
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingGeomItemExProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingGeomItemExProxy* ptr = dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					if (dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_Callback* pCallback )
				{
					CTrackingGeomItemExProxy* ptr = dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_setVertexSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					ptrNativeObject->setVertexSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_getVertexSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getVertexSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingGeomItemExProxy* ptr = dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingGeomItemExProxy* ptr = dynamic_cast<CTrackingGeomItemExProxy*>((EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingGeomItemEx_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
