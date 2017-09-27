/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldataexchange.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback)(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback)(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback)(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);
				typedef const EarthView::World::Spatial::Convertor::IDataExchangeListener*  ( _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback)();
				class CModelDataExchangeProxy : public EarthView::World::Spatial3D::DataExchange::CModelDataExchange
				{
				private:
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback;
					EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback* m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback;
				public:
					CModelDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataExchange(pList)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener(EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback = pCallback;
					}
					virtual ev_int32 exchange()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CModelDataExchange::exchange();
					}
					virtual void setSrcDataDriver(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback(ref_driver);
						}
						else
							return this->CModelDataExchange::setSrcDataDriver(ref_driver);
					}
					virtual void setDestDataDriver(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback(ref_driver);
						}
						else
							return this->CModelDataExchange::setDestDataDriver(ref_driver);
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Convertor::EVDataExchangeType returnValue = (EarthView::World::Spatial::Convertor::EVDataExchangeType)m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback();
							return returnValue;
						}
						else
							return this->CModelDataExchange::getType();
					}
					virtual void shutdown()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback();
						}
						else
							return this->CModelDataExchange::shutdown();
					}
					virtual ev_bool startup()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataExchange::startup();
					}
					virtual void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback(ref_listener);
						}
						else
							return this->CModelDataExchange::setListener(ref_listener);
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Convertor::IDataExchangeListener* returnValue = m_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback();
							return returnValue;
						}
						else
							return this->CModelDataExchange::getListener();
					}
				};
				REGISTER_FACTORY_CLASS(CModelDataExchangeProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::exchange();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->exchange();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_exchange_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::exchange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver(void *pObjectXXXX, _in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setSrcDataDriver(ref_driver);
					else
						ptrNativeObject->setSrcDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSrcDataDriver_void_CModelDataDriver_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setSrcDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver(void *pObjectXXXX, _in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setDestDataDriver(ref_driver);
					else
						ptrNativeObject->setDestDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setDestDataDriver_void_CModelDataDriver_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::setDestDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setSource_void_CModelDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pSource, _in const char* dSetName )
				{
					EarthView::World::Core::ev_string dSetName1 = dSetName;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->setSource(pSource, dSetName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setPath_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->setPath(path1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setParams_void_CMeshParams(void *pObjectXXXX, _in const void* params )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->setParams(*(EarthView::World::Spatial3D::DataExchange::CMeshParams*)params);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getType_EVDataExchangeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_addListener_void_CModelDataExchangeListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener* ref_listener )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->addListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::shutdown();
					else
						ptrNativeObject->shutdown();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_shutdown_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::shutdown();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_IsStart_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->IsStart();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					if (dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::startup();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startup();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_startup_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CModelDataExchange::startup();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_stop_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->stop();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getExportPercentage_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getExportPercentage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataExchange_resetImportIndex_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX;
					ptrNativeObject->resetImportIndex();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_setListener_void_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener_Callback* pCallback )
				{
					CModelDataExchangeProxy* ptr = dynamic_cast<CModelDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CModelDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CModelDataExchange_getListener_IDataExchangeListener(pCallback);
					}
				}
			}
		}
	}
}
