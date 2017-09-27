/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/igeometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class IGeometryProxy : public EarthView::World::Spatial::Geometry::IGeometry
				{
				private:
					EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					IGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : IGeometry(pList)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool(EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool(EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_simplify_void(EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry(EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString(EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::getWKBGeometryType();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback();
						}
						else
							return this->IGeometry::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->IGeometry::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->IGeometry::makeM(m);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IGeometry::setSpatialReferenceRef(ref_sr);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->IGeometry::clone();
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::buffer(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->IGeometry::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->IGeometry::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->IGeometry::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IGeometry::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->IGeometry::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->IGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->IGeometry::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->IGeometry::projects(sr, sevenParam, count);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->IGeometry::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(IGeometryProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getWKBGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->getWKBGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getWKBGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isSimple();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSimple();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isSimple();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_simplify_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::simplify();
					else
						ptrNativeObject->simplify();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_simplify_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::simplify();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getBoundary();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getBoundary();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getBoundary();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::setSpatialReferenceRef(ref_sr);
					else
						ptrNativeObject->setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char* relateMatrix, _in int dimension )
				{
					EarthView::World::Core::ev_string relateMatrix1 = relateMatrix;
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char* relateMatrix, _in int dimension )
				{
					EarthView::World::Core::ev_string relateMatrix1 = relateMatrix;
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType(void *pObjectXXXX, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toWKB(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toWKB(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toWKB(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString(void *pObjectXXXX, _inout char*& wkt )
				{
					EarthView::World::Core::ev_string wkt1 = wkt;
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toWKT(wkt1);
					else
						ptrNativeObject->toWKT(wkt1);
					wkt=wkt1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& wkt )
				{
					EarthView::World::Core::ev_string wkt1 = wkt;
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toWKT(wkt1);
					wkt=wkt1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					if (dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getInteriorPoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getInteriorPoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					IGeometryProxy* ptr = dynamic_cast<IGeometryProxy*>((EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					const EarthView::World::Spatial::Geometry::IGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::IGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IGeometry::getInteriorPoint(point);
					return objXXXX;
				}
			}
		}
	}
}
