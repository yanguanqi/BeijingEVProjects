/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instancedgeometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback)(_in const void* bounds, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback)(_in const void* point, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback)(_in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z);
			typedef EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback)(_in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback)(_in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback)(_in const EarthView::World::Graphic::CSceneNode* node);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback)(_in ev_bool castShadows);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback)(_in const void* size);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback)(_in const void* origin);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback)(_in ev_bool flag);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback)();
			class CInstancedGeometryProxy : public EarthView::World::Graphic::CInstancedGeometry
			{
			private:
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback;
				EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_build_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_build_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback* m_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback;
				EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback;
			public:
				CInstancedGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CInstancedGeometry(pList)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_build_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool(EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance(EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion(EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3(EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode(EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_build_void(EarthView_World_Graphic_CInstancedGeometry_build_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_destroy_void(EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_reset_void(EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real(EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real(EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real(EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool(EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3(EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3(EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3(EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3(EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString(EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool(EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* getBatchInstance(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bounds, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback(&bounds, autoCreate);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstance(bounds, autoCreate);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* getBatchInstance(_in const EarthView::World::Spatial::Math::CVector3& point, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback(&point, autoCreate);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstance(point, autoCreate);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* getBatchInstance(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback(x, y, z, autoCreate);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstance(x, y, z, autoCreate);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* getBatchInstance(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstance(index);
				}
				virtual void getBatchInstanceIndexes(_in const EarthView::World::Spatial::Math::CVector3& point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback(&point, x, y, z);
					}
					else
						return this->CInstancedGeometry::getBatchInstanceIndexes(point, x, y, z);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* getInstancedGeometryInstance()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getInstancedGeometryInstance();
				}
				virtual ev_uint32 packIndex(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::packIndex(x, y, z);
				}
				virtual Real getVolumeIntersection(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback(&box, x, y, z);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getVolumeIntersection(box, x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getBatchInstanceBounds(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstanceBounds(x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getBatchInstanceCentre(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstanceCentre(x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox calculateBounds(_in EarthView::World::Graphic::CVertexData* vertexData, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback(vertexData, &position, &orientation, &scale);
						return returnValue;
					}
					else
						return this->CInstancedGeometry::calculateBounds(vertexData, position, orientation, scale);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback(ent, &position, &orientation, &scale);
					}
					else
						return this->CInstancedGeometry::addEntity(ent, position, orientation, scale);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback(ent, &position, &orientation);
					}
					else
						return this->CInstancedGeometry::addEntity(ent, position, orientation);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback(ent, &position);
					}
					else
						return this->CInstancedGeometry::addEntity(ent, position);
				}
				virtual void addSceneNode(_in const EarthView::World::Graphic::CSceneNode* node)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback(node);
					}
					else
						return this->CInstancedGeometry::addSceneNode(node);
				}
				virtual void build()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_build_void_Callback();
					}
					else
						return this->CInstancedGeometry::build();
				}
				virtual void destroy()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback();
					}
					else
						return this->CInstancedGeometry::destroy();
				}
				virtual void reset()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback();
					}
					else
						return this->CInstancedGeometry::reset();
				}
				virtual void setRenderingDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstancedGeometry::setRenderingDistance(dist);
				}
				virtual Real getRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getRenderingDistance();
				}
				virtual Real getSquaredRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getSquaredRenderingDistance();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CInstancedGeometry::setVisible(visible);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::isVisible();
				}
				virtual void setCastShadows(_in ev_bool castShadows)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback(castShadows);
					}
					else
						return this->CInstancedGeometry::setCastShadows(castShadows);
				}
				virtual ev_bool getCastShadows()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getCastShadows();
				}
				virtual void setBatchInstanceDimensions(_in const EarthView::World::Spatial::Math::CVector3& size)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback(&size);
					}
					else
						return this->CInstancedGeometry::setBatchInstanceDimensions(size);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getBatchInstanceDimensions() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getBatchInstanceDimensions();
				}
				virtual void setOrigin(_in const EarthView::World::Spatial::Math::CVector3& origin)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback(&origin);
					}
					else
						return this->CInstancedGeometry::setOrigin(origin);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getOrigin() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getOrigin();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CInstancedGeometry::setRenderQueueGroup(queueID);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getRenderQueueGroup();
				}
				virtual void dump(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback(filename_Char);
					}
					else
						return this->CInstancedGeometry::dump(filename);
				}
				virtual void setProvideWorldInverses(_in ev_bool flag)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback(flag);
					}
					else
						return this->CInstancedGeometry::setProvideWorldInverses(flag);
				}
				virtual ev_bool getProvideWorldInverses() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometry::getProvideWorldInverses();
				}
			};
			REGISTER_FACTORY_CLASS(CInstancedGeometryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLink_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLink_vertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLink_indexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->indexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLink_indexData( void *pObjectXXXX, EarthView::World::Graphic::CIndexData*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*)pObjectXXXX)->indexData = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_push_back_void_SubMeshLodInstancedGeometryLink(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_front_SubMeshLodInstancedGeometryLink(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_back_SubMeshLodInstancedGeometryLink(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_insert_void_ev_uint32_SubMeshLodInstancedGeometryLink(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_OperatorIndex_SubMeshLodInstancedGeometryLink_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_at_SubMeshLodInstancedGeometryLink_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshLodInstancedGeometryLinkList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_push_ev_bool_CSubMesh_SubMeshLodInstancedGeometryLinkList(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh* ref_key, _in EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*& ref_val )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(ref_key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_exist_ev_bool_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh* key )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_OperatorIndex_SubMeshLodInstancedGeometryLinkList_CSubMesh(void *pObjXXXX, _in EarthView::World::Graphic::CSubMesh* key )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_get_SubMeshLodInstancedGeometryLinkList_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh* key )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_erase_void_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh* key )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_SubMeshInstancedGeometryLookup_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::SubMeshInstancedGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_submesh( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->submesh;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_submesh( void *pObjectXXXX, EarthView::World::Graphic::CSubMesh*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->submesh = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_geometryLodList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList* objXXXX = ptrNativeObject->geometryLodList;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_geometryLodList( void *pObjectXXXX, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->geometryLodList = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_materialName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->materialName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_materialName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->materialName = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_position( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_orientation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->orientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_orientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->orientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_scale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->scale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_scale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->scale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_worldBounds( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->worldBounds;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_worldBounds( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->worldBounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_ID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->ID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMesh_ID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*)pObjectXXXX)->ID = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_push_back_void_QueuedInstancedSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_front_QueuedInstancedSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_back_QueuedInstancedSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_insert_void_ev_uint32_QueuedInstancedSubMesh(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& t )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_OperatorIndex_QueuedInstancedSubMesh_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_at_QueuedInstancedSubMesh_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_push_back_void_EVString(void *pObjectXXXX, _in char* t )
			{
				EarthView::World::Core::ev_string t1 = t;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->push_back(t1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_front_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->front();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_back_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->back();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_insert_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 pos, _in char* t )
			{
				EarthView::World::Core::ev_string t1 = t;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_OperatorIndex_EVString_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjXXXX;
				EVString& objXXXX = objYYYY[n];
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_at_EVString_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->at(n);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedSubMeshOriginList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMeshOriginList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_geometry( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink* objXXXX = ptrNativeObject->geometry;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_geometry( void *pObjectXXXX, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*)pObjectXXXX)->geometry = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_position( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*)pObjectXXXX)->position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_orientation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->orientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_orientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*)pObjectXXXX)->orientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_scale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->scale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_scale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*)pObjectXXXX)->scale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_ID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->ID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometry_ID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*)pObjectXXXX)->ID = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_push_back_void_QueuedInstancedGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_front_QueuedInstancedGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_back_QueuedInstancedGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_insert_void_ev_uint32_QueuedInstancedGeometry(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_OperatorIndex_QueuedInstancedGeometry_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_at_QueuedInstancedGeometry_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_QueuedInstancedGeometryList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometryList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback)(_in const void* rend);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CInstancedGeometryBucketProxy : public EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket
			{
			private:
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CInstancedGeometryBucketProxy(EarthView::World::Core::CNameValuePairList *pList) : CInstancedGeometryBucket(pList)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CInstancedGeometryBucket::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CInstancedGeometryBucket::visitRenderables(visitor);
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getBoundingRadius();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getCastsShadows();
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getMaterial();
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CInstancedGeometryBucket::getWorldTransforms(xform);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getNumWorldTransforms();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getLights();
				}
				virtual EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* getRenderable() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderable();
				}
				virtual void setRenderOperation(_in const EarthView::World::Graphic::CRenderOperation& rend)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback(&rend);
					}
					else
						return this->CInstancedGeometryBucket::setRenderOperation(rend);
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CInstancedGeometryBucket::getRenderOperation(op);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getBoundingBox();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CInstancedGeometryBucket::_notifyCurrentCamera(cam);
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CInstancedGeometryBucket::_updateRenderQueue(queue);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CInstancedGeometryBucket::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CInstancedGeometryBucket::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CInstancedGeometryBucket::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CInstancedGeometryBucket::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback();
					}
					else
						return this->CInstancedGeometryBucket::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback();
					}
					else
						return this->CInstancedGeometryBucket::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CInstancedGeometryBucket::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CInstancedGeometryBucket::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CInstancedGeometryBucket::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CInstancedGeometryBucket::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getVisible();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::isVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstancedGeometryBucket::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstancedGeometryBucket::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CInstancedGeometryBucket::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CInstancedGeometryBucket::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback();
					}
					else
						return this->CInstancedGeometryBucket::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback();
					}
					else
						return this->CInstancedGeometryBucket::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback();
					}
					else
						return this->CInstancedGeometryBucket::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CInstancedGeometryBucket::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CInstancedGeometryBucket::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedGeometryBucket::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CInstancedGeometryBucket::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CInstancedGeometryBucket::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CInstancedGeometryBucket::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstancedGeometryBucket::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstancedGeometryBucket::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedGeometryBucket::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CInstancedGeometryBucket::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CInstancedGeometryBucket::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CInstancedGeometryBucket::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CInstancedGeometryBucketProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getCastsShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastsShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastsShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getCastsShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParent_CInstancedMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVertexData_CVertexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->getVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getIndexData_CIndexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->getIndexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getNumWorldTransforms();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumWorldTransforms();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getNumWorldTransforms_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getNumWorldTransforms();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getFormatString_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFormatString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_assign_ev_bool_QueuedInstancedGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* qsm )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->assign(qsm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAABB_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getAABB();
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderable_CSimpleRenderableInternal(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CInstancedGeometryBucketProxy* ptr = dynamic_cast<CInstancedGeometryBucketProxy*>((EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CInstancedGeometryBucket_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_push_back_void_CInstancedGeometryBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_front_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_back_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_insert_void_ev_uint32_CInstancedGeometryBucket(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& t )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_OperatorIndex_CInstancedGeometryBucket_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_at_CInstancedGeometryBucket_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_InstancedGeometryBucketList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_setPosition_void_CVector3(void *pObjectXXXX, _in void* position )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_yaw_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_pitch_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->pitch(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_roll_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->roll(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_rotate_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_setOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_setPositionAndOrientation_void_CVector3_CQuaternion(void *pObjectXXXX, _in void* p, _in const void* q )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->setPositionAndOrientation(*(EarthView::World::Spatial::Math::CVector3*)p, *(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getOrientation_CQuaternion(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getOrientation();
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_addBucketToList_void_CInstancedGeometryBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ref_bucket )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->addBucketToList(ref_bucket);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_needUpdate_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->needUpdate();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getGeometryBucketList_InstancedGeometryBucketList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList& objXXXX = ptrNativeObject->getGeometryBucketList();
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_translate_void_CMatrix3_CVector3(void *pObjectXXXX, _in const void* axes, _in const void* move )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_translate_void_CVector3(void *pObjectXXXX, _in const void* d )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CVector3*)d);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getLocalAxes_CMatrix3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->getLocalAxes();
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_updateAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				ptrNativeObject->updateAnimation();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getAnimationState_CAnimationState_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getAnimationState(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeletonInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedObject_getSkeletonInstance_CSkeletonInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonInstance* objXXXX = ptrNativeObject->getSkeletonInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_push_ev_bool_EVString_CInstancedGeometryBucket(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_OperatorIndex_CInstancedGeometryBucket_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_get_CInstancedGeometryBucket_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getParent_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getMaterialName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_assign_void_QueuedInstancedGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry* ref_qsm )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->assign(ref_qsm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_addRenderables_void_CRenderQueue_ev_uint8_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 group, _in Real lodValue )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->addRenderables(queue, group, lodValue);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_getCurrent_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_next_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_getBegin_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_InstancedGeometryBucketIterator_getEnd_CInstancedGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getGeometryIterator_InstancedGeometryBucketIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator objXXXX = ptrNativeObject->getGeometryIterator();
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator *pXXXX = new EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getCurrentTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getCurrentTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getMaterialBucketMap_InstancedGeometryBucketMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap* objXXXX = ptrNativeObject->getMaterialBucketMap();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getGeometryBucketList_InstancedGeometryBucketList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList* objXXXX = ptrNativeObject->getGeometryBucketList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_updateContainers_void_CInstancedGeometryBucket_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket* ref_bucket, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->updateContainers(ref_bucket, format1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_setLastIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->setLastIndex(index);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_getLastIndex_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLastIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_setMaterial_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->setMaterial(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedMaterialBucket_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_push_ev_bool_ev_uint16_CInstancedMaterialBucket(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*& ref_val )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_OperatorIndex_CInstancedMaterialBucket_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_get_CInstancedMaterialBucket_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialBucketPair_second( void *pObjectXXXX, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_nextValue_CInstancedMaterialBucket(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket**  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_nextValuePtr_CInstancedMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_next_CInstancedMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_getBegin_InstancedMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_getEnd_InstancedMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_InstancedMaterialIterator_getCurrent_InstancedMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_getParent_CBatchInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_getLod_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLod();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_getLodValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLodValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_assign_void_QueuedInstancedSubMesh_ev_uint16(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ref_qsm, _in ev_uint16 atLod )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ptrNativeObject->assign(ref_qsm, atLod);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_addRenderables_void_CRenderQueue_ev_uint8_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 group, _in Real lodValue )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ptrNativeObject->addRenderables(queue, group, lodValue);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_getMaterialIterator_InstancedMaterialIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator objXXXX = ptrNativeObject->getMaterialIterator();
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator *pXXXX = new EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_updateContainers_void_CInstancedMaterialBucket_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket* ref_bucket, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ptrNativeObject->updateContainers(ref_bucket, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CInstancedLODBucket_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CBatchInstanceProxy : public EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
			{
			private:
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CBatchInstanceProxy(EarthView::World::Core::CNameValuePairList *pList) : CBatchInstance(pList)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CBatchInstance::_notifyCurrentCamera(ref_cam);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getBoundingBox();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getBoundingRadius();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CBatchInstance::_updateRenderQueue(queue);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::isVisible();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CBatchInstance::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CBatchInstance::visitRenderables(visitor);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CBatchInstance::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CBatchInstance::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CBatchInstance::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CBatchInstance::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback();
					}
					else
						return this->CBatchInstance::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback();
					}
					else
						return this->CBatchInstance::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CBatchInstance::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CBatchInstance::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CBatchInstance::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CBatchInstance::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CBatchInstance::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CBatchInstance::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CBatchInstance::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CBatchInstance::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CBatchInstance::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CBatchInstance::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CBatchInstance::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CBatchInstance::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CBatchInstance::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CBatchInstance::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CBatchInstance::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback();
					}
					else
						return this->CBatchInstance::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback();
					}
					else
						return this->CBatchInstance::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CBatchInstance::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback();
					}
					else
						return this->CBatchInstance::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CBatchInstance::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CBatchInstance::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CBatchInstance::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CBatchInstance::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CBatchInstance::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CBatchInstance::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CBatchInstance::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CBatchInstance::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CBatchInstance::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CBatchInstance::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CBatchInstance::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CBatchInstance::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CBatchInstance::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CBatchInstance::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CBatchInstance::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CBatchInstance::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBatchInstance::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CBatchInstance::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CBatchInstance::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CBatchInstance::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CBatchInstanceProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_push_back_void_CInstancedLODBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_front_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_back_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_insert_void_ev_uint32_CInstancedLODBucket(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_OperatorIndex_CInstancedLODBucket_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_at_CInstancedLODBucket_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODBucketList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_push_ev_bool_ev_uint16_CInstancedObject(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*& ref_val )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_OperatorIndex_CInstancedObject_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_get_CInstancedObject_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectsPair_second( void *pObjectXXXX, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_nextValue_CInstancedObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject**  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_nextValuePtr_CInstancedObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_next_CInstancedObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_getBegin_InstancedObjectsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_getEnd_InstancedObjectsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedObjectIterator_getCurrent_InstancedObjectsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mLodValues( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::LodValueList &objXXXX = ptrNativeObject->mLodValues;
				EarthView::World::Graphic::LodValueList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mLodValues( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mLodValues = *(EarthView::World::Graphic::LodValueList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mAABB( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->mAABB;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mAABB( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mAABB = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mBoundingRadius( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mBoundingRadius;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mBoundingRadius( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mBoundingRadius = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mCurrentLod( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->mCurrentLod;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mCurrentLod( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mCurrentLod = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mLodValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mLodValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mLodValue( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mLodValue = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mCamera( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->mCamera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mCamera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mCamera = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mSquaredViewDepth( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mSquaredViewDepth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_mSquaredViewDepth( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)pObjectXXXX)->mSquaredViewDepth = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParent_CInstancedGeometry(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_assign_void_QueuedInstancedSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh* ref_qmesh )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->assign(ref_qmesh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setBoundingBox_void_CAxisAlignedBox(void *pObjectXXXX, _inout void* box )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->setBoundingBox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				if (dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_getCurrent_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_next_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_getBegin_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_InstancedLODIterator_getEnd_CInstancedLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLODIterator_InstancedLODIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator objXXXX = ptrNativeObject->getLODIterator();
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator *pXXXX = new EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateBoundingBox_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->updateBoundingBox();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateContainers_void_CInstancedLODBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket* ref_bucket )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->updateContainers(ref_bucket);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_attachToScene_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->attachToScene();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addInstancedObject_void_ev_uint16_CInstancedObject(void *pObjectXXXX, _in ev_uint16 index, _in EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* ref_object )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				ptrNativeObject->addInstancedObject(index, ref_object);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInstancedObjectPresent_CInstancedObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CInstancedObject* objXXXX = ptrNativeObject->isInstancedObjectPresent(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getObjectIterator_InstancedObjectIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator objXXXX = ptrNativeObject->getObjectIterator();
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator *pXXXX = new EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSceneNode_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getInstancesMap_InstancedObjectsMap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap& objXXXX = ptrNativeObject->getInstancesMap();
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CBatchInstanceProxy* ptr = dynamic_cast<CBatchInstanceProxy*>((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_CBatchInstance_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_push_ev_bool_ev_uint16_CBatchInstance(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*& ref_val )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_OperatorIndex_CBatchInstance_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_get_CBatchInstance_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_push_back_void_CRenderOperation(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderOperation*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_front_CRenderOperation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_back_CRenderOperation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_insert_void_ev_uint32_CRenderOperation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CRenderOperation*& ref_t )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_OperatorIndex_CRenderOperation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector& objYYYY = *(EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_at_CRenderOperation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_RenderOperationVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool(void *pObjectXXXX, _in const void* bounds, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getBatchInstance(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CAxisAlignedBox_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* bounds, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool(void *pObjectXXXX, _in const void* point, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getBatchInstance(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_CVector3_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(x, y, z, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getBatchInstance(x, y, z, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(x, y, z, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getBatchInstance(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstance_CBatchInstance_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstance(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
				else
					ptrNativeObject->getBatchInstanceIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getInstancedGeometryInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->getInstancedGeometryInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getInstancedGeometryInstance_CBatchInstance_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getInstancedGeometryInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::packIndex(x, y, z);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->packIndex(x, y, z);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::packIndex(x, y, z);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceBounds(x, y, z);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getBatchInstanceBounds(x, y, z);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceBounds(x, y, z);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceCentre(x, y, z);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getBatchInstanceCentre(x, y, z);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceCentre(x, y, z);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::calculateBounds(vertexData, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->calculateBounds(vertexData, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::calculateBounds(vertexData, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addEntity_void_CEntity_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addSceneNode(node);
				else
					ptrNativeObject->addSceneNode(node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addSceneNode_void_CSceneNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::addSceneNode(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_build_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_build_void_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_addBatchInstance_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->addBatchInstance();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_destroy_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::destroy();
				else
					ptrNativeObject->destroy();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_destroy_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_destroy_void_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_destroy_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_destroy_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::destroy();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::reset();
				else
					ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_reset_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_reset_void_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_reset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_reset_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setRenderingDistance(dist);
				else
					ptrNativeObject->setRenderingDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderingDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setRenderingDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getRenderingDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getRenderingDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderingDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getRenderingDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getSquaredRenderingDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredRenderingDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedGeometry_getSquaredRenderingDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getSquaredRenderingDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool castShadows )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setCastShadows(castShadows);
				else
					ptrNativeObject->setCastShadows(castShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setCastShadows_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool castShadows )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setCastShadows(castShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getCastShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_getCastShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getCastShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3(void *pObjectXXXX, _in const void* size )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setBatchInstanceDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
				else
					ptrNativeObject->setBatchInstanceDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setBatchInstanceDimensions_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* size )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setBatchInstanceDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceDimensions();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getBatchInstanceDimensions();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceDimensions_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getBatchInstanceDimensions();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3(void *pObjectXXXX, _in const void* origin )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
				else
					ptrNativeObject->setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setOrigin_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* origin )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getOrigin();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getOrigin();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getOrigin_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getOrigin();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getRenderQueueGroup();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroup();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderQueueGroup_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getRenderQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_BatchInstancePair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_BatchInstancePair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall Get_EarthView_World_Graphic_CInstancedGeometry_BatchInstancePair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstancedGeometry_BatchInstancePair_second( void *pObjectXXXX, EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  value )
			{
				((EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_nextValue_CBatchInstance(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance**  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_nextValuePtr_CBatchInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_next_CBatchInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::CBatchInstance* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_getBegin_BatchInstancePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_getEnd_BatchInstancePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_BatchInstanceIterator_getCurrent_BatchInstancePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBatchInstanceIterator_BatchInstanceIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator objXXXX = ptrNativeObject->getBatchInstanceIterator();
				EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator *pXXXX = new EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getRenderOperationVector_RenderOperationVector(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector& objXXXX = ptrNativeObject->getRenderOperationVector();
				EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::dump(filename1);
				else
					ptrNativeObject->dump(filename1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_dump_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::dump(filename1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeletonInstance*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBaseSkeletonInstance_CSkeletonInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonInstance* objXXXX = ptrNativeObject->getBaseSkeletonInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBaseSkeleton_CSkeletonPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonPtr objXXXX = ptrNativeObject->getBaseSkeleton();
				EarthView::World::Graphic::CSkeletonPtr *pXXXX = new EarthView::World::Graphic::CSkeletonPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationStateSet*  _stdcall EarthView_World_Graphic_CInstancedGeometry_getBaseAnimationState_CAnimationStateSet(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationStateSet* objXXXX = ptrNativeObject->getBaseAnimationState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedGeometry_getObjectCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getObjectCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setProvideWorldInverses(flag);
				else
					ptrNativeObject->setProvideWorldInverses(flag);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedGeometry_setProvideWorldInverses_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
			{
				EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::setProvideWorldInverses(flag);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				if (dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getProvideWorldInverses();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getProvideWorldInverses();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_Callback* pCallback )
			{
				CInstancedGeometryProxy* ptr = dynamic_cast<CInstancedGeometryProxy*>((EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedGeometry_getProvideWorldInverses_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedGeometry* ptrNativeObject = (EarthView::World::Graphic::CInstancedGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedGeometry::getProvideWorldInverses();
				return objXXXX;
			}
		}
	}
}
