/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingsketch.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback)(_in ev_real64 dx, _in ev_real64 dy);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 angle);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback)(_in void* pnt);
				class CEditingSketchProxy : public EarthView::World::Spatial2D::Controls::CEditingSketch
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback;
				public:
					CEditingSketchProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingSketch(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType(EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void(EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEditingSketch::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingSketch::getGeometry();
					}
					virtual void finishPart()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback();
						}
						else
							return this->CEditingSketch::finishPart();
					}
					virtual ev_bool translate(_in ev_real64 dx, _in ev_real64 dy)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback(dx, dy);
							return returnValue;
						}
						else
							return this->CEditingSketch::translate(dx, dy);
					}
					virtual ev_bool rotate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback(x, y, angle);
							return returnValue;
						}
						else
							return this->CEditingSketch::rotate(x, y, angle);
					}
					virtual void addPoint(_in EarthView::World::Spatial::Geometry::CPoint& pnt)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback(&pnt);
						}
						else
							return this->CEditingSketch::addPoint(pnt);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingSketchProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::getGeometry();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::finishPart();
					else
						ptrNativeObject->finishPart();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_finishPart_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::finishPart();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::translate(dx, dy);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->translate(dx, dy);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_translate_ev_bool_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::translate(dx, dy);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::rotate(x, y, angle);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rotate(x, y, angle);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_rotate_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::rotate(x, y, angle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getPointCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getPointCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getPartCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getPartCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_indexForPart_ev_int32_CEditingObject(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingObject* part )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->indexForPart(part);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getPart_CEditingObject_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getPart(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_getLastPart_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->getLastPart();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_insertPart_ev_bool_CEditingObject_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingObject* part, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertPart(part, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_removePart_ev_bool_CEditingObject(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingObject* part )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removePart(part);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint(void *pObjectXXXX, _in void* pnt )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					if (dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
					else
						ptrNativeObject->addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_Callback* pCallback )
				{
					CEditingSketchProxy* ptr = dynamic_cast<CEditingSketchProxy*>((EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingSketch_addPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in void* pnt )
				{
					EarthView::World::Spatial2D::Controls::CEditingSketch* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingSketch*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingSketch::addPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
				}
			}
		}
	}
}
