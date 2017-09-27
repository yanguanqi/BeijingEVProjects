/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataexchangelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback)(_in ev_uint32 totalNum);
				class IDataExchangeListenerProxy : public EarthView::World::Spatial::Convertor::IDataExchangeListener
				{
				private:
					EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback* m_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback;
				public:
					IDataExchangeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataExchangeListener(pList)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback = pCallback;
					}
					virtual void init(_in ev_uint32 totalNum)
					{
						if(m_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback(totalNum);
						}
						else
							return this->IDataExchangeListener::init(totalNum);
					}
				};
				REGISTER_FACTORY_CLASS(IDataExchangeListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 totalNum )
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) pObjectXXXX;
					if (dynamic_cast<IDataExchangeListenerProxy*>((EarthView::World::Spatial::Convertor::IDataExchangeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchangeListener::init(totalNum);
					else
						ptrNativeObject->init(totalNum);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Callback* pCallback )
				{
					IDataExchangeListenerProxy* ptr = dynamic_cast<IDataExchangeListenerProxy*>((EarthView::World::Spatial::Convertor::IDataExchangeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 totalNum )
				{
					EarthView::World::Spatial::Convertor::IDataExchangeListener* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchangeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchangeListener::init(totalNum);
				}
			}
		}
	}
}
