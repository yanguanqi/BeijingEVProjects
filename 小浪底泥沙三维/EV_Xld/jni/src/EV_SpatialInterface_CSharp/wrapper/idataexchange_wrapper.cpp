/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataexchange.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback)(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);
				typedef const EarthView::World::Spatial::Convertor::IDataExchangeListener*  ( _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback)();
				class IDataExchangeProxy : public EarthView::World::Spatial::Convertor::IDataExchange
				{
				private:
					EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback* m_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback;
					EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback* m_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback;
					EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback;
					EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback;
				public:
					IDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataExchange(pList)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if(m_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Convertor::EVDataExchangeType returnValue = (EarthView::World::Spatial::Convertor::EVDataExchangeType)m_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback();
							return returnValue;
						}
						else
							return this->IDataExchange::getType();
					}
					virtual ev_int32 exchange()
					{
						if(m_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IDataExchange::exchange();
					}
					virtual void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback(ref_listener);
						}
						else
							return this->IDataExchange::setListener(ref_listener);
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if(m_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Convertor::IDataExchangeListener* returnValue = m_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback();
							return returnValue;
						}
						else
							return this->IDataExchange::getListener();
					}
				};
				REGISTER_FACTORY_CLASS(IDataExchangeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					if (dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType( void *pObjectXXXX, EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Callback* pCallback )
				{
					IDataExchangeProxy* ptr = dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					if (dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::exchange();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->exchange();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Callback* pCallback )
				{
					IDataExchangeProxy* ptr = dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::exchange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener )
				{
					EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					if (dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::setListener(ref_listener);
					else
						ptrNativeObject->setListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback )
				{
					IDataExchangeProxy* ptr = dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener )
				{
					EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::setListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Convertor::IDataExchangeListener*  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					if (dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::getListener();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->getListener();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Callback* pCallback )
				{
					IDataExchangeProxy* ptr = dynamic_cast<IDataExchangeProxy*>((EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Convertor::IDataExchangeListener*  _stdcall EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::IDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::IDataExchange*) pObjectXXXX;
					const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::IDataExchange::getListener();
					return objXXXX;
				}
			}
		}
	}
}
