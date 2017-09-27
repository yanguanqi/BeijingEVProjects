/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendertovertexbuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* sceneMgr);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback)();
			class CRenderToVertexBufferProxy : public EarthView::World::Graphic::CRenderToVertexBuffer
			{
			private:
				EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback* m_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback;
				EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback* m_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback;
			public:
				CRenderToVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderToVertexBuffer(pList)
				{
					m_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager(EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void(EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback = pCallback;
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderToVertexBuffer::getRenderOperation(op);
				}
				virtual void update(_in EarthView::World::Graphic::CSceneManager* sceneMgr)
				{
					if(m_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback(sceneMgr);
					}
					else
						return this->CRenderToVertexBuffer::update(sceneMgr);
				}
				virtual void reset()
				{
					if(m_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback();
					}
					else
						return this->CRenderToVertexBuffer::reset();
				}
			};
			REGISTER_FACTORY_CLASS(CRenderToVertexBufferProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getVertexDeclaration_CVertexDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->getVertexDeclaration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getMaxVertexCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxVertexCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_setMaxVertexCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 maxVertexCount )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setMaxVertexCount(maxVertexCount);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getOperationType_OperationType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType objXXXX = ptrNativeObject->getOperationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_setOperationType_void_OperationType(void *pObjectXXXX, _in int operationType )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setOperationType((EarthView::World::Graphic::CRenderOperation::OperationType)operationType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_setResetsEveryUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool resetsEveryUpdate )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setResetsEveryUpdate(resetsEveryUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getResetsEveryUpdate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getResetsEveryUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CRenderToVertexBufferProxy* ptr = dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneMgr )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::update(sceneMgr);
				else
					ptrNativeObject->update(sceneMgr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_Callback* pCallback )
			{
				CRenderToVertexBufferProxy* ptr = dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_update_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneMgr )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::update(sceneMgr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::reset();
				else
					ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_Callback* pCallback )
			{
				CRenderToVertexBufferProxy* ptr = dynamic_cast<CRenderToVertexBufferProxy*>((EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderToVertexBuffer_reset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_reset_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderToVertexBuffer::reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_setSourceRenderable_void_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* ref_source )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setSourceRenderable(ref_source);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRenderable*  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getSourceRenderable_CRenderable(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderable* objXXXX = ptrNativeObject->getSourceRenderable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_getRenderToBufferMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getRenderToBufferMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderToVertexBuffer_setRenderToBufferMaterialName_void_EVString(void *pObjectXXXX, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CRenderToVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setRenderToBufferMaterialName(materialName1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderToVertexBuffer*  _stdcall EarthView_World_Graphic_RenderToVertexBufferSharedPtr_get_CRenderToVertexBuffer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderToVertexBufferSharedPtr* ptrNativeObject = (EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) pObjectXXXX;
				EarthView::World::Graphic::CRenderToVertexBuffer* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
