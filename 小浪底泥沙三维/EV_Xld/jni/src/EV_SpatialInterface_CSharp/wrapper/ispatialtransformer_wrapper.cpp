/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialtransformer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 angle, _in ev_real64 x, _in ev_real64 y);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 scale, _in ev_real64 x, _in ev_real64 y);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback)(_out ev_real64* cx, _out ev_real64* cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback)(_out ev_real64* cx, _out ev_real64* cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback)(_in ev_real64 cx, _in ev_real64 cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback)(_in ev_real64 offsetX, _in ev_real64 offsetY);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback)(_in ev_real64* len, _in int count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback)(_in ev_real64* len, _in int count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag);
				class ISpatialTransformerProxy : public EarthView::World::Spatial::Display::ISpatialTransformer
				{
				private:
					EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback;
					EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback;
				public:
					ISpatialTransformerProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialTransformer(pList)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback = pCallback;
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::isValid();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->ISpatialTransformer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDataExtent()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getDataExtent();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeographicDataExtent()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getGeographicDataExtent();
					}
					virtual void setDataExtent(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback(extent);
						}
						else
							return this->ISpatialTransformer::setDataExtent(extent);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDeviceExtent()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getDeviceExtent();
					}
					virtual void setDeviceExtent(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback(extent);
						}
						else
							return this->ISpatialTransformer::setDeviceExtent(extent);
					}
					virtual ev_real64 getRotation() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getRotation();
					}
					virtual void rotate(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback(angle);
						}
						else
							return this->ISpatialTransformer::rotate(angle);
					}
					virtual void rotateAt(_in ev_real64 angle, _in ev_real64 x, _in ev_real64 y)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback(angle, x, y);
						}
						else
							return this->ISpatialTransformer::rotateAt(angle, x, y);
					}
					virtual ev_real64 getCurrentScale()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISpatialTransformer::getCurrentScale();
					}
					virtual void setCurrentScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback(scale);
						}
						else
							return this->ISpatialTransformer::setCurrentScale(scale);
					}
					virtual void setCurrentScale(_in ev_real64 scale, _in ev_real64 x, _in ev_real64 y)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback(scale, x, y);
						}
						else
							return this->ISpatialTransformer::setCurrentScale(scale, x, y);
					}
					virtual void getCenter(_out ev_real64* cx, _out ev_real64* cy)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->ISpatialTransformer::getCenter(cx, cy);
					}
					virtual void getGeographicCenter(_out ev_real64* cx, _out ev_real64* cy)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->ISpatialTransformer::getGeographicCenter(cx, cy);
					}
					virtual void setCenter(_in ev_real64 cx, _in ev_real64 cy)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->ISpatialTransformer::setCenter(cx, cy);
					}
					virtual void translate(_in ev_real64 offsetX, _in ev_real64 offsetY)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback(offsetX, offsetY);
						}
						else
							return this->ISpatialTransformer::translate(offsetX, offsetY);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback();
						}
						else
							return this->ISpatialTransformer::reset();
					}
					virtual void toDevicePoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->ISpatialTransformer::toDevicePoints(x, y, count);
					}
					virtual void toMapPoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->ISpatialTransformer::toMapPoints(x, y, count);
					}
					virtual void geographicToDevicePoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->ISpatialTransformer::geographicToDevicePoints(x, y, count);
					}
					virtual void deviceToGeographicPoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->ISpatialTransformer::deviceToGeographicPoints(x, y, count);
					}
					virtual void toDeviceLength(_in ev_real64* len, _in int count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback(len, count);
						}
						else
							return this->ISpatialTransformer::toDeviceLength(len, count);
					}
					virtual void toMapLength(_in ev_real64* len, _in int count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback(len, count);
						}
						else
							return this->ISpatialTransformer::toMapLength(len, count);
					}
					virtual void toMapRect(_in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback(devRect, mapRect);
						}
						else
							return this->ISpatialTransformer::toMapRect(devRect, mapRect);
					}
					virtual void toDeviceRect(_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback(mapRect, devRect);
						}
						else
							return this->ISpatialTransformer::toDeviceRect(mapRect, devRect);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback(src, dest, enve);
						}
						else
							return this->ISpatialTransformer::transform(src, dest, enve);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback(src, dest, x, y, count);
						}
						else
							return this->ISpatialTransformer::transform(src, dest, x, y, count);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback(src, nCount, pdfX, pdfY, pForwardFlag);
						}
						else
							return this->ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialTransformerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getDataExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getDataExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getDataExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicDataExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getGeographicDataExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicDataExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setDataExtent(extent);
					else
						ptrNativeObject->setDataExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setDataExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getDeviceExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getDeviceExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getDeviceExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setDeviceExtent(extent);
					else
						ptrNativeObject->setDeviceExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setDeviceExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getRotation();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRotation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::rotate(angle);
					else
						ptrNativeObject->rotate(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::rotate(angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::rotateAt(angle, x, y);
					else
						ptrNativeObject->rotateAt(angle, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::rotateAt(angle, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getCurrentScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getCurrentScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getCurrentScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale);
					else
						ptrNativeObject->setCurrentScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale, x, y);
					else
						ptrNativeObject->setCurrentScale(scale, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getCenter(cx, cy);
					else
						ptrNativeObject->getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicCenter(cx, cy);
					else
						ptrNativeObject->getGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCenter(cx, cy);
					else
						ptrNativeObject->setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::translate(offsetX, offsetY);
					else
						ptrNativeObject->translate(offsetX, offsetY);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::translate(offsetX, offsetY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDevicePoints(x, y, count);
					else
						ptrNativeObject->toDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapPoints(x, y, count);
					else
						ptrNativeObject->toMapPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::geographicToDevicePoints(x, y, count);
					else
						ptrNativeObject->geographicToDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::geographicToDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::deviceToGeographicPoints(x, y, count);
					else
						ptrNativeObject->deviceToGeographicPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::deviceToGeographicPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceLength(len, count);
					else
						ptrNativeObject->toDeviceLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_NoVirtual(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapLength(len, count);
					else
						ptrNativeObject->toMapLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_NoVirtual(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapRect(devRect, mapRect);
					else
						ptrNativeObject->toMapRect(devRect, mapRect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toMapRect(devRect, mapRect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceRect(mapRect, devRect);
					else
						ptrNativeObject->toDeviceRect(mapRect, devRect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceRect(mapRect, devRect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, enve);
					else
						ptrNativeObject->transform(src, dest, enve);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, enve);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, x, y, count);
					else
						ptrNativeObject->transform(src, dest, x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
					else
						ptrNativeObject->transform(src, nCount, pdfX, pdfY, pForwardFlag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback )
				{
					ISpatialTransformerProxy* ptr = dynamic_cast<ISpatialTransformerProxy*>((EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag )
				{
					EarthView::World::Spatial::Display::ISpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
				}
			}
		}
	}
}
