/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/datametainfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnv);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback)(_in ev_int32 srid);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback)(_in ev_int32 id);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback)(_in ev_uint32 version);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback)(_in ev_uint32 id);
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback)(_in int mode);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 value);
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
				class CDataMetaInfoProxy : public EarthView::World::Spatial::GeoDataset::CDataMetaInfo
				{
				private:
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
				public:
					CDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataMetaInfo(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getDatasetType();
					}
					virtual void setDatasetType(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback((int)type);
						}
						else
							return this->CDataMetaInfo::setDatasetType(type);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CDataMetaInfo::setName(name);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getEnvelopeRef();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnv)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback(pEnv);
						}
						else
							return this->CDataMetaInfo::setEnvelope(pEnv);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CDataMetaInfo::setSpatialReference(sr);
					}
					virtual void setSRID(_in ev_int32 srid)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback(srid);
						}
						else
							return this->CDataMetaInfo::setSRID(srid);
					}
					virtual ev_int32 getSRID()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getSRID();
					}
					virtual void setTypeID(_in ev_int32 id)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback(id);
						}
						else
							return this->CDataMetaInfo::setTypeID(id);
					}
					virtual ev_int32 getTypeID()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getTypeID();
					}
					virtual void setVersion(_in ev_uint32 version)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback(version);
						}
						else
							return this->CDataMetaInfo::setVersion(version);
					}
					virtual ev_uint32 getVersion()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getVersion();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getID();
					}
					virtual void setID(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback(id);
						}
						else
							return this->CDataMetaInfo::setID(id);
					}
					virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Utility::EVAltitudeMode returnValue = (EarthView::World::Spatial::Utility::EVAltitudeMode)m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getAltitudeMode();
					}
					virtual void setAltitudeMode(_in EarthView::World::Spatial::Utility::EVAltitudeMode mode)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback((int)mode);
						}
						else
							return this->CDataMetaInfo::setAltitudeMode(mode);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CDataMetaInfo::getAltitudeValue();
					}
					virtual void setAltitudeValue(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback(value);
						}
						else
							return this->CDataMetaInfo::setAltitudeValue(value);
					}
				};
				REGISTER_FACTORY_CLASS(CDataMetaInfoProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					else
						ptrNativeObject->setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setDatasetType_void_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setEnvelope(pEnv);
					else
						ptrNativeObject->setEnvelope(pEnv);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setEnvelope(pEnv);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32(void *pObjectXXXX, _in ev_int32 srid )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSRID(srid);
					else
						ptrNativeObject->setSRID(srid);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setSRID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 srid )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSRID(srid);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSRID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getSRID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setTypeID(id);
					else
						ptrNativeObject->setTypeID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setTypeID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setTypeID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getTypeID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getTypeID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getTypeID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getTypeID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 version )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setVersion(version);
					else
						ptrNativeObject->setVersion(version);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setVersion_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 version )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setVersion(version);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getVersion();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getVersion_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setID(id);
					else
						ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setID_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setID(id);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeMode();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeMode_EVAltitudeMode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)mode);
					else
						ptrNativeObject->setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)mode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeMode_void_EVAltitudeMode_NoVirtual(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)mode);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_getAltitudeValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeValue(value);
					else
						ptrNativeObject->setAltitudeValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_Callback* pCallback )
				{
					CDataMetaInfoProxy* ptr = dynamic_cast<CDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataMetaInfo_setAltitudeValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeValue(value);
				}
			}
		}
	}
}
