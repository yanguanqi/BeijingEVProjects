/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/geometryeditor.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_loadGeometry_void_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->loadGeometry(id);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getGeometryID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getGeometryID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getSketchSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSketchSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_setSketchSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->setSketchSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getSketchVertexSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSketchVertexSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_setSketchVertexSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->setSketchVertexSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getEndVertexSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getEndVertexSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_setEndVertexSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->setEndVertexSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_setActiveType_void_EditingObjectType(void *pObjectXXXX, _in int objectType )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->setActiveType((EarthView::World::Spatial2D::Controls::EditingObjectType)objectType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getActiveType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getActiveType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getActiveObject_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getActiveObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getActivePart_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getActivePart();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingSketch*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_getEditingSketch_CEditingSketch(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingSketch* objXXXX = ptrNativeObject->getEditingSketch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_updateSketch_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->updateSketch();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_registerObject_void_CEditingObject(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingObject* object )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					ptrNativeObject->registerObject(object);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CGeometryEditor_newObject_CEditingObject_EditingObjectType(void *pObjectXXXX, _in int objectType )
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->newObject((EarthView::World::Spatial2D::Controls::EditingObjectType)objectType);
					return objXXXX;
				}
			}
		}
	}
}
