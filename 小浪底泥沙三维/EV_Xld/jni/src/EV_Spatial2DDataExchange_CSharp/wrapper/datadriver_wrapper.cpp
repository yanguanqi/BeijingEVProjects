/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/datadriver.h"
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
		namespace Spatial
		{
			namespace Convertor
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _out void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _in void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in char*& datasetName, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				class CDataDriverProxy : public EarthView::World::Spatial::Convertor::CDataDriver
				{
				private:
					EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
				public:
					CDataDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataDriver(pList)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void(EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_close_void(EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool(EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool(EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					virtual void finishWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback();
						}
						else
							return this->CDataDriver::finishWrite();
					}
					virtual void close()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback();
						}
						else
							return this->CDataDriver::close();
					}
					virtual ev_bool canRead()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataDriver::canRead();
					}
					virtual ev_bool canWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataDriver::canWrite();
					}
					virtual ev_int32 read(_in ev_uint32 index, _out EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CDataDriver::read(index, stream);
					}
					virtual ev_int32 write(_in ev_uint32 index, _in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CDataDriver::write(index, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(pPropertySet, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CDataDriver::open(pPropertySet, mode, ref_param, featurecount, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const EVString& datasetName, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(ref_dataSource, datasetName_Char, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CDataDriver::open(ref_dataSource, datasetName, mode, ref_param, featurecount, stream);
					}
				};
				REGISTER_FACTORY_CLASS(CDataDriverProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::finishWrite();
					else
						ptrNativeObject->finishWrite();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::finishWrite();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_close_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::close();
					else
						ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_close_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_close_void_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_close_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_close_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::close();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::canRead();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canRead();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::canRead();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::canWrite();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canWrite();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::canWrite();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 index, _out void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::read(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->read(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _out void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::read(index, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::write(index, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* datasetName, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					if (dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::open(ref_dataSource, datasetName1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->open(ref_dataSource, datasetName1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CDataDriverProxy* ptr = dynamic_cast<CDataDriverProxy*>((EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* datasetName, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CDataDriver::open(ref_dataSource, datasetName1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_getType_EVDataDriverType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::EVDataDriverType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Convertor::IDataExchangeListener*  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_getListener_IDataExchangeListener(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					EarthView::World::Spatial::Convertor::IDataExchangeListener* objXXXX = ptrNativeObject->getListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriver_setListener_void_IDataExchangeListener(void *pObjectXXXX, _in EarthView::World::Spatial::Convertor::IDataExchangeListener* pListener )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDataDriver*) pObjectXXXX;
					ptrNativeObject->setListener(pListener);
				}
			}
		}
	}
}
