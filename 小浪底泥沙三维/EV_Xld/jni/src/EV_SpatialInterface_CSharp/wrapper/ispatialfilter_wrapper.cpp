/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialfilter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback)(_in int relation);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback)(_in char*& matrix);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback)(_in char*& names);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback)(_in char*& whereclause);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback)(_in ev_uint32 limit);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback)(_in ev_uint32 offset);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback)(_in int queryMode);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback)(_in int spatialRelType);
				typedef EarthView::World::Spatial::GeoDataset::IQueryFilter*  ( _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback)();
				class ISpatialFilterProxy : public EarthView::World::Spatial::GeoDataset::ISpatialFilter
				{
				private:
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback;
				public:
					ISpatialFilterProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialFilter(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter(EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getGeometryRef();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getCopyGeometry() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getCopyGeometry();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryOrderType getQueryOrder() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVQueryOrderType returnValue = (EarthView::World::Spatial::GeoDataset::EVQueryOrderType)m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getQueryOrder();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum getRelationEnum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum)m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getRelationEnum();
					}
					virtual EVString getSpatialRelationMatrix() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getSpatialRelationMatrix();
					}
					virtual void setGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback(geom);
						}
						else
							return this->ISpatialFilter::setGeometry(geom);
					}
					virtual void setQueryOrder(_in EarthView::World::Spatial::GeoDataset::EVQueryOrderType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback((int)type);
						}
						else
							return this->ISpatialFilter::setQueryOrder(type);
					}
					virtual void setSpatialRelationEnum(_in EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum relation)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback((int)relation);
						}
						else
							return this->ISpatialFilter::setSpatialRelationEnum(relation);
					}
					virtual void setSpatialRelationMatrix(_in const EVString& matrix)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* matrix_Char = matrix.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback(matrix_Char);
						}
						else
							return this->ISpatialFilter::setSpatialRelationMatrix(matrix);
					}
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IQueryFilter* returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::clone();
					}
					virtual EVString getFieldName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getFieldName();
					}
					virtual EVString getWhereClause() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getWhereClause();
					}
					virtual ev_uint32 getLimitNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getLimitNum();
					}
					virtual ev_uint32 getOffsetNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getOffsetNum();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getQueryGeometryRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getSpatialRelation();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVQueryModeType returnValue = (EarthView::World::Spatial::GeoDataset::EVQueryModeType)m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback();
							return returnValue;
						}
						else
							return this->ISpatialFilter::getQueryMode();
					}
					virtual void setFieldName(_in const EVString& names)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* names_Char = names.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback(names_Char);
						}
						else
							return this->ISpatialFilter::setFieldName(names);
					}
					virtual void setWhereClause(_in const EVString& whereclause)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* whereclause_Char = whereclause.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback(whereclause_Char);
						}
						else
							return this->ISpatialFilter::setWhereClause(whereclause);
					}
					virtual void setLimitNum(_in ev_uint32 limit)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback(limit);
						}
						else
							return this->ISpatialFilter::setLimitNum(limit);
					}
					virtual void setOffsetNum(_in ev_uint32 offset)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback(offset);
						}
						else
							return this->ISpatialFilter::setOffsetNum(offset);
					}
					virtual void setQueryGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback(geometry);
						}
						else
							return this->ISpatialFilter::setQueryGeometry(geometry);
					}
					virtual void setQueryMode(_in EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback((int)queryMode);
						}
						else
							return this->ISpatialFilter::setQueryMode(queryMode);
					}
					virtual void setSpatialRelation(_in EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType)
					{
						if(m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback((int)spatialRelType);
						}
						else
							return this->ISpatialFilter::setSpatialRelation(spatialRelType);
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialFilterProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getGeometryRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getCopyGeometry();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getCopyGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getCopyGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getCopyGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVQueryOrderType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getQueryOrder();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVQueryOrderType objXXXX = ptrNativeObject->getQueryOrder();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryOrder_EVQueryOrderType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVQueryOrderType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getQueryOrder();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getRelationEnum();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum objXXXX = ptrNativeObject->getRelationEnum();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getRelationEnum_EVSpatialRelationEnum_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getRelationEnum();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getSpatialRelationMatrix();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSpatialRelationMatrix();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelationMatrix_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::getSpatialRelationMatrix();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setGeometry(geom);
					else
						ptrNativeObject->setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setQueryOrder((EarthView::World::Spatial::GeoDataset::EVQueryOrderType)type);
					else
						ptrNativeObject->setQueryOrder((EarthView::World::Spatial::GeoDataset::EVQueryOrderType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryOrder_void_EVQueryOrderType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setQueryOrder((EarthView::World::Spatial::GeoDataset::EVQueryOrderType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum(void *pObjectXXXX, _in int relation )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setSpatialRelationEnum((EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum)relation);
					else
						ptrNativeObject->setSpatialRelationEnum((EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum)relation);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationEnum_void_EVSpatialRelationEnum_NoVirtual(void *pObjectXXXX, _in int relation )
				{
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setSpatialRelationEnum((EarthView::World::Spatial::GeoDataset::EVSpatialRelationEnum)relation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString(void *pObjectXXXX, _in const char* matrix )
				{
					EarthView::World::Core::ev_string matrix1 = matrix;
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setSpatialRelationMatrix(matrix1);
					else
						ptrNativeObject->setSpatialRelationMatrix(matrix1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelationMatrix_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* matrix )
				{
					EarthView::World::Core::ev_string matrix1 = matrix;
					EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::setSpatialRelationMatrix(matrix1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					if (dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_ISpatialFilter_clone_IQueryFilter_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::ISpatialFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::ISpatialFilter::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getFieldName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getWhereClause_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getLimitNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getOffsetNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getSpatialRelation_EVSpatialQueryRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_getQueryMode_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setFieldName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setWhereClause_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setLimitNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setOffsetNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setQueryMode_void_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback )
				{
					ISpatialFilterProxy* ptr = dynamic_cast<ISpatialFilterProxy*>((EarthView::World::Spatial::GeoDataset::ISpatialFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_ISpatialFilter_setSpatialRelation_void_EVSpatialQueryRelationType(pCallback);
					}
				}
			}
		}
	}
}
