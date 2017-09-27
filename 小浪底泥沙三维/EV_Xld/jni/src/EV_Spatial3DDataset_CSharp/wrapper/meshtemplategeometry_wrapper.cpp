/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplategeometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CMeshTemplateGeometryProxy : public EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry
				{
				private:
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CMeshTemplateGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshTemplateGeometry(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getWKBGeometryType();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback();
						}
						else
							return this->CMeshTemplateGeometry::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CMeshTemplateGeometry::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CMeshTemplateGeometry::makeM(m);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CMeshTemplateGeometry::setSpatialReferenceRef(ref_sr);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::clone();
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::buffer(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMeshTemplateGeometry::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CMeshTemplateGeometry::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMeshTemplateGeometry::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CMeshTemplateGeometry::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CMeshTemplateGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CMeshTemplateGeometry::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CMeshTemplateGeometry::projects(sr, sevenParam, count);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CMeshTemplateGeometry::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CMeshTemplateGeometryProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setData_void_ev_byte_ev_uint32(void *pObjectXXXX, _in ev_byte* buf, _in ev_uint32 size )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX;
					ptrNativeObject->setData(buf, size);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getData_ev_bool_ev_byte_ev_uint32(void *pObjectXXXX, _out ev_byte** buf, _out ev_uint32& size )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getData(buf, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CMeshTemplateGeometryProxy* ptr = dynamic_cast<CMeshTemplateGeometryProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometry_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
