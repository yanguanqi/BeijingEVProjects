/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackingitem.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
		}
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
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback)();
				class CTrackingItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingItem
				{
				private:
					EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback;
				public:
					CTrackingItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingItem(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CTrackingItemProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32(EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CSpatialRect returnValue = *(EarthView::World::Spatial::Display::CSpatialRect*)m_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback();
							return returnValue;
						}
						else
							return this->CTrackingItem::boundingRect();
					}
					virtual void paint(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, _in const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback(display, (int&)state, &rect);
						}
						else
							return this->CTrackingItem::paint(display, state, rect);
					}
					virtual ev_bool isContains(_in ev_real64 x, _in ev_real64 y) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTrackingItem::isContains(x, y);
					}
					virtual ev_int32 type() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTrackingItem::type();
					}
				};
				REGISTER_FACTORY_CLASS(CTrackingItemProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::boundingRect();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_Callback* pCallback )
				{
					CTrackingItemProxy* ptr = dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_boundingRect_CSpatialRect_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					else
						ptrNativeObject->paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_Callback* pCallback )
				{
					CTrackingItemProxy* ptr = dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_paint_void_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in const int& state, _in const void* rect )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::paint(display, (EarthView::World::Spatial2D::Controls::EVTrackingItemState&)state, *(EarthView::World::Spatial::Display::CSpatialRect*)rect);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_CPoint(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* pnt )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isContains(pnt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::isContains(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CTrackingItemProxy* ptr = dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isContains_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::isContains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					if (dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::type();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->type();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_Callback* pCallback )
				{
					CTrackingItemProxy* ptr = dynamic_cast<CTrackingItemProxy*>((EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_type_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTrackingItem::type();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_flags_EVTrackingItemFlags(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemFlags objXXXX = ptrNativeObject->flags();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setFlags_void_EVTrackingItemFlags(void *pObjectXXXX, _in int flags )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setFlags((EarthView::World::Spatial2D::Controls::EVTrackingItemFlags)flags);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isInterest_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInterest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setInterest_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setInterest(b);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_unitType_EVTrackingItemUnit(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemUnit objXXXX = ptrNativeObject->unitType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_id_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->id();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_cacheMode_EVCacheMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVCacheMode objXXXX = ptrNativeObject->cacheMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setCacheMode_void_EVCacheMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setCacheMode((EarthView::World::Spatial2D::Controls::EVCacheMode)mode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setPositionType_void_EVTrackingItemPosition(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setPositionType((EarthView::World::Spatial2D::Controls::EVTrackingItemPosition)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_getPositionType_EVTrackingItemPosition(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemPosition objXXXX = ptrNativeObject->getPositionType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_cursor_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->cursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setCursor_void_ev_int32(void *pObjectXXXX, _in ev_int32 cursor )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setCursor(cursor);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isShowAsScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isShowAsScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setShowAsScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bAs )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setShowAsScale(bAs);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_minScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->minScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 minSclae )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setMinScale(minSclae);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_maxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->maxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxScale )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setMaxScale(maxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setSelected(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_isLocked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setLocked_void_ev_bool(void *pObjectXXXX, _in ev_bool lock )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setLocked(lock);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_pos_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->pos();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setPos_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setPos(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setPos_void_CPoint(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* pos )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setPos(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_transparent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->transparent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setTransparent_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setTransparent(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_rotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->rotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setRotation_void_ev_real64(void *pObjectXXXX, _in ev_real64 rotation )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setRotation(rotation);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_scale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->scale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setScale(scale);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_toolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setToolTip_void_EVString(void *pObjectXXXX, _in const char* tip )
				{
					EarthView::World::Core::ev_string tip1 = tip;
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setToolTip(tip1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CTrackingItem*  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_parentItem_CTrackingItem(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* objXXXX = ptrNativeObject->parentItem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setParentItem_void_CTrackingItem(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CTrackingItem* ref_newParent )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setParentItem(ref_newParent);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_zValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->zValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_setZValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 zVar )
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->setZValue(zVar);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_transform_void_ev_real64_ev_real64_ev_int32_EVTransformDirection(void *pObjectXXXX, _in ev_real64* x, _in ev_real64* y, _in ev_int32 count, _in int direct )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->transform(x, y, count, (EarthView::World::Spatial2D::Controls::EVTransformDirection)direct);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_transform_void_CPoint_EVTransformDirection(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPoint* pnt, _in int direct )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->transform(pnt, (EarthView::World::Spatial2D::Controls::EVTransformDirection)direct);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTrackingItem_transform_void_CSpatialRect_EVTransformDirection(void *pObjectXXXX, _inout void* rect, _in int direct )
				{
					const EarthView::World::Spatial2D::Controls::CTrackingItem* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjectXXXX;
					ptrNativeObject->transform(*(EarthView::World::Spatial::Display::CSpatialRect*)rect, (EarthView::World::Spatial2D::Controls::EVTransformDirection)direct);
				}
			}
		}
	}
}
