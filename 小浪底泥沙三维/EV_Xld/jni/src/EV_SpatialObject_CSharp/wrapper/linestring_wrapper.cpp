/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/linestring.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback)(_in const void* coord, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback)(_in const void* point, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback)(_in const void* coords, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback)(_in const void* coord, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback)(_in const void* point, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_uint64  size, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint64  size, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback)(_in const void* coord, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index, _in ev_uint32 count);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback)(_in const void* point, _in ev_real64 tolerance);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback)(_in const void* coord, _in ev_real64 tolerance);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CLineStringProxy : public EarthView::World::Spatial::Geometry::CLineString
				{
				private:
					EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_update_void_Callback* m_EarthView_World_Spatial_Geometry_CLineString_update_void_Callback;
					EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CLineStringProxy(EarthView::World::Core::CNameValuePairList *pList) : CLineString(pList)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32(EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32(EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32(EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64(EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64(EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64(EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool(EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_update_void(EarthView_World_Spatial_Geometry_CLineString_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_simplify_void(EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry(EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLineString::add(coord, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback(cpy_coords, size, index);
							return returnValue;
						}
						else
							return this->CLineString::add(cpy_coords, size, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback(&point, index);
							return returnValue;
						}
						else
							return this->CLineString::add(point, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback(cpy_points, size, index);
							return returnValue;
						}
						else
							return this->CLineString::add(cpy_points, size, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback(&coords, index);
							return returnValue;
						}
						else
							return this->CLineString::add(coords, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLineString::replace(coord, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback(&point, index);
							return returnValue;
						}
						else
							return this->CLineString::replace(point, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_size_t size, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback(coords, size, index);
							return returnValue;
						}
						else
							return this->CLineString::replace(coords, size, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_size_t size, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback(cpy_points, size, index);
							return returnValue;
						}
						else
							return this->CLineString::replace(cpy_points, size, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coord, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLineString::replace(coord, index);
					}
					virtual ev_uint32 remove(_in ev_uint32 index, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback(index, count);
							return returnValue;
						}
						else
							return this->CLineString::remove(index, count);
					}
					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback(&point, tolerance);
							return returnValue;
						}
						else
							return this->CLineString::queryPoint(point, tolerance);
					}
					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback(&coord, tolerance);
							return returnValue;
						}
						else
							return this->CLineString::queryPoint(coord, tolerance);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isClosed();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CLineString::toLineString2(smooth);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isEmpty();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CLineString::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CLineString::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::clone();
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CLineString::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CLineString::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CLineString::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CLineString::projects(sr, sevenParam, count);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_update_void_Callback();
						}
						else
							return this->CLineString::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::snapToSegment(point, tolerance);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimType) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimType);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::smooth(tolerance, dimType);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CLineString::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CLineString::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CLineString::deletePoint(point);
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::getBoundary();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CLineString::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CLineString::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback();
						}
						else
							return this->CLineString::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLineString::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLineString::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CLineString::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLineString::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineString::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CLineString::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLineString::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CLineString::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CLineStringProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getPoint_CPoint_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getPoint(index);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getPoint2_CPoint_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getPoint2(index);
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32(void *pObjectXXXX, _in const void* coord, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(cpy_coords, size, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(cpy_coords, size, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(cpy_coords, size, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32(void *pObjectXXXX, _in const void* point, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(cpy_points, size, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(cpy_points, size, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CPoint_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(cpy_points, size, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32(void *pObjectXXXX, _in const void* coords, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_add_ev_uint32_CCoordinateSequence_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* coords, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32(void *pObjectXXXX, _in const void* coord, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32(void *pObjectXXXX, _in const void* point, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_uint64  size, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(coords, size, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->replace(coords, size, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_uint64  size, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(coords, size, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint64  size, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(cpy_points, size, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->replace(cpy_points, size, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint64  size, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(cpy_points, size, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32(void *pObjectXXXX, _in const void* coord, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coord, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coord, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_replace_ev_uint32_CCoordinateSequence_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::replace(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coord, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::remove(index, count);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index, count);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLineString_remove_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::remove(index, count);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64(void *pObjectXXXX, _in const void* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::queryPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point, tolerance);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->queryPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point, tolerance);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CPoint_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::queryPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64(void *pObjectXXXX, _in const void* coord, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::queryPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->queryPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CLineString_queryPoint_ev_int32_CCoordinate_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::queryPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_clone2_CLineString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getStartPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getStartPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getStartPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getStartPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getStartPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getStartPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getStartPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getEndPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getEndPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getEndPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getEndPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getEndPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CLineString_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::reverse();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->reverse();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_reverse_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::reverse();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::toLineString2(smooth);
						EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->toLineString2(smooth);
						EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_toLineString2_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::toLineString2(smooth);
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_update_void_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLineString_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::mirror(line);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->mirror(line);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::split(pSplitGeom);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->split(pSplitGeom);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::split(pSplitGeom);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::clip(clipRegion);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clip(clipRegion);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::clip(clipRegion);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::snapToSegment(point, tolerance);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->snapToSegment(point, tolerance);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimType )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLineString_smooth_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimType )
				{
					const EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::movePointTo(frmPoint, cpy_toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					if (dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CLineString_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CLineString* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLineString::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLineString_OperatorAssign_CLineString_CLineString(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CLineString& objXXXX = *((EarthView::World::Spatial::Geometry::CLineString*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CLineString*)obj;
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_simplify_void_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineStringProxy* ptr = dynamic_cast<CLineStringProxy*>((EarthView::World::Spatial::Geometry::CLineString*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLineString_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
