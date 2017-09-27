/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfsserverinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback)();
			class CWFSServerInfoProxy : public EarthView::World::Spatial::CWFSServerInfo
			{
			private:
				EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback;
			public:
				CWFSServerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSServerInfo(pList)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32(EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32(EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo(EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32(EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32(EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback(index);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSServerInfo::getInfo(index);
				}
				virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info)
				{
					if(m_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback(info);
						return returnValue;
					}
					else
						return this->CWFSServerInfo::add(info);
				}
				virtual ev_uint32 getCount() const
				{
					if(m_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSServerInfo::getCount();
				}
				virtual ev_uint32 remove(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSServerInfo::remove(index);
				}
				virtual ev_uint32 clear()
				{
					if(m_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSServerInfo::clear();
				}
			};
			REGISTER_FACTORY_CLASS(CWFSServerInfoProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServerInfo::getInfo(index);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getInfo(index);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback )
			{
				CWFSServerInfoProxy* ptr = dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServerInfo::getInfo(index);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServerInfo::add(info);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->add(info);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* pCallback )
			{
				CWFSServerInfoProxy* ptr = dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServerInfo_add_ev_uint32_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServerInfo::add(info);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getUpdateSequence_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUpdateSequence();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getDescribeLayerFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getDescribeLayerFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServerInfo_getDescribeLayerFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDescribeLayerFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getCapabilitiesFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCapabilitiesFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServerInfo_getFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServerInfo_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSLayerInfo*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getLayerInfoRef_CWFSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSLayerInfo*  _stdcall EarthView_World_Spatial_CWFSServerInfo_getLayerInfoRef_CWFSLayerInfo_EVString(void *pObjectXXXX, _in char* layername )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				const EarthView::World::Spatial::CWFSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(layername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32_Callback* pCallback )
			{
				CWFSServerInfoProxy* ptr = dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServerInfo_getCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CWFSServerInfoProxy* ptr = dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServerInfo_remove_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32_Callback* pCallback )
			{
				CWFSServerInfoProxy* ptr = dynamic_cast<CWFSServerInfoProxy*>((EarthView::World::Spatial::CWFSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServerInfo_clear_ev_uint32(pCallback);
				}
			}
		}
	}
}
