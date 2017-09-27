/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dataexchange2d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback)(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback)(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);
				typedef int  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback)(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);
				typedef const EarthView::World::Spatial::Convertor::IDataExchangeListener*  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback)();
				class CDataExchange2DProxy : public EarthView::World::Spatial::Convertor::CDataExchange2D
				{
				private:
					EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback;
				public:
					CDataExchange2DProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataExchange2D(pList)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver(EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver(EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType(EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32(EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener(EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener(EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback = pCallback;
					}
					virtual ev_int32 exchange()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange2D::exchange();
					}
					virtual void setSrcDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback(ref_driver);
						}
						else
							return this->CDataExchange2D::setSrcDataDriver(ref_driver);
					}
					virtual void setDestDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback(ref_driver);
						}
						else
							return this->CDataExchange2D::setDestDataDriver(ref_driver);
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Convertor::EVDataExchangeType returnValue = (EarthView::World::Spatial::Convertor::EVDataExchangeType)m_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange2D::getType();
					}
					virtual void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback(ref_listener);
						}
						else
							return this->CDataExchange2D::setListener(ref_listener);
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Convertor::IDataExchangeListener* returnValue = m_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange2D::getListener();
					}
				};
				REGISTER_FACTORY_CLASS(CDataExchange2DProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					if (dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange2D::exchange();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->exchange();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_exchange_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange2D::exchange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcSource_void_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ptrNativeObject->setSrcSource(ref_dataSource, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcSource_void_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropettySet )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ptrNativeObject->setSrcSource(pPropettySet);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getSrcFormat_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getSrcFormat();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setDestSource_void_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* dataName )
				{
					EarthView::World::Core::ev_string dataName1 = dataName;
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ptrNativeObject->setDestSource(ref_dataSource, dataName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setDestSource_void_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropettySet )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ptrNativeObject->setDestSource(pPropettySet);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getDestFormat_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getDestFormat();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getSrcName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getSrcName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getDestname_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getDestname();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getSrcPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getSrcPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getDestPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getDestPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getSrcDataName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getSrcDataName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getDestDataName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getDestDataName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_setDataExchangeParam_void_CDataExchangeParam(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::CDataExchangeParam* param )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					ptrNativeObject->setDataExchangeParam(param);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Convertor::CDataExchangeParam*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange2D_getDataExchangeParam_CDataExchangeParam(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchange2D* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::CDataExchangeParam* objXXXX = ptrNativeObject->getDataExchangeParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setSrcDataDriver_void_CDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setDestDataDriver_void_CDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getType_EVDataExchangeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_setListener_void_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener_Callback* pCallback )
				{
					CDataExchange2DProxy* ptr = dynamic_cast<CDataExchange2DProxy*>((EarthView::World::Spatial::Convertor::CDataExchange2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange2D_getListener_IDataExchangeListener(pCallback);
					}
				}
			}
		}
	}
}
