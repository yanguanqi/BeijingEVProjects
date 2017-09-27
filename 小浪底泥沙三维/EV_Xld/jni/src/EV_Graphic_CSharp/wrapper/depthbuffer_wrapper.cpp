/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/depthbuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback)(_in EarthView::World::Graphic::CRenderTarget* renderTarget);
			typedef void  ( _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback)(_in EarthView::World::Graphic::CRenderTarget* ref_renderTarget);
			typedef void  ( _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback)(_in EarthView::World::Graphic::CRenderTarget* renderTarget);
			class CDepthBufferProxy : public EarthView::World::Graphic::CDepthBuffer
			{
			private:
				EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback* m_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback;
				EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback* m_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback;
				EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback* m_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback;
				EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback* m_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback;
				EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback* m_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback;
				EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback* m_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback;
				EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback* m_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback;
				EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback* m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback;
				EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback* m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback;
			public:
				CDepthBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDepthBuffer(pList)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16(EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16(EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t(EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t(EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t(EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString(EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget(EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget(EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget(EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback = pCallback;
				}
				virtual ev_uint16 getPoolId() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getPoolId();
				}
				virtual ev_uint16 getBitDepth() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getBitDepth();
				}
				virtual ev_size_t getWidth() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getWidth();
				}
				virtual ev_size_t getHeight() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getHeight();
				}
				virtual ev_size_t getFsaa() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getFsaa();
				}
				virtual EVString getFsaaHint() const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDepthBuffer::getFsaaHint();
				}
				virtual ev_bool isCompatible(_in EarthView::World::Graphic::CRenderTarget* renderTarget) const
				{
					if(m_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback(renderTarget);
						return returnValue;
					}
					else
						return this->CDepthBuffer::isCompatible(renderTarget);
				}
				virtual void _notifyRenderTargetAttached(_in EarthView::World::Graphic::CRenderTarget* ref_renderTarget)
				{
					if(m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback(ref_renderTarget);
					}
					else
						return this->CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
				}
				virtual void _notifyRenderTargetDetached(_in EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if(m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback(renderTarget);
					}
					else
						return this->CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
				}
			};
			REGISTER_FACTORY_CLASS(CDepthBufferProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDepthBuffer__setPoolId_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 poolId )
			{
				EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ptrNativeObject->_setPoolId(poolId);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getPoolId();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getPoolId();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CDepthBuffer_getPoolId_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getPoolId();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getBitDepth();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getBitDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CDepthBuffer_getBitDepth_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getWidth();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getWidth_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getHeight();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getHeight_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getFsaa();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getFsaa();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaa_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getFsaa();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getFsaaHint();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFsaaHint();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDepthBuffer_getFsaaHint_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::getFsaaHint();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDepthBuffer_isManual_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isManual();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::isCompatible(renderTarget);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCompatible(renderTarget);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDepthBuffer_isCompatible_ev_bool_CRenderTarget_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				const EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::isCompatible(renderTarget);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* ref_renderTarget )
			{
				EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
				else
					ptrNativeObject->_notifyRenderTargetAttached(ref_renderTarget);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetAttached_void_CRenderTarget_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* ref_renderTarget )
			{
				EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				if (dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
				else
					ptrNativeObject->_notifyRenderTargetDetached(renderTarget);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_Callback* pCallback )
			{
				CDepthBufferProxy* ptr = dynamic_cast<CDepthBufferProxy*>((EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDepthBuffer__notifyRenderTargetDetached_void_CRenderTarget_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CDepthBuffer* ptrNativeObject = (EarthView::World::Graphic::CDepthBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
			}
		}
	}
}
