/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/shapefiledatadriver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _out void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _in void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in char*& datasetName, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				class CShapefileDataDriverProxy : public EarthView::World::Spatial::Convertor::CShapefileDataDriver
				{
				private:
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
				public:
					CShapefileDataDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CShapefileDataDriver(pList)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void(EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void(EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool(EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool(EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					virtual void finishWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback();
						}
						else
							return this->CShapefileDataDriver::finishWrite();
					}
					virtual void close()
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback();
						}
						else
							return this->CShapefileDataDriver::close();
					}
					virtual ev_int32 read(_in ev_uint32 index, _out EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::read(index, stream);
					}
					virtual ev_int32 write(_in ev_uint32 index, _in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::write(index, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(pPropertySet, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::open(pPropertySet, mode, ref_param, featurecount, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const EVString& dataname, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							char* dataname_Char = dataname.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(ref_dataSource, dataname_Char, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
					}
					virtual ev_bool canRead()
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::canRead();
					}
					virtual ev_bool canWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CShapefileDataDriver::canWrite();
					}
				};
				REGISTER_FACTORY_CLASS(CShapefileDataDriverProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::finishWrite();
					else
						ptrNativeObject->finishWrite();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_finishWrite_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::finishWrite();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::close();
					else
						ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_close_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::close();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 index, _out void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::read(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->read(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_read_ev_int32_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _out void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::read(index, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_write_ev_int32_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::write(index, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(pPropertySet, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* dataname, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Core::ev_string dataname1 = dataname;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					if (dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(ref_dataSource, dataname1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->open(ref_dataSource, dataname1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CShapefileDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* dataname, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream )
				{
					EarthView::World::Core::ev_string dataname1 = dataname;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver* ptrNativeObject = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(ref_dataSource, dataname1, (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode)mode, ref_param, featurecount, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canRead_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool_Callback* pCallback )
				{
					CShapefileDataDriverProxy* ptr = dynamic_cast<CShapefileDataDriverProxy*>((EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CShapefileDataDriver_canWrite_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
