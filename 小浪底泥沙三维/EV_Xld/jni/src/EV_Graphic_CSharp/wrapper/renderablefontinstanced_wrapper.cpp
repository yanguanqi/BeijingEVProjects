/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderablefontinstanced.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			class CRenderableFontInstancedProxy : public EarthView::World::Graphic::CRenderableFontInstanced
			{
			private:
				EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback;
			public:
				CRenderableFontInstancedProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableFontInstanced(pList)
				{
					m_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				virtual void setDepthCheckEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableFontInstanced::setDepthCheckEnabled(enable);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableFontInstancedProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setAutoLineFeed_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32 width )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setAutoLineFeed(width);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_bindWorldMaxtrix_void_CMatrix4(void *pObjectXXXX, _in const EarthView::World::Spatial::Math::CMatrix4* mx4 )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->bindWorldMaxtrix(mx4);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontInstancedProxy*>((EarthView::World::Graphic::CRenderableFontInstanced*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFontInstanced::setDepthCheckEnabled(enable);
				else
					ptrNativeObject->setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableFontInstancedProxy* ptr = dynamic_cast<CRenderableFontInstancedProxy*>((EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setDepthCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFontInstanced::setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_getDepthCheckEnabled_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDepthCheckEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setText_void_EarthView_World_Core_CUnicodeString(void *pObjectXXXX, _in const ev_wchar* wstr )
			{
				EarthView::World::Core::ev_wstring wstr1 = wstr;
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setText(wstr1);
			}
			extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_getText_EarthView_World_Core_CUnicodeString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				const EarthView::World::Core::CUnicodeString& objXXXX = ptrNativeObject->getText();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_setTextStyle_void_CTextureTextStyle(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureTextStyle* newStyle )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->setTextStyle(newStyle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_updateRenderStatus_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool geometryOutOfDate, _in ev_bool colorOutOfDate )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->updateRenderStatus(geometryOutOfDate, colorOutOfDate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_refresh_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ptrNativeObject->refresh();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFontInstanced_forceRefresh_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderableFontInstanced* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->forceRefresh();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_getSingleton_CRenderableFontInstanceObjectCreatorManager( )
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* objXXXX = EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager::getSingleton();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_destorySingleton_void( )
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager::destorySingleton();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObject*  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_createInstanceObject_CInstanceObject_CRenderableFontInstanced_CTextureTextStyle_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderableFontInstanced* textInstance, _in EarthView::World::Graphic::CTextureTextStyle* textStyle, _inout char*& matName )
			{
				EarthView::World::Core::ev_string matName1 = matName;
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceObject* objXXXX = ptrNativeObject->createInstanceObject(textInstance, textStyle, matName1);
				matName=matName1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_destroyInstanceObjects_void_CRenderableFontInstanced(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderableFontInstanced* textInstance )
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjectXXXX;
				ptrNativeObject->destroyInstanceObjects(textInstance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_addRenderableFontInstancedRequest_void_CRenderableFontInstanced(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderableFontInstanced* textInstance )
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjectXXXX;
				ptrNativeObject->addRenderableFontInstancedRequest(textInstance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFontInstanceObjectCreatorManager_abortRenderableFontInstancedRequest_void_CRenderableFontInstanced(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderableFontInstanced* textInstance )
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* ptrNativeObject = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjectXXXX;
				ptrNativeObject->abortRenderableFontInstancedRequest(textInstance);
			}
		}
	}
}
