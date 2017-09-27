/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtsserverinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getIdentifier_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getTitleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getTitle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getKeywordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getKeyword_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeyword(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getAbstract_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getSubThemeCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSubThemeCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMTSTheme*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getSubThemeRef_COGCWMTSTheme_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMTSTheme* objXXXX = ptrNativeObject->getSubThemeRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getRefLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRefLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_getRefLayerName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRefLayerName(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMTSTheme*  _stdcall EarthView_World_Spatial_COGCWMTSTheme_clone_COGCWMTSTheme(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMTSTheme* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSTheme*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMTSTheme* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMTSThemes*  _stdcall EarthView_World_Spatial_COGCWMTSThemes_clone_COGCWMTSThemes(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMTSThemes* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSThemes*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMTSThemes* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMTSTheme*  _stdcall EarthView_World_Spatial_COGCWMTSThemes_getThemeRef_COGCWMTSTheme_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSThemes* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSThemes*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMTSTheme* objXXXX = ptrNativeObject->getThemeRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSThemes_getThemeCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMTSThemes* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSThemes*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getThemeCount();
				return objXXXX;
			}
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback)();
			class CWMTSServerInfoProxy : public EarthView::World::Spatial::CWMTSServerInfo
			{
			private:
				EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback;
			public:
				CWMTSServerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSServerInfo(pList)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32(EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32(EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32(EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback(index);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServerInfo::getInfo(index);
				}
				virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info)
				{
					if(m_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback(info);
						return returnValue;
					}
					else
						return this->CWMTSServerInfo::add(info);
				}
				virtual ev_uint32 getCount() const
				{
					if(m_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServerInfo::getCount();
				}
				virtual ev_uint32 remove(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSServerInfo::remove(index);
				}
				virtual ev_uint32 clear()
				{
					if(m_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServerInfo::clear();
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSServerInfoProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServerInfo::getInfo(index);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback )
			{
				CWMTSServerInfoProxy* ptr = dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServerInfo::getInfo(index);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServerInfo::add(info);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->add(info);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_Callback* pCallback )
			{
				CWMTSServerInfoProxy* ptr = dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSServerInfo_add_ev_uint32_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServerInfo::add(info);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getUpdateSequence_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUpdateSequence();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getThemeCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getThemeCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMTSTheme*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getThemeRef_COGCWMTSTheme_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMTSTheme* objXXXX = ptrNativeObject->getThemeRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSServerInfo_getLayerInfoRef_CWMTSLayerInfo_EVString(void *pObjectXXXX, _in const char* layername )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				const EarthView::World::Spatial::CWMTSServerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(layername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32_Callback* pCallback )
			{
				CWMTSServerInfoProxy* ptr = dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServerInfo_getCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CWMTSServerInfoProxy* ptr = dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServerInfo_remove_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32_Callback* pCallback )
			{
				CWMTSServerInfoProxy* ptr = dynamic_cast<CWMTSServerInfoProxy*>((EarthView::World::Spatial::CWMTSServerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServerInfo_clear_ev_uint32(pCallback);
				}
			}
		}
	}
}
