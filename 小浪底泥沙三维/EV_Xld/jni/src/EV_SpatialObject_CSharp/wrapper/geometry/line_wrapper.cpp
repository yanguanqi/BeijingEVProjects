/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/line.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback)(_in const void* coords, _in ev_uint32 index, _in ev_int32 count, _in ev_int32 insertIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback)(_in const void* point);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback)(_in const void* coord);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback)(_in const void* point);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback)(_in const void* coord);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback)(_in const void* coord, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback)(_in const void* point, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback)(_in const void* coords, _in ev_int32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback)(_in const void* coord, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback)(_in const void* point, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_uint64  size, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint64  size, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback)(_in const void* coord, _in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index, _in ev_uint32 count);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback)(_in const void* point, _in ev_real64 tolerance);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback)(_in const void* coord, _in ev_real64 tolerance);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CLineProxy : public EarthView::World::Spatial::Geometry::CLine
				{
				private:
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_update_void_Callback* m_EarthView_World_Spatial_Geometry_CLine_update_void_Callback;
					EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CLineProxy(EarthView::World::Core::CNameValuePairList *pList) : CLine(pList)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint(EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate(EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint(EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate(EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32(EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32(EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32(EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32(EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32(EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32(EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64(EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64(EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64(EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool(EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool(EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_update_void(EarthView_World_Spatial_Geometry_CLine_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool(EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_simplify_void(EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry(EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::clone();
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLine::add(coord, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback(&point, index);
							return returnValue;
						}
						else
							return this->CLine::add(point, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 count, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback(cpy_coords, count, index);
							return returnValue;
						}
						else
							return this->CLine::add(cpy_coords, count, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 count, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback(cpy_points, count, index);
							return returnValue;
						}
						else
							return this->CLine::add(cpy_points, count, index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords, _in ev_uint32 index, _in ev_int32 count, _in ev_int32 insertIndex)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback(&coords, index, count, insertIndex);
							return returnValue;
						}
						else
							return this->CLine::add(coords, index, count, insertIndex);
					}
					virtual ev_uint32 remove(_in ev_uint32 index, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback(index, count);
							return returnValue;
						}
						else
							return this->CLine::remove(index, count);
					}
					virtual void setStartPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CLine::setStartPoint(point);
					}
					virtual void setStartPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback(&coord);
						}
						else
							return this->CLine::setStartPoint(coord);
					}
					virtual void setEndPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CLine::setEndPoint(point);
					}
					virtual void setEndPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback(&coord);
						}
						else
							return this->CLine::setEndPoint(coord);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLine::replace(coord, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback(&point, index);
							return returnValue;
						}
						else
							return this->CLine::replace(point, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_size_t size, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback(coords, size, index);
							return returnValue;
						}
						else
							return this->CLine::replace(coords, size, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_size_t size, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback(cpy_points, size, index);
							return returnValue;
						}
						else
							return this->CLine::replace(cpy_points, size, index);
					}
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coord, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback(&coord, index);
							return returnValue;
						}
						else
							return this->CLine::replace(coord, index);
					}
					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback(&point, tolerance);
							return returnValue;
						}
						else
							return this->CLine::queryPoint(point, tolerance);
					}
					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback(&coord, tolerance);
							return returnValue;
						}
						else
							return this->CLine::queryPoint(coord, tolerance);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CLine::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CLine::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLine::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isClosed();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CLine::toLineString2(smooth);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isEmpty();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CLine::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CLine::makeM(m);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CLine::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CLine::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CLine::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CLine::projects(sr, sevenParam, count);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_update_void_Callback();
						}
						else
							return this->CLine::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::snapToSegment(point, tolerance);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimType) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimType);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::smooth(tolerance, dimType);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CLine::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CLine::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CLine::deletePoint(point);
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::getBoundary();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CLine::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CLine::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CLine::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CLine::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CLine::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback();
						}
						else
							return this->CLine::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CLine::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLine::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CLine::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLine::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLine::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CLine::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLine::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CLine::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CLineProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLine_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CLine_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLine_clone2_CLine(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLine objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CLine *pXXXX = new EarthView::World::Spatial::Geometry::CLine(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32(void *pObjectXXXX, _in const void* coord, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32(void *pObjectXXXX, _in const void* point, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CPoint*)point, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 count, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(cpy_coords, count, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(cpy_coords, count, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinate_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 count, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(cpy_coords, count, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 count, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(cpy_points, count, index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(cpy_points, count, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CPoint_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 count, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(cpy_points, count, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32(void *pObjectXXXX, _in const void* coords, _in ev_uint32 index, _in ev_int32 count, _in ev_int32 insertIndex )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index, count, insertIndex);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index, count, insertIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_uint32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* coords, _in ev_uint32 index, _in ev_int32 count, _in ev_int32 insertIndex )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index, count, insertIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::remove(index, count);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index, count);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CLine_remove_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::remove(index, count);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setStartPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					else
						ptrNativeObject->setStartPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setStartPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setStartPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
					else
						ptrNativeObject->setStartPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setStartPoint_void_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setStartPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setEndPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					else
						ptrNativeObject->setEndPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setEndPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					if (dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setEndPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
					else
						ptrNativeObject->setEndPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CLine_setEndPoint_void_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CLine* ptrNativeObject = (EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CLine::setEndPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CLine_OperatorAssign_CLine_CLine(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CLine& objXXXX = *((EarthView::World::Spatial::Geometry::CLine*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CLine*)obj;
					EarthView::World::Spatial::Geometry::CLine *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_add_ev_uint32_CCoordinateSequence_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinate_ev_size_t_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CPoint_ev_size_t_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_replace_ev_uint32_CCoordinateSequence_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CPoint_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_queryPoint_ev_int32_CCoordinate_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_update_void_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_simplify_void_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CLineProxy* ptr = dynamic_cast<CLineProxy*>((EarthView::World::Spatial::Geometry::CLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CLine_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
