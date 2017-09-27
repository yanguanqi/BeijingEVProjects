/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackingshapeitem.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback)();
				class CTrackingShapeItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingShapeItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback;
				public:
					CTrackingShapeItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingShapeItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingShapeItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingShapeItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingShapeItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingShapeItem::type();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingShapeItemProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* clr )
				{
					EarthView::World::Spatial2D::Controls::CTrackingShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX;
					ptrNativeObject->setPenColor(clr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getPenColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_setPenWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 width )
				{
					EarthView::World::Spatial2D::Controls::CTrackingShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX;
					ptrNativeObject->setPenWidth(width);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingShapeItem_getPenWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPenWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingShapeItemProxy* ptr = dynamic_cast<CTrackingShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingShapeItemProxy* ptr = dynamic_cast<CTrackingShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingShapeItemProxy* ptr = dynamic_cast<CTrackingShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingShapeItemProxy* ptr = dynamic_cast<CTrackingShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingShapeItem_type_ev_int32(pCallback);
					}
				}
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback)();
				class CTrackingPolylineItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingPolylineItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback;
				public:
					CTrackingPolylineItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingPolylineItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingPolylineItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingPolylineItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingPolylineItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingPolylineItem::type();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingPolylineItemProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingPolylineItemProxy* ptr = dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_boundingRect_CSpatialRect_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingPolylineItemProxy* ptr = dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::isContains(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingPolylineItemProxy* ptr = dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::isContains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingPolylineItemProxy* ptr = dynamic_cast<CTrackingPolylineItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingPolylineItem::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_setPolyline_void_CLineString(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CLineString* lstr )
				{
					EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					ptrNativeObject->setPolyline(lstr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingPolylineItem_getPolyline_CLineString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingPolylineItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingPolylineItem*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->getPolyline();
					return objXXXX;
				}
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback)();
				class CTrackingFillShapeItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback;
				public:
					CTrackingFillShapeItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingFillShapeItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingFillShapeItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingFillShapeItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingFillShapeItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingFillShapeItem::type();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingFillShapeItemProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFillColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* clr )
				{
					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX;
					ptrNativeObject->setFillColor(clr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_getFillColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getFillColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_setFill_void_ev_bool(void *pObjectXXXX, _in ev_bool bFill )
				{
					EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX;
					ptrNativeObject->setFill(bFill);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isFill_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFill();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingFillShapeItemProxy* ptr = dynamic_cast<CTrackingFillShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingFillShapeItemProxy* ptr = dynamic_cast<CTrackingFillShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingFillShapeItemProxy* ptr = dynamic_cast<CTrackingFillShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingFillShapeItemProxy* ptr = dynamic_cast<CTrackingFillShapeItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingFillShapeItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingFillShapeItem_type_ev_int32(pCallback);
					}
				}
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback)();
				class CTrackingRectItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingRectItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback;
				public:
					CTrackingRectItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingRectItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingRectItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingRectItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingRectItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingRectItem::type();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingRectItemProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingRectItemProxy* ptr = dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_boundingRect_CSpatialRect_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingRectItemProxy* ptr = dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::isContains(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingRectItemProxy* ptr = dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::isContains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingRectItemProxy* ptr = dynamic_cast<CTrackingRectItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingRectItem::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_setRect_void_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					ptrNativeObject->setRect(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingRectItem_getRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingRectItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingRectItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->getRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback)();
				class CTrackingEllipseItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingEllipseItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback;
				public:
					CTrackingEllipseItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingEllipseItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback = pCallback;
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingEllipseItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingEllipseItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingEllipseItem::type();
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingEllipseItem::boundingRect();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingEllipseItemProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingEllipseItemProxy* ptr = dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::isContains(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingEllipseItemProxy* ptr = dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::isContains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingEllipseItemProxy* ptr = dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingEllipseItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingEllipseItem::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingEllipseItemProxy* ptr = dynamic_cast<CTrackingEllipseItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingEllipseItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingEllipseItem_boundingRect_CSpatialRect(pCallback);
					}
				}
			}
		}
	}
}
