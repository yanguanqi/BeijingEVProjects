/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/ShapeDataExchange.h"
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback)(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback)(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback)(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);
				typedef const EarthView::World::Spatial::Convertor::IDataExchangeListener*  ( _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback)();
				class CShapeDataExchangeProxy : public EarthView::World::Spatial3D::DataExchange::CShapeDataExchange
				{
				private:
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback;
					EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback* m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback;
				public:
					CShapeDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CShapeDataExchange(pList)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener(EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback = pCallback;
					}
					virtual ev_bool startup()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CShapeDataExchange::startup();
					}
					virtual ev_int32 exchange()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CShapeDataExchange::exchange();
					}
					virtual void setSrcDataDriver(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback(ref_driver);
						}
						else
							return this->CShapeDataExchange::setSrcDataDriver(ref_driver);
					}
					virtual void setDestDataDriver(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback(ref_driver);
						}
						else
							return this->CShapeDataExchange::setDestDataDriver(ref_driver);
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Convertor::EVDataExchangeType returnValue = (EarthView::World::Spatial::Convertor::EVDataExchangeType)m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback();
							return returnValue;
						}
						else
							return this->CShapeDataExchange::getType();
					}
					virtual void shutdown()
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback();
						}
						else
							return this->CShapeDataExchange::shutdown();
					}
					virtual void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback(ref_listener);
						}
						else
							return this->CShapeDataExchange::setListener(ref_listener);
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if(m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Convertor::IDataExchangeListener* returnValue = m_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback();
							return returnValue;
						}
						else
							return this->CShapeDataExchange::getListener();
					}
				};
				REGISTER_FACTORY_CLASS(CShapeDataExchangeProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX;
					if (dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CShapeDataExchange::startup();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startup();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_startup_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::DataExchange::CShapeDataExchange::startup();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setModelFolderPath_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::DataExchange::CShapeDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX;
					ptrNativeObject->setModelFolderPath(path1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setShapeFieldsValue_void_CShapeAssignedFields(void *pObjectXXXX, _in const void* value )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeDataExchange* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX;
					ptrNativeObject->setShapeFieldsValue(*(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setSrcDataDriver_void_CModelDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setDestDataDriver_void_CModelDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_shutdown_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getType_EVDataExchangeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_exchange_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_setListener_void_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener_Callback* pCallback )
				{
					CShapeDataExchangeProxy* ptr = dynamic_cast<CShapeDataExchangeProxy*>((EarthView::World::Spatial3D::DataExchange::CShapeDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_DataExchange_CShapeDataExchange_getListener_IDataExchangeListener(pCallback);
					}
				}
			}
		}
	}
}
