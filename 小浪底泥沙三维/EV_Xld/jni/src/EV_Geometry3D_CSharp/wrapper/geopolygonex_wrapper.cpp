/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geopolygonex.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CGeoPolygonExProxy : public EarthView::World::Geometry3D::CGeoPolygonEx
			{
			private:
				EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CGeoPolygonExProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoPolygonEx(pList)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_build_void(EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void(EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_render_void(EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void(EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode(EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode(EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool(EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset(EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32(EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString(EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4(EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CGeoPolygonEx::setSelectable(selectable);
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback();
					}
					else
						return this->CGeoPolygonEx::build();
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CGeoPolygonEx::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getGeoObjectCount();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback();
					}
					else
						return this->CGeoPolygonEx::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback();
					}
					else
						return this->CGeoPolygonEx::derender();
				}
				virtual ev_bool isRendering()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::isRendering();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::isAttached();
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::detachFromScene();
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CGeoPolygonEx::setUserData(userData);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getSelectable();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::update();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CGeoPolygonEx::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonEx::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CGeoPolygonEx::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CGeoPolygonEx::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CGeoPolygonExProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_build_void_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::build();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::appendGeoObject(ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_appendGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::appendGeoObject(ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::removeGeoObject(geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::removeGeoObject(geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::removeAllGeoObjects();
				else
					ptrNativeObject->removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_removeAllGeoObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::getGeoObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObject_CGeoObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::getGeoObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::getGeoObjectCount();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getGeoObjectCount_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::getGeoObjectCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_render_void_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::derender();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isRendering();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRendering();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isRendering();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getUserData_CFeatureUserData(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
				const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setObjectVisibility_ev_bool_ev_bool_CGeoObject(void *pObjectXXXX, _in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setObjectVisibility(visible, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_getClampMode_int(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getClampMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonEx_setClampMode_void_ClampMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Geometry3D::CGeoPolygonEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX;
				ptrNativeObject->setClampMode((EarthView::World::Spatial3D::Atlas::ClampMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CGeoPolygonExProxy* ptr = dynamic_cast<CGeoPolygonExProxy*>((EarthView::World::Geometry3D::CGeoPolygonEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CGeoPolygonExFactoryProxy : public EarthView::World::Geometry3D::CGeoPolygonExFactory
			{
			private:
				EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CGeoPolygonExFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoPolygonExFactory(pList)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CGeoPolygonExFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CGeoPolygonExFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CGeoPolygonExFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CGeoPolygonExFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::createRenderable(geoObj, scenemanager);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::appendGeoObject(visibleObj, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::removeGeoObject(visibleObj, geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::removeAllGeoObjects(visibleObj);
				else
					ptrNativeObject->removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getGeoObject(visibleObj, index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(visibleObj, index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getGeoObject(visibleObj, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getGeoObjectCount(visibleObj);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount(visibleObj);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CGeoPolygonExFactoryProxy* ptr = dynamic_cast<CGeoPolygonExFactoryProxy*>((EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolygonExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CGeoPolygonExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolygonExFactory*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolygonExFactory::getGeoObjectCount(visibleObj);
				return objXXXX;
			}
		}
	}
}
