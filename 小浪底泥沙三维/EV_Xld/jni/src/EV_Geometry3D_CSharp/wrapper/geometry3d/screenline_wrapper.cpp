/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/screenline.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_derender_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback)();
			class CScreenLineProxy : public EarthView::World::Geometry3D::CScreenLine
			{
			private:
				EarthView_World_Geometry3D_CScreenLine_render_void_Callback* m_EarthView_World_Geometry3D_CScreenLine_render_void_Callback;
				EarthView_World_Geometry3D_CScreenLine_derender_void_Callback* m_EarthView_World_Geometry3D_CScreenLine_derender_void_Callback;
				EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback* m_EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback;
			public:
				CScreenLineProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenLine(pList)
				{
					m_EarthView_World_Geometry3D_CScreenLine_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_render_void(EarthView_World_Geometry3D_CScreenLine_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_derender_void(EarthView_World_Geometry3D_CScreenLine_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool(EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool(EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8(EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8(EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr(EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CScreenLine_endFlash_void(EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback = pCallback;
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_render_void_Callback();
					}
					else
						return this->CScreenLine::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_derender_void_Callback();
					}
					else
						return this->CScreenLine::derender();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CScreenLine::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CScreenLine::getVisible();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CScreenLine::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CScreenLine::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CScreenLine::getRenderQueueGroup();
				}
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial()
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CScreenLine::getMaterial();
				}
				virtual void flash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount)
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms, flashCount);
					}
					else
						return this->CScreenLine::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				virtual void endFlash()
				{
					if(m_EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback();
					}
					else
						return this->CScreenLine::endFlash();
				}
			};
			REGISTER_FACTORY_CLASS(CScreenLineProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenLine_begin_ev_bool_CColourValue_Real(void *pObjectXXXX, _in const void* colour, _in Real width )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->begin(*(EarthView::World::Graphic::CColourValue*)colour, width);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenLine_begin_ev_bool_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->begin(*(EarthView::World::Graphic::CColourValue*)colour);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenLine_begin_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->begin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenLine_appendPoint_void_CVector2_CColourValue(void *pObjectXXXX, _in const void* position, _in const void* colour )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ptrNativeObject->appendPoint(*(EarthView::World::Spatial::Math::CVector2*)position, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CScreenLine_appendPoint_void_CVector2(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ptrNativeObject->appendPoint(*(EarthView::World::Spatial::Math::CVector2*)position);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CScreenLine_end_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CScreenLine* ptrNativeObject = (EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->end();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_render_void_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_derender_void_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CScreenLine_endFlash_void( void *pObjectXXXX, EarthView_World_Geometry3D_CScreenLine_endFlash_void_Callback* pCallback )
			{
				CScreenLineProxy* ptr = dynamic_cast<CScreenLineProxy*>((EarthView::World::Geometry3D::CScreenLine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CScreenLine_endFlash_void(pCallback);
				}
			}
		}
	}
}
