/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dataexchange.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isDiscardEmptyGeometryRecord_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDiscardEmptyGeometryRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isDiscardInsignificanceGeometryRecord_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDiscardInsignificanceGeometryRecord();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setDiscardEmptyGeometryRecord_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setDiscardEmptyGeometryRecord(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setDiscardInsignificanceGeometryRecord_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setDiscardInsignificanceGeometryRecord(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setProject7Param_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy, _in ev_real64 dz, _in ev_real64 rx, _in ev_real64 ry, _in ev_real64 rz, _in ev_real64 ppm )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setProject7Param(dx, dy, dz, rx, ry, rz, ppm);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getProject7Param_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					const ev_real64* objXXXX = ptrNativeObject->getProject7Param();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setDestSpatialReference_void_ISpatialReference_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_bool translateCoordinates )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setDestSpatialReference(sr, translateCoordinates);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isTranslateCoordiantes_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isTranslateCoordiantes();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_resetProject7Param_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->resetProject7Param();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getDestSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getDestSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setDestDimension_void_EVDatasetDimension(void *pObjectXXXX, _in int dimesion )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setDestDimension((EarthView::World::Spatial::Convertor::EVDatasetDimension)dimesion);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getDestDimension_EVDatasetDimension(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::EVDatasetDimension objXXXX = ptrNativeObject->getDestDimension();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setSelectFeatureSQL_void_EVString(void *pObjectXXXX, _in const char* sql )
				{
					EarthView::World::Core::ev_string sql1 = sql;
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setSelectFeatureSQL(sql1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getSelectFeatureSQL_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getSelectFeatureSQL();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isSelectFeatureBySQL_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSelectFeatureBySQL();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isSelectFeatureByIDs_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSelectFeatureByIDs();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setSelectedFeatures_void_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32* featureIDs, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setSelectedFeatures(featureIDs, count);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getSelectedFeatureCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSelectedFeatureCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getSelectedFeatureID_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSelectedFeatureID(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_resetConvertFeatures_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->resetConvertFeatures();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isConvertAllFeatures_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isConvertAllFeatures();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_setSelectedFields_void_StringVector(void *pObjectXXXX, _in void* fieldnamelist )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->setSelectedFields(*(EarthView::World::Core::StringVector*)fieldnamelist);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getSelectedFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSelectedFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_getSelectedFieldName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSelectedFieldName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_resetConvertFields_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ptrNativeObject->resetConvertFields();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataExchangeParam_isConvertAllFields_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchangeParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isConvertAllFields();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback)(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback)(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);
				typedef int  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback)(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);
				typedef const EarthView::World::Spatial::Convertor::IDataExchangeListener*  ( _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback)();
				class CDataExchangeProxy : public EarthView::World::Spatial::Convertor::CDataExchange
				{
				private:
					EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback;
					EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback* m_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback;
				public:
					CDataExchangeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataExchange(pList)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver(EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver(EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType(EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32(EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener(EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener(EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback = pCallback;
					}
					virtual ev_int32 exchange()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange::exchange();
					}
					virtual void setSrcDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback(ref_driver);
						}
						else
							return this->CDataExchange::setSrcDataDriver(ref_driver);
					}
					virtual void setDestDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback(ref_driver);
						}
						else
							return this->CDataExchange::setDestDataDriver(ref_driver);
					}
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Convertor::EVDataExchangeType returnValue = (EarthView::World::Spatial::Convertor::EVDataExchangeType)m_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange::getType();
					}
					virtual void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback(ref_listener);
						}
						else
							return this->CDataExchange::setListener(ref_listener);
					}
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const
					{
						if(m_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Convertor::IDataExchangeListener* returnValue = m_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback();
							return returnValue;
						}
						else
							return this->CDataExchange::getListener();
					}
				};
				REGISTER_FACTORY_CLASS(CDataExchangeProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::exchange();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->exchange();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_exchange_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::exchange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver(void *pObjectXXXX, _in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setSrcDataDriver(ref_driver);
					else
						ptrNativeObject->setSrcDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setSrcDataDriver_void_CDataDriver_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setSrcDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver(void *pObjectXXXX, _in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setDestDataDriver(ref_driver);
					else
						ptrNativeObject->setDestDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setDestDataDriver_void_CDataDriver_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setDestDataDriver(ref_driver);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getType_EVDataExchangeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::EVDataExchangeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setListener(ref_listener);
					else
						ptrNativeObject->setListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_setListener_void_IDataExchangeListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener )
				{
					EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::setListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Convertor::IDataExchangeListener*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					if (dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::getListener();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->getListener();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_Callback* pCallback )
				{
					CDataExchangeProxy* ptr = dynamic_cast<CDataExchangeProxy*>((EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Convertor::IDataExchangeListener*  _stdcall EarthView_World_Spatial_Convertor_CDataExchange_getListener_IDataExchangeListener_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Convertor::CDataExchange* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataExchange*) pObjectXXXX;
					const EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataExchange::getListener();
					return objXXXX;
				}
			}
		}
	}
}
