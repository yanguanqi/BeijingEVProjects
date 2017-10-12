/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/evlasxgserviceconnection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _in char*& url, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _in char*& url, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback)(_in char*& servicename, _out void* metadata);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback)(_in char*& servicename, _out void* fields);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback)(_in char*& servicename, _in ev_int32 type, _out void* featurevector);
				typedef void  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback)(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);
				typedef void  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback)();
				class EVLasXGServiceConnectionProxy : public EarthView::World::Spatial::Download::EVLasXGServiceConnection
				{
				private:
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback;
				public:
					EVLasXGServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : EVLasXGServiceConnection(pList)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback = pCallback;
					}
					virtual void setConnectionImp(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback(ref_pImp);
						}
						else
							return this->EVLasXGServiceConnection::setConnectionImp(ref_pImp);
					}
					virtual void closeConnect()
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback();
						}
						else
							return this->EVLasXGServiceConnection::closeConnect();
					}
					virtual void openConnect()
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback();
						}
						else
							return this->EVLasXGServiceConnection::openConnect();
					}
					virtual ev_int32 readInitData(_in const EVString& servicename, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback(servicename_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::readInitData(servicename, streamPackage);
					}
					virtual ev_int32 readTileData(_in const EVString& servicename, _in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							char* url_Char = url.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(servicename_Char, url_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::readTileData(servicename, url, streamPackage);
					}
					virtual ev_int32 readDem(_in const EVString& servicename, _in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							char* url_Char = url.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(servicename_Char, url_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::readDem(servicename, url, streamPackage);
					}
					virtual ev_int32 getWFSMetaData(_in const EVString& servicename, _out CDataMetaInfo& metadata)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback(servicename_Char, &metadata);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::getWFSMetaData(servicename, metadata);
					}
					virtual ev_int32 getFields(_in const EVString& servicename, _out CFields& fields)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback(servicename_Char, &fields);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::getFields(servicename, fields);
					}
					virtual ev_int32 getFeatures(_in const EVString& servicename, _in ev_int32 type, _out EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback(servicename_Char, type, &featurevector);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnection::getFeatures(servicename, type, featurevector);
					}
				};
				REGISTER_FACTORY_CLASS(EVLasXGServiceConnectionProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::setConnectionImp(ref_pImp);
					else
						ptrNativeObject->setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::closeConnect();
					else
						ptrNativeObject->closeConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::closeConnect();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::openConnect();
					else
						ptrNativeObject->openConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::openConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readDem(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readDem(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::readDem(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(void *pObjectXXXX, _in const char* servicename, _out void* fields )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFields(servicename1, *(CFields*)fields);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFields(servicename1, *(CFields*)fields);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* fields )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFields(servicename1, *(CFields*)fields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(void *pObjectXXXX, _in const char* servicename, _in ev_int32 type, _out void* featurevector )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* pCallback )
				{
					EVLasXGServiceConnectionProxy* ptr = dynamic_cast<EVLasXGServiceConnectionProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in ev_int32 type, _out void* featurevector )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnection::getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
					return objXXXX;
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _in char*& url, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& servicename, _in char*& levelrowcols, _out void* streamPackage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback)(_in char*& servicename, _out void* metadata);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback)(_in char*& servicename, _out void* fields);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback)(_in char*& servicename, _in ev_int32 type, _out void* featurevector);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback)(_in ev_int32 timeout);
				class EVLasXGServiceConnectionImpProxy : public EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp
				{
				private:
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback;
				public:
					EVLasXGServiceConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : EVLasXGServiceConnectionImp(pList)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32(EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback = pCallback;
					}
					virtual ev_int32 readInitData(_in const EVString& servicename, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback(servicename_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::readInitData(servicename, streamPackage);
					}
					virtual ev_int32 readTileData(_in const EVString& servicename, _in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							char* url_Char = url.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(servicename_Char, url_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::readTileData(servicename, url, streamPackage);
					}
					virtual ev_int32 readDem(_in const EVString& servicename, _in const EVString& levelrowcols, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							char* levelrowcols_Char = levelrowcols.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(servicename_Char, levelrowcols_Char, &streamPackage);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::readDem(servicename, levelrowcols, streamPackage);
					}
					virtual ev_int32 getWFSMetaData(_in const EVString& servicename, _out CDataMetaInfo& metadata)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback(servicename_Char, &metadata);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::getWFSMetaData(servicename, metadata);
					}
					virtual ev_int32 getFields(_in const EVString& servicename, _out CFields& fields)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback(servicename_Char, &fields);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::getFields(servicename, fields);
					}
					virtual ev_int32 getFeatures(_in const EVString& servicename, _in ev_int32 type, _out EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback != NULL && this->isCustomExtend())
						{
							char* servicename_Char = servicename.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback(servicename_Char, type, &featurevector);
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::getFeatures(servicename, type, featurevector);
					}
					virtual ev_bool openConnection()
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::openConnection();
					}
					virtual ev_bool closeConnection()
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->EVLasXGServiceConnectionImp::closeConnection();
					}
					virtual void setConnectTimeout(_in ev_int32 timeout)
					{
						if(m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback(timeout);
						}
						else
							return this->EVLasXGServiceConnectionImp::setConnectTimeout(timeout);
					}
				};
				REGISTER_FACTORY_CLASS(EVLasXGServiceConnectionImpProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readInitData(servicename1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in const char* url, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readTileData(servicename1, url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* servicename, _in const char* levelrowcols, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string levelrowcols1 = levelrowcols;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readDem(servicename1, levelrowcols1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readDem(servicename1, levelrowcols1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in const char* levelrowcols, _out void* streamPackage )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Core::ev_string levelrowcols1 = levelrowcols;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::readDem(servicename1, levelrowcols1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getWFSMetaData(servicename1, *(CDataMetaInfo*)metadata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(void *pObjectXXXX, _in const char* servicename, _out void* fields )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFields(servicename1, *(CFields*)fields);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFields(servicename1, *(CFields*)fields);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* fields )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFields(servicename1, *(CFields*)fields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(void *pObjectXXXX, _in const char* servicename, _in ev_int32 type, _out void* featurevector )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in ev_int32 type, _out void* featurevector )
				{
					EarthView::World::Core::ev_string servicename1 = servicename;
					EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp::getFeatures(servicename1, type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback )
				{
					EVLasXGServiceConnectionImpProxy* ptr = dynamic_cast<EVLasXGServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32(pCallback);
					}
				}
			}
		}
	}
}
