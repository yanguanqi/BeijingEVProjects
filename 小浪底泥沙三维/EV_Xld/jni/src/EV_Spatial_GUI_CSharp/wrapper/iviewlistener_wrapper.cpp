/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/iviewlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef void  ( _stdcall EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
			class IViewListenerProxy : public EarthView::World::Spatial::IViewListener
			{
			private:
				EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback* m_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback;
			public:
				IViewListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IViewListener(pList)
				{
					m_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback = pCallback;
				}
				virtual void onViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
				{
					if(m_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback(args);
					}
					else
						return this->IViewListener::onViewChanged(args);
				}
			};
			REGISTER_FACTORY_CLASS(IViewListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
			{
				EarthView::World::Spatial::IViewListener* ptrNativeObject = (EarthView::World::Spatial::IViewListener*) pObjectXXXX;
				if (dynamic_cast<IViewListenerProxy*>((EarthView::World::Spatial::IViewListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::IViewListener::onViewChanged(args);
				else
					ptrNativeObject->onViewChanged(args);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Callback* pCallback )
			{
				IViewListenerProxy* ptr = dynamic_cast<IViewListenerProxy*>((EarthView::World::Spatial::IViewListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
			{
				EarthView::World::Spatial::IViewListener* ptrNativeObject = (EarthView::World::Spatial::IViewListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::IViewListener::onViewChanged(args);
			}
		}
	}
}
