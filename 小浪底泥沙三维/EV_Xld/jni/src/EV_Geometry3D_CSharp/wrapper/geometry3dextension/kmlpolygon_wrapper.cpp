/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/kmlpolygon.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Display
			{
			}
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CKmlPolygonProxy : public EarthView::World::Geometry3D::CKmlPolygon
			{
			private:
				EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CKmlPolygonProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlPolygon(pList)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_build_void(EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void(EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_render_void(EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_derender_void(EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode(EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode(EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool(EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset(EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32(EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString(EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4(EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::load();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::detachFromScene();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::update();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CKmlPolygon::setSelectable(selectable);
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback();
					}
					else
						return this->CKmlPolygon::build();
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlPolygon::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CKmlPolygon::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CKmlPolygon::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CKmlPolygon::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getGeoObjectCount();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback();
					}
					else
						return this->CKmlPolygon::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback();
					}
					else
						return this->CKmlPolygon::derender();
				}
				virtual ev_bool isRendering()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::isRendering();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::isAttached();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CKmlPolygon::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::detachFromNode();
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CKmlPolygon::setUserData(userData);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CKmlPolygon::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygon::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlPolygon::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlPolygon::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlPolygonProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygon_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygon* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygon::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_build_void_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_render_void_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_derender_void_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getName_EVString_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlPolygonProxy* ptr = dynamic_cast<CKmlPolygonProxy*>((EarthView::World::Geometry3D::CKmlPolygon*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygon_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CKmlPolygonFactoryProxy : public EarthView::World::Geometry3D::CKmlPolygonFactory
			{
			private:
				EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CKmlPolygonFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlPolygonFactory(pList)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CKmlPolygonFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CKmlPolygonFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CKmlPolygonFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlPolygonFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::appendGeoObject(visibleObj, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::removeGeoObject(visibleObj, geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::removeAllGeoObjects(visibleObj);
				else
					ptrNativeObject->removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getGeoObject(visibleObj, index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(visibleObj, index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getGeoObject(visibleObj, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getGeoObjectCount(visibleObj);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount(visibleObj);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CKmlPolygonFactoryProxy* ptr = dynamic_cast<CKmlPolygonFactoryProxy*>((EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlPolygonFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlPolygonFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPolygonFactory*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPolygonFactory::getGeoObjectCount(visibleObj);
				return objXXXX;
			}
		}
	}
}
