/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorlogic.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback)(_in EarthView::World::Graphic::CCompositorInstance* newInstance);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback)(_in EarthView::World::Graphic::CCompositorInstance* destroyedInstance);
			class CCompositorLogicProxy : public EarthView::World::Graphic::CCompositorLogic
			{
			private:
				EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback* m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback;
				EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback* m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback;
			public:
				CCompositorLogicProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorLogic(pList)
				{
					m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback = pCallback;
				}
				virtual void compositorInstanceCreated(_in EarthView::World::Graphic::CCompositorInstance* newInstance)
				{
					if(m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback(newInstance);
					}
					else
						return this->CCompositorLogic::compositorInstanceCreated(newInstance);
				}
				virtual void compositorInstanceDestroyed(_in EarthView::World::Graphic::CCompositorInstance* destroyedInstance)
				{
					if(m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback(destroyedInstance);
					}
					else
						return this->CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorLogicProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* newInstance )
			{
				EarthView::World::Graphic::CCompositorLogic* ptrNativeObject = (EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX;
				if (dynamic_cast<CCompositorLogicProxy*>((EarthView::World::Graphic::CCompositorLogic*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorLogic::compositorInstanceCreated(newInstance);
				else
					ptrNativeObject->compositorInstanceCreated(newInstance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance( void *pObjectXXXX, EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Callback* pCallback )
			{
				CCompositorLogicProxy* ptr = dynamic_cast<CCompositorLogicProxy*>((EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* newInstance )
			{
				EarthView::World::Graphic::CCompositorLogic* ptrNativeObject = (EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorLogic::compositorInstanceCreated(newInstance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* destroyedInstance )
			{
				EarthView::World::Graphic::CCompositorLogic* ptrNativeObject = (EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX;
				if (dynamic_cast<CCompositorLogicProxy*>((EarthView::World::Graphic::CCompositorLogic*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
				else
					ptrNativeObject->compositorInstanceDestroyed(destroyedInstance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance( void *pObjectXXXX, EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Callback* pCallback )
			{
				CCompositorLogicProxy* ptr = dynamic_cast<CCompositorLogicProxy*>((EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* destroyedInstance )
			{
				EarthView::World::Graphic::CCompositorLogic* ptrNativeObject = (EarthView::World::Graphic::CCompositorLogic*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorLogic::compositorInstanceDestroyed(destroyedInstance);
			}
		}
	}
}
