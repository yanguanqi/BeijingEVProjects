/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatametainfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
				class IDataMetaInfoProxy : public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
				public:
					IDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataMetaInfo(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString(EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfo::getDatasetType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfo::getName();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfo::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IDataMetaInfo::getSpatialReference();
					}
				};
				REGISTER_FACTORY_CLASS(IDataMetaInfoProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					IDataMetaInfoProxy* ptr = dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_Callback* pCallback )
				{
					IDataMetaInfoProxy* ptr = dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					IDataMetaInfoProxy* ptr = dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IDataMetaInfoProxy* ptr = dynamic_cast<IDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_IDataMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataMetaInfo::getSpatialReference();
					return objXXXX;
				}
			}
		}
	}
}
