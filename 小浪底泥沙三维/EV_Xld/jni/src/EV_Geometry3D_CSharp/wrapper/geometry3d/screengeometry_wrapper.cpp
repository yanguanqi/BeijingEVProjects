/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/screengeometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback)();
			class CScreenGeometryProxy : public EarthView::World::Geometry3D::CScreenGeometry
			{
			private:
				EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback* m_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback;
			public:
				CScreenGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenGeometry(pList)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_render_void(EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_derender_void(EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool(EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool(EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8(EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8(EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr(EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void(EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback = pCallback;
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback();
					}
					else
						return this->CScreenGeometry::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback();
					}
					else
						return this->CScreenGeometry::derender();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CScreenGeometry::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CScreenGeometry::getVisible();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CScreenGeometry::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CScreenGeometry::getRenderQueueGroup();
				}
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial()
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CScreenGeometry::getMaterial();
				}
				virtual void flash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount)
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms, flashCount);
					}
					else
						return this->CScreenGeometry::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				virtual void endFlash()
				{
					if(m_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback();
					}
					else
						return this->CScreenGeometry::endFlash();
				}
			};
			REGISTER_FACTORY_CLASS(CScreenGeometryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setCoordinateType_void_ScreenGeometryCoordinateType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->setCoordinateType((EarthView::World::Geometry3D::ScreenGeometryCoordinateType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getCoordinateType_ScreenGeometryCoordinateType(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				EarthView::World::Geometry3D::ScreenGeometryCoordinateType objXXXX = ptrNativeObject->getCoordinateType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_addChildViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->addChildViewport(ref_viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenGeometry_hasChildViewport_ev_bool_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasChildViewport(ref_viewport);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenGeometry_removeChildViewport_ev_bool_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeChildViewport(ref_viewport);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setVisibleInGlobeViewport_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setVisibleInGlobeViewport(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_render_void_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_derender_void_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::derender();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
				else
					ptrNativeObject->setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getRenderQueueGroup();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroup();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getRenderQueueGroup_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getRenderQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getMaterial();
					EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
					EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CScreenGeometry_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::getMaterial();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
				else
					ptrNativeObject->flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_endFlash_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				if (dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::endFlash();
				else
					ptrNativeObject->endFlash();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_Callback* pCallback )
			{
				CScreenGeometryProxy* ptr = dynamic_cast<CScreenGeometryProxy*>((EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenGeometry_endFlash_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenGeometry_endFlash_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenGeometry* ptrNativeObject = (EarthView::World::Geometry3D::CScreenGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CScreenGeometry::endFlash();
			}
		}
	}
}
