/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/screenpoint.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback)();
			class CScreenPointProxy : public EarthView::World::Geometry3D::CScreenPoint
			{
			private:
				EarthView_World_Geometry3D_CScreenPoint_render_void_Callback* m_EarthView_World_Geometry3D_CScreenPoint_render_void_Callback;
				EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback* m_EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback;
				EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback* m_EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback;
			public:
				CScreenPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenPoint(pList)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_render_void(EarthView_World_Geometry3D_CScreenPoint_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_derender_void(EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool(EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool(EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8(EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8(EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr(EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenPoint_endFlash_void(EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback = pCallback;
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_render_void_Callback();
					}
					else
						return this->CScreenPoint::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback();
					}
					else
						return this->CScreenPoint::derender();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CScreenPoint::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CScreenPoint::getVisible();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CScreenPoint::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CScreenPoint::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CScreenPoint::getRenderQueueGroup();
				}
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial()
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CScreenPoint::getMaterial();
				}
				virtual void flash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount)
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms, flashCount);
					}
					else
						return this->CScreenPoint::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				virtual void endFlash()
				{
					if(m_EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback();
					}
					else
						return this->CScreenPoint::endFlash();
				}
			};
			REGISTER_FACTORY_CLASS(CScreenPointProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_begin_void_CColourValue_Real(void *pObjectXXXX, _in const void* color, _in Real size )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->begin(*(EarthView::World::Graphic::CColourValue*)color, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_begin_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->begin(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_begin_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->begin();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_appendPoint_void_CVector2_CColourValue_Real(void *pObjectXXXX, _in const void* position, _in const void* color, _in Real size )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->appendPoint(*(EarthView::World::Spatial::Math::CVector2*)position, *(EarthView::World::Graphic::CColourValue*)color, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_appendPoint_void_CVector2_CColourValue(void *pObjectXXXX, _in const void* position, _in const void* color )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->appendPoint(*(EarthView::World::Spatial::Math::CVector2*)position, *(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_appendPoint_void_CVector2(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->appendPoint(*(EarthView::World::Spatial::Math::CVector2*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenPoint_end_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenPoint* ptrNativeObject = (EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX;
				ptrNativeObject->end();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_render_void_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_derender_void_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenPoint_endFlash_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenPoint_endFlash_void_Callback* pCallback )
			{
				CScreenPointProxy* ptr = dynamic_cast<CScreenPointProxy*>((EarthView::World::Geometry3D::CScreenPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenPoint_endFlash_void(pCallback);
				}
			}
		}
	}
}
