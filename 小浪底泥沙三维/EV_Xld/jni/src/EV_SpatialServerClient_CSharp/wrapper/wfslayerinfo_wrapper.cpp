/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfslayerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::COGCWebServiceBoundingBox*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const EarthView::World::Spatial::COGCWebServiceStyle*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback)(_in ev_uint32 index);
			typedef int  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CWFSLayerInfoProxy : public EarthView::World::Spatial::CWFSLayerInfo
			{
			private:
				EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CWFSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString(EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString(EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString(EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getSpatialReference();
				}
				virtual const EVString getSRS() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getSRS();
				}
				virtual const EVString getOutputFormmat() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getOutputFormmat();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getDatasetType();
				}
				virtual const EVString getDataFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getDataFormat(index);
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getDataFormatCount();
				}
				virtual const EVString getInfoFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getInfoFormat(index);
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getInfoFormatCount();
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getBoundingBoxCount();
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceBoundingBox* returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getBoundingBoxRef(index);
				}
				virtual ev_uint32 getStyleCount() const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getStyleCount();
				}
				virtual const EVString getStyle(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getStyle(index);
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceStyle* returnValue = m_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSLayerInfo::getStyleDetailsRef(index);
				}
			};
			REGISTER_FACTORY_CLASS(CWFSLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getSRS();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getSRS();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getSRS_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getSRS();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getOutputFormmat();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getOutputFormmat();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getOutputFormmat_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSLayerInfo::getOutputFormmat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getMetaDataURLCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMetaDataURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getMetaDataURL_COGCMetaDataURLInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getMetaDataURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getFeatureListURLCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFeatureListURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getFeatureListURL_COGCMetaDataURLInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getFeatureListURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getLatLongBoundingBoxRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getLatLongBoundingBoxRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWFSLayerInfo_getDataURLRef_COGCMetaDataURLInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getDataURLRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDataFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getInfoFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyle_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSLayerInfo_getName_EVString_Callback* pCallback )
			{
				CWFSLayerInfoProxy* ptr = dynamic_cast<CWFSLayerInfoProxy*>((EarthView::World::Spatial::CWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSLayerInfo_getName_EVString(pCallback);
				}
			}
		}
	}
}
