/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatametainfos.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback)();
				class IDataMetaInfosProxy : public EarthView::World::Spatial::GeoDataset::IDataMetaInfos
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback;
				public:
					IDataMetaInfosProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataMetaInfos(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32(EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo(EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32(EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfos::getCount();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IDataMetaInfos::getInfo(index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback(ref_info);
							return returnValue;
						}
						else
							return this->IDataMetaInfos::add(ref_info);
					}
					virtual ev_uint32 remove(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IDataMetaInfos::remove(index);
					}
					virtual ev_uint32 clear()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfos::clear();
					}
				};
				REGISTER_FACTORY_CLASS(IDataMetaInfosProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_Callback* pCallback )
				{
					IDataMetaInfosProxy* ptr = dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::getInfo(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getInfo(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback )
				{
					IDataMetaInfosProxy* ptr = dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::getInfo(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::add(ref_info);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(ref_info);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback )
				{
					IDataMetaInfosProxy* ptr = dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_add_ev_uint32_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::add(ref_info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::remove(index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IDataMetaInfosProxy* ptr = dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_remove_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::clear();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_Callback* pCallback )
				{
					IDataMetaInfosProxy* ptr = dynamic_cast<IDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfos_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfos::clear();
					return objXXXX;
				}
			}
		}
	}
}
