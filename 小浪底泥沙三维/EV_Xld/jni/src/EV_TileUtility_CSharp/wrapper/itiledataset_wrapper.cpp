/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/itiledataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef int  ( _stdcall EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_ITileDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback)();
			typedef const EarthView::World::Spatial::ITileMetaInfo*  ( _stdcall EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback)();
			typedef void*  ( _stdcall EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback)(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout int& format);
			class ITileDatasetProxy : public EarthView::World::Spatial::ITileDataset
			{
			private:
				EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback* m_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback;
				EarthView_World_Spatial_ITileDataset_getName_EVString_Callback* m_EarthView_World_Spatial_ITileDataset_getName_EVString_Callback;
				EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback* m_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback;
				EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback* m_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback;
			public:
				ITileDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : ITileDataset(pList)
				{
					m_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType(EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getName_EVString(EarthView_World_Spatial_ITileDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getDescription_EVString(EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString(EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo(EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType(EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::EVTileDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVTileDatasetType returnValue = (EarthView::World::Spatial::EVTileDatasetType)m_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_ITileDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getUpdateTime();
				}
				virtual const EarthView::World::Spatial::ITileMetaInfo* getMetaInfo() const
				{
					if(m_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::ITileMetaInfo* returnValue = m_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback();
						return returnValue;
					}
					else
						return this->ITileDataset::getMetaInfo();
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr getTileStream(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout EarthView::World::Spatial::EVTileFormatType& format)
				{
					if(m_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback(level, row, col, (int&)format);
						return returnValue;
					}
					else
						return this->ITileDataset::getTileStream(level, row, col, format);
				}
			};
			REGISTER_FACTORY_CLASS(ITileDatasetProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_ITileDataset_getType_EVTileDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getName_EVString_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getDataVersion();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_ITileDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getDataVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getDescription_EVString_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_ITileDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::ITileMetaInfo*  _stdcall EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::ITileMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getMetaInfo();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::ITileMetaInfo* objXXXX = ptrNativeObject->getMetaInfo();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::ITileMetaInfo*  _stdcall EarthView_World_Spatial_ITileDataset_getMetaInfo_ITileMetaInfo_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				const EarthView::World::Spatial::ITileMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getMetaInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout int& format )
			{
				EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				if (dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getTileStream(level, row, col, (EarthView::World::Spatial::EVTileFormatType&)format);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getTileStream(level, row, col, (EarthView::World::Spatial::EVTileFormatType&)format);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType( void *pObjectXXXX, EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_Callback* pCallback )
			{
				ITileDatasetProxy* ptr = dynamic_cast<ITileDatasetProxy*>((EarthView::World::Spatial::ITileDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_ITileDataset_getTileStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_EVTileFormatType_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout int& format )
			{
				EarthView::World::Spatial::ITileDataset* ptrNativeObject = (EarthView::World::Spatial::ITileDataset*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::ITileDataset::getTileStream(level, row, col, (EarthView::World::Spatial::EVTileFormatType&)format);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
