/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingpolygon.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 dx, _in ev_real64 dy);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 angle);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback)(_in void* pnt);
				class CEditingPolygonProxy : public EarthView::World::Spatial2D::Controls::CEditingPolygon
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback;
				public:
					CEditingPolygonProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingPolygon(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType(EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void(EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEditingPolygon::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingPolygon::getGeometry();
					}
					virtual void finishPart()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback();
						}
						else
							return this->CEditingPolygon::finishPart();
					}
					virtual void addPoint(_in EarthView::World::Spatial::Geometry::CPoint& pnt)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback(&pnt);
						}
						else
							return this->CEditingPolygon::addPoint(pnt);
					}
					virtual ev_bool translate(_in ev_real64 dx, _in ev_real64 dy)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback(dx, dy);
							return returnValue;
						}
						else
							return this->CEditingPolygon::translate(dx, dy);
					}
					virtual ev_bool rotate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback(x, y, angle);
							return returnValue;
						}
						else
							return this->CEditingPolygon::rotate(x, y, angle);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingPolygonProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					if (dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					if (dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::getGeometry();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					if (dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::finishPart();
					else
						ptrNativeObject->finishPart();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_finishPart_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::finishPart();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint(void *pObjectXXXX, _in void* pnt )
				{
					EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					if (dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
					else
						ptrNativeObject->addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingPolygon_addPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in void* pnt )
				{
					EarthView::World::Spatial2D::Controls::CEditingPolygon* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPolygon::addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_translate_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEditingPolygonProxy* ptr = dynamic_cast<CEditingPolygonProxy*>((EarthView::World::Spatial2D::Controls::CEditingPolygon*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPolygon_rotate_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
