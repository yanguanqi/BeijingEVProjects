/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/webdatametainfos.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef int  ( _stdcall EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
			class CWebDataMetaInfoProxy : public EarthView::World::Spatial::CWebDataMetaInfo
			{
			private:
				EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CWebDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebDataMetaInfo(pList)
				{
					m_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString(EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebDataMetaInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebDataMetaInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWebDataMetaInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWebDataMetaInfo::getSpatialReference();
				}
			};
			REGISTER_FACTORY_CLASS(CWebDataMetaInfoProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWebDataMetaInfoProxy* ptr = dynamic_cast<CWebDataMetaInfoProxy*>((EarthView::World::Spatial::CWebDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString_Callback* pCallback )
			{
				CWebDataMetaInfoProxy* ptr = dynamic_cast<CWebDataMetaInfoProxy*>((EarthView::World::Spatial::CWebDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWebDataMetaInfoProxy* ptr = dynamic_cast<CWebDataMetaInfoProxy*>((EarthView::World::Spatial::CWebDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWebDataMetaInfoProxy* ptr = dynamic_cast<CWebDataMetaInfoProxy*>((EarthView::World::Spatial::CWebDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback)();
			class CEVWebDataMetaInfosProxy : public EarthView::World::Spatial::CEVWebDataMetaInfos
			{
			private:
				EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback;
			public:
				CEVWebDataMetaInfosProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWebDataMetaInfos(pList)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32(EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo(EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32(EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32(EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback = pCallback;
				}
				virtual ev_uint32 getCount() const
				{
					if(m_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVWebDataMetaInfos::getCount();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVWebDataMetaInfos::getInfo(index);
				}
				virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info)
				{
					if(m_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback(info);
						return returnValue;
					}
					else
						return this->CEVWebDataMetaInfos::add(info);
				}
				virtual ev_uint32 remove(_in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVWebDataMetaInfos::remove(index);
				}
				virtual ev_uint32 clear()
				{
					if(m_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVWebDataMetaInfos::clear();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWebDataMetaInfosProxy);
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				if (dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::getCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_Callback* pCallback )
			{
				CEVWebDataMetaInfosProxy* ptr = dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				if (dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::getInfo(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getInfo(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback )
			{
				CEVWebDataMetaInfosProxy* ptr = dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::getInfo(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				if (dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::add(info);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->add(info);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback )
			{
				CEVWebDataMetaInfosProxy* ptr = dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_add_ev_uint32_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::add(info);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				if (dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::remove(index);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->remove(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CEVWebDataMetaInfosProxy* ptr = dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_remove_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::remove(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				if (dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::clear();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->clear();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_Callback* pCallback )
			{
				CEVWebDataMetaInfosProxy* ptr = dynamic_cast<CEVWebDataMetaInfosProxy*>((EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWebDataMetaInfos::clear();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWebDataMetaInfos*  _stdcall EarthView_World_Spatial_CEVWebDataMetaInfos_clone_CEVWebDataMetaInfos(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::CEVWebDataMetaInfos*) pObjectXXXX;
				EarthView::World::Spatial::CEVWebDataMetaInfos* objXXXX = ptrNativeObject->clone();
				return objXXXX;
			}
		}
	}
}
