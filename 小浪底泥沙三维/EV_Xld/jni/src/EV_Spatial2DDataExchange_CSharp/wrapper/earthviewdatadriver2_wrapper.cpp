/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/earthviewdatadriver2.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				typedef EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass*  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback)(_inout void* stream, _in ev_int64 skipedCount);
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _out void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback)(_in ev_uint32 index, _in void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in char*& datasetName, _in int mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout void* stream);
				class CEarthViewDataDriver2Proxy : public EarthView::World::Spatial::Convertor::CEarthViewDataDriver2
				{
				private:
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback;
				public:
					CEarthViewDataDriver2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CEarthViewDataDriver2(pList)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* parseFeatureClass(_inout EarthView::World::Core::CDataStream& stream, _in ev_int64 skipedCount)
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback(&stream, skipedCount);
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::parseFeatureClass(stream, skipedCount);
					}
					virtual ev_int32 write(_in ev_uint32 index, _in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::write(index, stream);
					}
					virtual void close()
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback();
						}
						else
							return this->CEarthViewDataDriver2::close();
					}
					virtual void finishWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback();
						}
						else
							return this->CEarthViewDataDriver2::finishWrite();
					}
					virtual ev_int32 read(_in ev_uint32 index, _out EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback(index, &stream);
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::read(index, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(pPropertySet, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::open(pPropertySet, mode, ref_param, featurecount, stream);
					}
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const EVString& dataname, _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, _inout ev_uint32& featurecount, _inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							char* dataname_Char = dataname.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback(ref_dataSource, dataname_Char, (int)mode, ref_param, featurecount, &stream);
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
					}
					virtual ev_bool canRead()
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::canRead();
					}
					virtual ev_bool canWrite()
					{
						if(m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEarthViewDataDriver2::canWrite();
					}
				};
				REGISTER_FACTORY_CLASS(CEarthViewDataDriver2Proxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass*  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(void *pObjectXXXX, _inout void* stream, _in ev_int64 skipedCount )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					if (dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::parseFeatureClass(*(EarthView::World::Core::CDataStream*)stream, skipedCount);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* objXXXX = ptrNativeObject->parseFeatureClass(*(EarthView::World::Core::CDataStream*)stream, skipedCount);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass*  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_NoVirtual(void *pObjectXXXX, _inout void* stream, _in ev_int64 skipedCount )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::parseFeatureClass(*(EarthView::World::Core::CDataStream*)stream, skipedCount);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					if (dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->write(index, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in void* stream )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::write(index, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					if (dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::close();
					else
						ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CEarthViewDataDriver2* ptrNativeObject = (EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Convertor::CEarthViewDataDriver2::close();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Callback* pCallback )
				{
					CEarthViewDataDriver2Proxy* ptr = dynamic_cast<CEarthViewDataDriver2Proxy*>((EarthView::World::Spatial::Convertor::CEarthViewDataDriver2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
