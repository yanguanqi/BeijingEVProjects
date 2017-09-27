/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback)(_in char*& names);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback)(_in char*& whereclause);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback)(_in ev_uint32 limit);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback)(_in ev_uint32 offset);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback)(_in int queryMode);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback)(_in int spatialRelType);
				typedef EarthView::World::Spatial::GeoDataset::IQueryFilter*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback)();
				class CChartQueryFilterProxy : public EarthView::World::Spatial::GeoDataset::CChartQueryFilter
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback;
				public:
					CChartQueryFilterProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartQueryFilter(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter(EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback = pCallback;
					}
					virtual EVString getFieldName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getFieldName();
					}
					virtual EVString getWhereClause() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getWhereClause();
					}
					virtual ev_uint32 getLimitNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getLimitNum();
					}
					virtual ev_uint32 getOffsetNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getOffsetNum();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getQueryGeometryRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVQueryModeType returnValue = (EarthView::World::Spatial::GeoDataset::EVQueryModeType)m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getQueryMode();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::getSpatialRelation();
					}
					virtual void setFieldName(_in const EVString& names)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* names_Char = names.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback(names_Char);
						}
						else
							return this->CChartQueryFilter::setFieldName(names);
					}
					virtual void setWhereClause(_in const EVString& whereclause)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* whereclause_Char = whereclause.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback(whereclause_Char);
						}
						else
							return this->CChartQueryFilter::setWhereClause(whereclause);
					}
					virtual void setLimitNum(_in ev_uint32 limit)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback(limit);
						}
						else
							return this->CChartQueryFilter::setLimitNum(limit);
					}
					virtual void setOffsetNum(_in ev_uint32 offset)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback(offset);
						}
						else
							return this->CChartQueryFilter::setOffsetNum(offset);
					}
					virtual void setQueryGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback(geometry);
						}
						else
							return this->CChartQueryFilter::setQueryGeometry(geometry);
					}
					virtual void setQueryMode(_in EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback((int)queryMode);
						}
						else
							return this->CChartQueryFilter::setQueryMode(queryMode);
					}
					virtual void setSpatialRelation(_in EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback((int)spatialRelType);
						}
						else
							return this->CChartQueryFilter::setSpatialRelation(spatialRelType);
					}
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IQueryFilter* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback();
							return returnValue;
						}
						else
							return this->CChartQueryFilter::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CChartQueryFilterProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getFieldName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getFieldName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getFieldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getWhereClause();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getWhereClause();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getWhereClause_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getWhereClause();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getLimitNum();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getLimitNum();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getLimitNum_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getLimitNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getOffsetNum();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getOffsetNum();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getOffsetNum_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getOffsetNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryGeometryRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getQueryGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryMode();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->getQueryMode();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryMode_EVQueryModeType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getSpatialRelation();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->getSpatialRelation();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getSpatialRelation();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString(void *pObjectXXXX, _in const char* names )
				{
					EarthView::World::Core::ev_string names1 = names;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setFieldName(names1);
					else
						ptrNativeObject->setFieldName(names1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setFieldName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* names )
				{
					EarthView::World::Core::ev_string names1 = names;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setFieldName(names1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString(void *pObjectXXXX, _in const char* whereclause )
				{
					EarthView::World::Core::ev_string whereclause1 = whereclause;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setWhereClause(whereclause1);
					else
						ptrNativeObject->setWhereClause(whereclause1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setWhereClause_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* whereclause )
				{
					EarthView::World::Core::ev_string whereclause1 = whereclause;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setWhereClause(whereclause1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setLimitNum(limit);
					else
						ptrNativeObject->setLimitNum(limit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setLimitNum_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setLimitNum(limit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setOffsetNum(offset);
					else
						ptrNativeObject->setOffsetNum(offset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setOffsetNum_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 offset )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setOffsetNum(offset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryGeometry(geometry);
					else
						ptrNativeObject->setQueryGeometry(geometry);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryGeometry(geometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType(void *pObjectXXXX, _in int queryMode )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
					else
						ptrNativeObject->setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryMode_void_EVQueryModeType_NoVirtual(void *pObjectXXXX, _in int queryMode )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(void *pObjectXXXX, _in int spatialRelType )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
					else
						ptrNativeObject->setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_NoVirtual(void *pObjectXXXX, _in int spatialRelType )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					if (dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_Callback* pCallback )
				{
					CChartQueryFilterProxy* ptr = dynamic_cast<CChartQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_clone_IQueryFilter_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setBlurQuery_void_ev_bool(void *pObjectXXXX, _in ev_bool blur )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->setBlurQuery(blur);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_isBlurQuery_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isBlurQuery();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setQueryClassName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->setQueryClassName(name1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getQueryClassName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getQueryClassName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_setSkipFeatureNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 num )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ptrNativeObject->setSkipFeatureNum(num);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartQueryFilter_getSkipFeatureNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSkipFeatureNum();
					return objXXXX;
				}
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback)(_out ev_uint32* ids);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32* id, _in ev_uint32 size);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index, _in ev_uint32 size);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
				class CChartFeatureSelectionProxy : public EarthView::World::Spatial::GeoDataset::CChartFeatureSelection
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback;
				public:
					CChartFeatureSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartFeatureSelection(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection(EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::getCount();
					}
					virtual ev_uint32 getID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::getID(index);
					}
					virtual ev_uint32 getIDs(_in ev_uint32* ids) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback(ids);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::getIDs(ids);
					}
					virtual ev_int32 findID(_in ev_uint32 id) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::findID(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::select(filter);
					}
					virtual ev_bool addID(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::addID(id);
					}
					virtual ev_uint32 addIDs(_in ev_uint32* id, _in ev_uint32 size)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback(id, size);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::addIDs(id, size);
					}
					virtual ev_uint32 remove(_in ev_uint32 index, _in ev_uint32 size)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback(index, size);
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::remove(index, size);
					}
					virtual ev_uint32 clear()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartFeatureSelection::clear();
					}
					virtual void intersect(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback(set);
						}
						else
							return this->CChartFeatureSelection::intersect(set);
					}
					virtual void difference(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback(set);
						}
						else
							return this->CChartFeatureSelection::difference(set);
					}
					virtual void append(_in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback(set);
						}
						else
							return this->CChartFeatureSelection::append(set);
					}
				};
				REGISTER_FACTORY_CLASS(CChartFeatureSelectionProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getID(index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getID_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getID(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32* ids )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getIDs(ids);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getIDs(ids);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_getIDs_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32* ids )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getIDs(ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::findID(id);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findID(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_findID_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::findID(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::query(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->query(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::query(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::select(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::select(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addID(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addID(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addID_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addID(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32* id, _in ev_uint32 size )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addIDs(id, size);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->addIDs(id, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_addIDs_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32* id, _in ev_uint32 size )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addIDs(id, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 size )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::remove(index, size);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_remove_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 size )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::remove(index, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::clear();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::clear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::intersect(set);
					else
						ptrNativeObject->intersect(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_intersect_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::intersect(set);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::difference(set);
					else
						ptrNativeObject->difference(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_difference_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::difference(set);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::append(set);
					else
						ptrNativeObject->append(set);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_Callback* pCallback )
				{
					CChartFeatureSelectionProxy* ptr = dynamic_cast<CChartFeatureSelectionProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureSelection_append_void_IFeatureSelection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::append(set);
				}
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				class CChartFeatureIteratorProxy : public EarthView::World::Spatial::GeoDataset::CChartFeatureIterator
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback;
				public:
					CChartFeatureIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartFeatureIterator(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature(EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields(EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString(EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CChartFeatureIterator::next();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback();
							return returnValue;
						}
						else
							return this->CChartFeatureIterator::getFields();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartFeatureIterator::getField(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CChartFeatureIterator::findField(fieldName);
					}
				};
				REGISTER_FACTORY_CLASS(CChartFeatureIteratorProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getTestedFeatureNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTestedFeatureNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_Callback* pCallback )
				{
					CChartFeatureIteratorProxy* ptr = dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_next_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getFields();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_Callback* pCallback )
				{
					CChartFeatureIteratorProxy* ptr = dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getFields_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getField(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_Callback* pCallback )
				{
					CChartFeatureIteratorProxy* ptr = dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_getField_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					if (dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_Callback* pCallback )
				{
					CChartFeatureIteratorProxy* ptr = dynamic_cast<CChartFeatureIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartFeatureIterator_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial::GeoDataset::CChartFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderInfo_ev_bool_EVString_EVString_CVariant(void *pObjectXXXX, _in const char* fieldName, _in const char* subFieldName, _inout void* var )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Core::ev_string subFieldName1 = subFieldName;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHeaderInfo(fieldName1, subFieldName1, *(EarthView::World::Core::CVariant*)var);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderFieldCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getHeaderFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderSubFieldCount_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getHeaderSubFieldCount(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderInfo_ev_bool_ev_uint32_ev_uint32_CVariant(void *pObjectXXXX, _in ev_uint32 fieldIndex, _in ev_uint32 subfieldIndex, _inout void* var )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHeaderInfo(fieldIndex, subfieldIndex, *(EarthView::World::Core::CVariant*)var);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderFieldName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getHeaderFieldName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_getHeaderSubFieldName_EVString_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 fieldIndex, _in ev_uint32 subfieldIndex )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getHeaderSubFieldName(fieldIndex, subfieldIndex);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetHeaderInfo_fromStream_CChartDatasetHeaderInfo_CDataStream(_inout void* stream )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* objXXXX = EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CChartDatasetProxy : public EarthView::World::Spatial::GeoDataset::CChartDataset
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CChartDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDataset(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType(EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString(EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString(EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString(EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataset::select(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::hasSubDataset();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CChartDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CChartDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CChartDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CChartDatasetProxy);
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getClassNameList_bool_StringVector(void *pObjectXXXX, _inout void* namelist )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getClassNameList(*(EarthView::World::Core::StringVector*)namelist);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::query(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->query(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::select(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::select(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isClassExists_ev_bool_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isClassExists(className1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getClassCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getClassCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getClassName_ev_bool_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 index, _out char*& name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getClassName(index, name1);
					name=name1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getHeaderInfo_CChartDatasetHeaderInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* objXXXX = ptrNativeObject->getHeaderInfo();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CChartDatasetProxy* ptr = dynamic_cast<CChartDatasetProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataset::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_destroyFeature_ev_bool_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* pFeature )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->destroyFeature(pFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getFeatureFromID_IFeature_ev_int32(void *pObjectXXXX, _in ev_int32 id )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeatureFromID(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* classname )
				{
					EarthView::World::Core::ev_string classname1 = classname;
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(classname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataset_getFeatureIDList_bool_EVString_IntVector(void *pObjectXXXX, _in const char* className, _out void* idList )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::GeoDataset::CChartDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getFeatureIDList(className1, *(EarthView::World::Core::IntVector*)idList);
					return objXXXX;
				}
			}
		}
	}
}
