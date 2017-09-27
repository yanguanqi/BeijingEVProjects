/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapsnapper.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial2D_Controls_CSnapAttributes_mnTolerance( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnapAttributes*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mnTolerance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CSnapAttributes_mnTolerance( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjectXXXX)->mnTolerance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CSnapAttributes_mbSnapVertex( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnapAttributes*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbSnapVertex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CSnapAttributes_mbSnapVertex( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjectXXXX)->mbSnapVertex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CSnapAttributes_mbSnapEdge( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnapAttributes*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mbSnapEdge;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CSnapAttributes_mbSnapEdge( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjectXXXX)->mbSnapEdge = value;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getSnappedPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getSnappedPoint();
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getBeforePoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getBeforePoint();
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getAfterPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getAfterPoint();
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_isVertex_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVertex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_isOnEdge_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOnEdge();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_isAbove_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAbove();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getFeatureId_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getFeatureId();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_isSketchSnapped_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSketchSnapped();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getSnappedPart_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getSnappedPart();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CSnappedResult_getSnappedEditingObject_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CSnappedResult* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getSnappedEditingObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_open_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->open();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_isOpen_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpen();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_close_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_addLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->addLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_removeLayer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->removeLayer(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_insertLayer_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->insertLayer(index, layer);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_getSnapLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSnapLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CSnapAttributes*  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_getLayerSnapAttributes_CSnapAttributes_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CSnapAttributes* objXXXX = ptrNativeObject->getLayerSnapAttributes(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CSnapAttributes*  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_getSketchSnapAttributes_CSnapAttributes(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CSnapAttributes* objXXXX = ptrNativeObject->getSketchSnapAttributes();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_snap_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->snap(dx, dy);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CSnappedResult*  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_getSnappedResult_CSnappedResult(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CSnappedResult* objXXXX = ptrNativeObject->getSnappedResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_getSnapSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSnapSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_setSnapSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->setSnapSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapSnapper_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
