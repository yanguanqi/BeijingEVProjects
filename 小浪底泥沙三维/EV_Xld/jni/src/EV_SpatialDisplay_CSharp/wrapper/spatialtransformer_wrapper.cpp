/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialtransformer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
				{
					EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->translate(offsetX, offsetY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_scale_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 scaleX, _in ev_real64 scaleY )
				{
					EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->scale(scaleX, scaleY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_rotate_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->rotate(angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_rotateAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 centerX, _in ev_real64 centerY )
				{
					EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->rotateAt(angle, centerX, centerY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CCondensedMatrix3*  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_invert_CCondensedMatrix3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Display::CCondensedMatrix3* objXXXX = ptrNativeObject->invert();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CCondensedMatrix3*  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_clone_CCondensedMatrix3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					EarthView::World::Spatial::Display::CCondensedMatrix3* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCondensedMatrix3_transform_void_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count )
				{
					const EarthView::World::Spatial::Display::CCondensedMatrix3* ptrNativeObject = (EarthView::World::Spatial::Display::CCondensedMatrix3*) pObjectXXXX;
					ptrNativeObject->transform(x, y, count);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 angle, _in ev_real64 x, _in ev_real64 y);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 scale, _in ev_real64 x, _in ev_real64 y);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback)(_out ev_real64* cx, _out ev_real64* cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback)(_out ev_real64* cx, _out ev_real64* cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback)(_in ev_real64 cx, _in ev_real64 cy);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback)(_in ev_real64 offsetX, _in ev_real64 offsetY);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback)(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback)(_in ev_real64* len, _in int count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback)(_in ev_real64* len, _in int count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag);
				class CSpatialTransformerProxy : public EarthView::World::Spatial::Display::CSpatialTransformer
				{
				private:
					EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback;
				public:
					CSpatialTransformerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialTransformer(pList)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CSpatialTransformerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool(EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void(EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int(EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int(EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback = pCallback;
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::isValid();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CSpatialTransformer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDataExtent()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getDataExtent();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeographicDataExtent()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getGeographicDataExtent();
					}
					virtual void setDataExtent(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback(extent);
						}
						else
							return this->CSpatialTransformer::setDataExtent(extent);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDeviceExtent()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getDeviceExtent();
					}
					virtual void setDeviceExtent(_in const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback(extent);
						}
						else
							return this->CSpatialTransformer::setDeviceExtent(extent);
					}
					virtual ev_real64 getRotation() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getRotation();
					}
					virtual void rotate(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback(angle);
						}
						else
							return this->CSpatialTransformer::rotate(angle);
					}
					virtual void rotateAt(_in ev_real64 angle, _in ev_real64 x, _in ev_real64 y)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback(angle, x, y);
						}
						else
							return this->CSpatialTransformer::rotateAt(angle, x, y);
					}
					virtual ev_real64 getCurrentScale()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSpatialTransformer::getCurrentScale();
					}
					virtual void setCurrentScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CSpatialTransformer::setCurrentScale(scale);
					}
					virtual void setCurrentScale(_in ev_real64 scale, _in ev_real64 x, _in ev_real64 y)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback(scale, x, y);
						}
						else
							return this->CSpatialTransformer::setCurrentScale(scale, x, y);
					}
					virtual void getCenter(_out ev_real64* cx, _out ev_real64* cy)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->CSpatialTransformer::getCenter(cx, cy);
					}
					virtual void getGeographicCenter(_out ev_real64* cx, _out ev_real64* cy)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->CSpatialTransformer::getGeographicCenter(cx, cy);
					}
					virtual void setCenter(_in ev_real64 cx, _in ev_real64 cy)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback(cx, cy);
						}
						else
							return this->CSpatialTransformer::setCenter(cx, cy);
					}
					virtual void translate(_in ev_real64 offsetX, _in ev_real64 offsetY)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback(offsetX, offsetY);
						}
						else
							return this->CSpatialTransformer::translate(offsetX, offsetY);
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback();
						}
						else
							return this->CSpatialTransformer::reset();
					}
					virtual void toDevicePoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->CSpatialTransformer::toDevicePoints(x, y, count);
					}
					virtual void toMapPoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->CSpatialTransformer::toMapPoints(x, y, count);
					}
					virtual void geographicToDevicePoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->CSpatialTransformer::geographicToDevicePoints(x, y, count);
					}
					virtual void deviceToGeographicPoints(_inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback(x, y, count);
						}
						else
							return this->CSpatialTransformer::deviceToGeographicPoints(x, y, count);
					}
					virtual void toDeviceLength(_in ev_real64* len, _in int count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback(len, count);
						}
						else
							return this->CSpatialTransformer::toDeviceLength(len, count);
					}
					virtual void toMapLength(_in ev_real64* len, _in int count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback(len, count);
						}
						else
							return this->CSpatialTransformer::toMapLength(len, count);
					}
					virtual void toMapRect(_in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback(devRect, mapRect);
						}
						else
							return this->CSpatialTransformer::toMapRect(devRect, mapRect);
					}
					virtual void toDeviceRect(_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback(mapRect, devRect);
						}
						else
							return this->CSpatialTransformer::toDeviceRect(mapRect, devRect);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback(src, dest, enve);
						}
						else
							return this->CSpatialTransformer::transform(src, dest, enve);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback(src, dest, x, y, count);
						}
						else
							return this->CSpatialTransformer::transform(src, dest, x, y, count);
					}
					virtual void transform(_in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback(src, nCount, pdfX, pdfY, pForwardFlag);
						}
						else
							return this->CSpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialTransformerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getDataExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getDataExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDataExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getDataExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getGeographicDataExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getGeographicDataExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicDataExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getGeographicDataExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setDataExtent(extent);
					else
						ptrNativeObject->setDataExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDataExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setDataExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getDeviceExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getDeviceExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDeviceExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getDeviceExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setDeviceExtent(extent);
					else
						ptrNativeObject->setDeviceExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDeviceExtent_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* extent )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setDeviceExtent(extent);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getRotation();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRotation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getRotation_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::rotate(angle);
					else
						ptrNativeObject->rotate(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotate_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::rotate(angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::rotateAt(angle, x, y);
					else
						ptrNativeObject->rotateAt(angle, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::rotateAt(angle, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getCurrentScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getCurrentScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCurrentScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getCurrentScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCurrentScale(scale);
					else
						ptrNativeObject->setCurrentScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCurrentScale(scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCurrentScale(scale, x, y);
					else
						ptrNativeObject->setCurrentScale(scale, x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCurrentScale(scale, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getCenter(cx, cy);
					else
						ptrNativeObject->getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getGeographicCenter(cx, cy);
					else
						ptrNativeObject->getGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64* cx, _out ev_real64* cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::getGeographicCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCenter(cx, cy);
					else
						ptrNativeObject->setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setCenter_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::translate(offsetX, offsetY);
					else
						ptrNativeObject->translate(offsetX, offsetY);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_translate_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::translate(offsetX, offsetY);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_matrix_CSpatialMatrix(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->matrix();
					const EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setMatrix_void_CSpatialMatrix(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Display::CSpatialMatrix*)matrix);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_resetMapping_void_IEnvelope_IEnvelope_double(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* dev, _in const EarthView::World::Spatial::Geometry::IEnvelope* data, _in double angle )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->resetMapping(dev, data, angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDevicePoints(x, y, count);
					else
						ptrNativeObject->toDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapPoints(x, y, count);
					else
						ptrNativeObject->toMapPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::geographicToDevicePoints(x, y, count);
					else
						ptrNativeObject->geographicToDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::geographicToDevicePoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::deviceToGeographicPoints(x, y, count);
					else
						ptrNativeObject->deviceToGeographicPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_real64* x, _inout ev_real64* y, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::deviceToGeographicPoints(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDeviceLength(len, count);
					else
						ptrNativeObject->toDeviceLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceLength_void_ev_real64_int_NoVirtual(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDeviceLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapLength(len, count);
					else
						ptrNativeObject->toMapLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapLength_void_ev_real64_int_NoVirtual(void *pObjectXXXX, _in ev_real64* len, _in int count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapLength(len, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapRect(devRect, mapRect);
					else
						ptrNativeObject->toMapRect(devRect, mapRect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* devRect, _out EarthView::World::Spatial::Geometry::IEnvelope* mapRect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toMapRect(devRect, mapRect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDeviceRect(mapRect, devRect);
					else
						ptrNativeObject->toDeviceRect(mapRect, devRect);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _out EarthView::World::Spatial::Geometry::IEnvelope* devRect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::toDeviceRect(mapRect, devRect);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toMapRect_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->toMapRect(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_toDeviceRect_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->toDeviceRect(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, dest, enve);
					else
						ptrNativeObject->transform(src, dest, enve);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, dest, enve);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, dest, x, y, count);
					else
						ptrNativeObject->transform(src, dest, x, y, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest, _inout ev_real64* x, _inout ev_real64* y, _in ev_int32 count )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, dest, x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					if (dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
					else
						ptrNativeObject->transform(src, nCount, pdfX, pdfY, pForwardFlag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Callback* pCallback )
				{
					CSpatialTransformerProxy* ptr = dynamic_cast<CSpatialTransformerProxy*>((EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* src, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_setDPI_void_ev_real64(void *pObjectXXXX, _in ev_real64 dDPI )
				{
					EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ptrNativeObject->setDPI(dDPI);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getDPI_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDPI();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialTransformer_getRatioToDevice_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialTransformer* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialTransformer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRatioToDevice();
					return objXXXX;
				}
			}
		}
	}
}
