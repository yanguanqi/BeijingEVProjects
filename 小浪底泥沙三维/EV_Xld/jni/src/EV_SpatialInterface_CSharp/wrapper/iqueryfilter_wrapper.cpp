/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iqueryfilter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback)(_in char*& names);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback)(_in char*& whereclause);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback)(_in ev_uint32 limit);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback)(_in ev_uint32 offset);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback)(_in int queryMode);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback)(_in int spatialRelType);
				typedef EarthView::World::Spatial::GeoDataset::IQueryFilter*  ( _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback)();
				class IQueryFilterProxy : public EarthView::World::Spatial::GeoDataset::IQueryFilter
				{
				private:
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback;
					EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback* m_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback;
				public:
					IQueryFilterProxy(EarthView::World::Core::CNameValuePairList *pList) : IQueryFilter(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString(EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString(EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32(EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32(EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry(EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType(EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString(EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString(EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32(EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry(EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType(EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter(EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback = pCallback;
					}
					virtual EVString getFieldName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getFieldName();
					}
					virtual EVString getWhereClause() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getWhereClause();
					}
					virtual ev_uint32 getLimitNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getLimitNum();
					}
					virtual ev_uint32 getOffsetNum() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getOffsetNum();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getQueryGeometryRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getSpatialRelation();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVQueryModeType returnValue = (EarthView::World::Spatial::GeoDataset::EVQueryModeType)m_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::getQueryMode();
					}
					virtual void setFieldName(_in const EVString& names)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* names_Char = names.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback(names_Char);
						}
						else
							return this->IQueryFilter::setFieldName(names);
					}
					virtual void setWhereClause(_in const EVString& whereclause)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* whereclause_Char = whereclause.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback(whereclause_Char);
						}
						else
							return this->IQueryFilter::setWhereClause(whereclause);
					}
					virtual void setLimitNum(_in ev_uint32 limit)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback(limit);
						}
						else
							return this->IQueryFilter::setLimitNum(limit);
					}
					virtual void setOffsetNum(_in ev_uint32 offset)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback(offset);
						}
						else
							return this->IQueryFilter::setOffsetNum(offset);
					}
					virtual void setQueryGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback(geometry);
						}
						else
							return this->IQueryFilter::setQueryGeometry(geometry);
					}
					virtual void setQueryMode(_in EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback((int)queryMode);
						}
						else
							return this->IQueryFilter::setQueryMode(queryMode);
					}
					virtual void setSpatialRelation(_in EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback((int)spatialRelType);
						}
						else
							return this->IQueryFilter::setSpatialRelation(spatialRelType);
					}
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IQueryFilter* returnValue = m_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback();
							return returnValue;
						}
						else
							return this->IQueryFilter::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IQueryFilterProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getFieldName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getFieldName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getFieldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getWhereClause();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getWhereClause();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getWhereClause_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getWhereClause();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getLimitNum();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getLimitNum();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getLimitNum_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getLimitNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getOffsetNum();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getOffsetNum();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getOffsetNum_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getOffsetNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryGeometryRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getQueryGeometryRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryGeometryRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getSpatialRelation();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->getSpatialRelation();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getSpatialRelation_EVSpatialQueryRelationType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getSpatialRelation();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryMode();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->getQueryMode();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_getQueryMode_EVQueryModeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVQueryModeType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString(void *pObjectXXXX, _in const char* names )
				{
					EarthView::World::Core::ev_string names1 = names;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setFieldName(names1);
					else
						ptrNativeObject->setFieldName(names1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setFieldName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* names )
				{
					EarthView::World::Core::ev_string names1 = names;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setFieldName(names1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString(void *pObjectXXXX, _in const char* whereclause )
				{
					EarthView::World::Core::ev_string whereclause1 = whereclause;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setWhereClause(whereclause1);
					else
						ptrNativeObject->setWhereClause(whereclause1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setWhereClause_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* whereclause )
				{
					EarthView::World::Core::ev_string whereclause1 = whereclause;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setWhereClause(whereclause1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setLimitNum(limit);
					else
						ptrNativeObject->setLimitNum(limit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setLimitNum_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 limit )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setLimitNum(limit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setOffsetNum(offset);
					else
						ptrNativeObject->setOffsetNum(offset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setOffsetNum_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 offset )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setOffsetNum(offset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryGeometry(geometry);
					else
						ptrNativeObject->setQueryGeometry(geometry);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryGeometry(geometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType(void *pObjectXXXX, _in int queryMode )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
					else
						ptrNativeObject->setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setQueryMode_void_EVQueryModeType_NoVirtual(void *pObjectXXXX, _in int queryMode )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryMode((EarthView::World::Spatial::GeoDataset::EVQueryModeType)queryMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(void *pObjectXXXX, _in int spatialRelType )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
					else
						ptrNativeObject->setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_setSpatialRelation_void_EVSpatialQueryRelationType_NoVirtual(void *pObjectXXXX, _in int spatialRelType )
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::setSpatialRelation((EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType)spatialRelType);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					if (dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_Callback* pCallback )
				{
					IQueryFilterProxy* ptr = dynamic_cast<IQueryFilterProxy*>((EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IQueryFilter*  _stdcall EarthView_World_Spatial_GeoDataset_IQueryFilter_clone_IQueryFilter_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IQueryFilter* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IQueryFilter::clone();
					return objXXXX;
				}
			}
		}
	}
}
