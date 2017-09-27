/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/staticgeometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback)(_in const void* bounds, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback)(_in const void* point, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate);
			typedef EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback)(_in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback)(_in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback)(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback)(_in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback)(_in EarthView::World::Graphic::CEntity* ent, _in const void* position);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback)(_in const EarthView::World::Graphic::CSceneNode* node);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_reset_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback)(_in ev_bool castShadows);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback)(_in const void* size);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback)(_in const void* origin);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback)();
			class CStaticGeometryProxy : public EarthView::World::Graphic::CStaticGeometry
			{
			private:
				EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback* m_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback;
				EarthView_World_Graphic_CStaticGeometry_build_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_build_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_reset_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_reset_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback;
			public:
				CStaticGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CStaticGeometry(pList)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_build_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_reset_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool(EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32(EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion(EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3(EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode(EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_build_void(EarthView_World_Graphic_CStaticGeometry_build_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_destroy_void(EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_reset_void(EarthView_World_Graphic_CStaticGeometry_reset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_reset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real(EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real(EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real(EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool(EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool(EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3(EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3(EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3(EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3(EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion* getRegion(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bounds, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStaticGeometry::CStaticRegion* returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback(&bounds, autoCreate);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegion(bounds, autoCreate);
				}
				virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion* getRegion(_in const EarthView::World::Spatial::Math::CVector3& point, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStaticGeometry::CStaticRegion* returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback(&point, autoCreate);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegion(point, autoCreate);
				}
				virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion* getRegion(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStaticGeometry::CStaticRegion* returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback(x, y, z, autoCreate);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegion(x, y, z, autoCreate);
				}
				virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion* getRegion(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStaticGeometry::CStaticRegion* returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegion(index);
				}
				virtual void getRegionIndexes(_in const EarthView::World::Spatial::Math::CVector3& point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback(&point, x, y, z);
					}
					else
						return this->CStaticGeometry::getRegionIndexes(point, x, y, z);
				}
				virtual ev_uint32 packIndex(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CStaticGeometry::packIndex(x, y, z);
				}
				virtual Real getVolumeIntersection(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback(&box, x, y, z);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getVolumeIntersection(box, x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getRegionBounds(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegionBounds(x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getRegionCentre(_in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback(x, y, z);
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegionCentre(x, y, z);
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox calculateBounds(_in EarthView::World::Graphic::CVertexData* vertexData, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback(vertexData, &position, &orientation, &scale);
						return returnValue;
					}
					else
						return this->CStaticGeometry::calculateBounds(vertexData, position, orientation, scale);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback(ent, &position, &orientation, &scale);
					}
					else
						return this->CStaticGeometry::addEntity(ent, position, orientation, scale);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback(ent, &position, &orientation);
					}
					else
						return this->CStaticGeometry::addEntity(ent, position, orientation);
				}
				virtual void addEntity(_in EarthView::World::Graphic::CEntity* ent, _in const EarthView::World::Spatial::Math::CVector3& position)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback(ent, &position);
					}
					else
						return this->CStaticGeometry::addEntity(ent, position);
				}
				virtual void addSceneNode(_in const EarthView::World::Graphic::CSceneNode* node)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback(node);
					}
					else
						return this->CStaticGeometry::addSceneNode(node);
				}
				virtual void build()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_build_void_Callback();
					}
					else
						return this->CStaticGeometry::build();
				}
				virtual void destroy()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback();
					}
					else
						return this->CStaticGeometry::destroy();
				}
				virtual void reset()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_reset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_reset_void_Callback();
					}
					else
						return this->CStaticGeometry::reset();
				}
				virtual void setRenderingDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback(dist);
					}
					else
						return this->CStaticGeometry::setRenderingDistance(dist);
				}
				virtual Real getRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRenderingDistance();
				}
				virtual Real getSquaredRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getSquaredRenderingDistance();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CStaticGeometry::setVisible(visible);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::isVisible();
				}
				virtual void setCastShadows(_in ev_bool castShadows)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback(castShadows);
					}
					else
						return this->CStaticGeometry::setCastShadows(castShadows);
				}
				virtual ev_bool getCastShadows()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getCastShadows();
				}
				virtual void setRegionDimensions(_in const EarthView::World::Spatial::Math::CVector3& size)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback(&size);
					}
					else
						return this->CStaticGeometry::setRegionDimensions(size);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getRegionDimensions() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRegionDimensions();
				}
				virtual void setOrigin(_in const EarthView::World::Spatial::Math::CVector3& origin)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback(&origin);
					}
					else
						return this->CStaticGeometry::setOrigin(origin);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getOrigin() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getOrigin();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CStaticGeometry::setRenderQueueGroup(queueID);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometry::getRenderQueueGroup();
				}
			};
			REGISTER_FACTORY_CLASS(CStaticGeometryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_COptimisedSubMeshStaticGeometry_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_COptimisedSubMeshStaticGeometry_vertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_COptimisedSubMeshStaticGeometry_indexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->indexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_COptimisedSubMeshStaticGeometry_indexData( void *pObjectXXXX, EarthView::World::Graphic::CIndexData*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*)pObjectXXXX)->indexData = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_push_back_void_COptimisedSubMeshStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_push_front_void_COptimisedSubMeshStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_front_COptimisedSubMeshStaticGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_back_COptimisedSubMeshStaticGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_at_COptimisedSubMeshStaticGeometry_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_insert_void_ev_uint32_COptimisedSubMeshStaticGeometry(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_remove_void_COptimisedSubMeshStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& val )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->remove(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_OptimisedSubMeshStaticGeometryList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::OptimisedSubMeshStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLink_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLink_vertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLink_indexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->indexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLink_indexData( void *pObjectXXXX, EarthView::World::Graphic::CIndexData*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*)pObjectXXXX)->indexData = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_push_back_void_SubMeshLodStaticGeometryLink(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_front_SubMeshLodStaticGeometryLink(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_back_SubMeshLodStaticGeometryLink(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_insert_void_ev_uint32_SubMeshLodStaticGeometryLink(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_OperatorIndex_SubMeshLodStaticGeometryLink_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_at_SubMeshLodStaticGeometryLink_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshLodStaticGeometryLinkList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_push_ev_bool_CSubMesh_SubMeshLodStaticGeometryLinkList(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh*& ref_key, _in EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*& ref_val )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(ref_key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_exist_ev_bool_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh*& key )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_OperatorIndex_SubMeshLodStaticGeometryLinkList_CSubMesh(void *pObjXXXX, _in EarthView::World::Graphic::CSubMesh*& key )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_get_SubMeshLodStaticGeometryLinkList_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh*& key )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_erase_void_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh*& key )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_SubMeshStaticGeometryLookup_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::SubMeshStaticGeometryLookup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_submesh( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->submesh;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_submesh( void *pObjectXXXX, EarthView::World::Graphic::CSubMesh*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->submesh = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_geometryLodList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList* objXXXX = ptrNativeObject->geometryLodList;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_geometryLodList( void *pObjectXXXX, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->geometryLodList = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_materialName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->materialName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_materialName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->materialName = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_position( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_orientation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->orientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_orientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->orientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_scale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->scale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_scale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->scale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_worldBounds( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->worldBounds;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMesh_worldBounds( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*)pObjectXXXX)->worldBounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_push_back_void_QueuedStaticSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_front_QueuedStaticSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_back_QueuedStaticSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_insert_void_ev_uint32_QueuedStaticSubMesh(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_OperatorIndex_QueuedStaticSubMesh_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_at_QueuedStaticSubMesh_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticSubMeshList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMeshList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_geometry( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink* objXXXX = ptrNativeObject->geometry;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_geometry( void *pObjectXXXX, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*)pObjectXXXX)->geometry = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_position( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*)pObjectXXXX)->position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_orientation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->orientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_orientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*)pObjectXXXX)->orientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_scale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->scale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometry_scale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*)pObjectXXXX)->scale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_push_back_void_QueuedStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_front_QueuedStaticGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_back_QueuedStaticGeometry(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_insert_void_ev_uint32_QueuedStaticGeometry(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_OperatorIndex_QueuedStaticGeometry_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_at_QueuedStaticGeometry_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_QueuedStaticGeometryList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometryList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CStaticGeometryBucketProxy : public EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket
			{
			private:
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CStaticGeometryBucketProxy(EarthView::World::Core::CNameValuePairList *pList) : CStaticGeometryBucket(pList)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getMaterial();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getTechnique();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CStaticGeometryBucket::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CStaticGeometryBucket::getWorldTransforms(xform);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getLights();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getCastsShadows();
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CStaticGeometryBucket::postRender(sm, rsys);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getNumWorldTransforms();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CStaticGeometryBucket::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CStaticGeometryBucket::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CStaticGeometryBucket::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CStaticGeometryBucket::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CStaticGeometryBucket::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CStaticGeometryBucket::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CStaticGeometryBucket::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CStaticGeometryBucket::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CStaticGeometryBucketProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getParent_CStaticMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getVertexData_CVertexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->getVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getIndexData_CIndexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->getIndexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getTechnique();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getTechnique_CTechnique_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getCastsShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastsShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCastsShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket::getCastsShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_assign_ev_bool_QueuedStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* qsm )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->assign(qsm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_build_void_ev_bool(void *pObjectXXXX, _in ev_bool stencilShadows )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX;
				ptrNativeObject->build(stencilShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CStaticGeometryBucketProxy* ptr = dynamic_cast<CStaticGeometryBucketProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticGeometryBucket_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_push_back_void_CStaticGeometryBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_front_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_back_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_insert_void_ev_uint32_CStaticGeometryBucket(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_OperatorIndex_CStaticGeometryBucket_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_at_CStaticGeometryBucket_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_getParent_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_getMaterialName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_assign_void_QueuedStaticGeometry(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry* qsm )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				ptrNativeObject->assign(qsm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_build_void_ev_bool(void *pObjectXXXX, _in ev_bool stencilShadows )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				ptrNativeObject->build(stencilShadows);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_addRenderables_void_CRenderQueue_ev_uint8_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 group, _in Real lodValue )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				ptrNativeObject->addRenderables(queue, group, lodValue);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_getCurrent_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_next_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_getBegin_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_StaticGeometryBucketIterator_getEnd_CStaticGeometryBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_getGeometryIterator_StaticGeometryBucketIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator objXXXX = ptrNativeObject->getGeometryIterator();
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator *pXXXX = new EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_getCurrentTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getCurrentTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticMaterialBucket_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_push_ev_bool_EVString_CStaticMaterialBucket(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_OperatorIndex_CStaticMaterialBucket_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_get_CStaticMaterialBucket_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getParent_CStaticRegion(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getLod_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLod();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getLodValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLodValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_assign_void_QueuedStaticSubMesh_ev_uint16(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* qsm, _in ev_uint16 atLod )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->assign(qsm, atLod);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_build_void_ev_bool(void *pObjectXXXX, _in ev_bool stencilShadows )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->build(stencilShadows);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_addRenderables_void_CRenderQueue_ev_uint8_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 group, _in Real lodValue )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->addRenderables(queue, group, lodValue);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketPair_second( void *pObjectXXXX, EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_nextValue_CStaticMaterialBucket(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket**  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_nextValuePtr_CStaticMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_next_CStaticMaterialBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_getBegin_StaticMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_getEnd_StaticMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_StaticMaterialBucketIterator_getCurrent_StaticMaterialBucketPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getMaterialIterator_StaticMaterialBucketIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator objXXXX = ptrNativeObject->getMaterialIterator();
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator *pXXXX = new EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getEdgeList_CEdgeData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->getEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_getShadowRenderableList_ShadowRenderableList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& objXXXX = ptrNativeObject->getShadowRenderableList();
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_isVertexProgramInUse_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVertexProgramInUse();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_updateShadowRenderables_void_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(void *pObjectXXXX, _in int shadowTechnique, _in const void* lightPos, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->updateShadowRenderables((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, *(EarthView::World::Spatial::Math::CVector4*)lightPos, indexBuffer, extrudeVertices, extrusionDistance, flags);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticLODBucket_updateShadowRenderables_void_ShadowTechnique_CVector4_CHardwareIndexBufferSharedPtr_ev_bool_Real(void *pObjectXXXX, _in int shadowTechnique, _in const void* lightPos, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*) pObjectXXXX;
				ptrNativeObject->updateShadowRenderables((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, *(EarthView::World::Spatial::Math::CVector4*)lightPos, indexBuffer, extrudeVertices, extrusionDistance);
			}
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CStaticRegionProxy : public EarthView::World::Graphic::CStaticGeometry::CStaticRegion
			{
			private:
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CStaticRegionProxy(EarthView::World::Core::CNameValuePairList *pList) : CStaticRegion(pList)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList(EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CStaticRegion::_notifyCurrentCamera(cam);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getBoundingBox();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getBoundingRadius();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CStaticRegion::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CStaticRegion::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CStaticRegion::visitRenderables(visitor);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::isVisible();
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getTypeFlags();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
						return returnValue;
					}
					else
						return this->CStaticRegion::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
						return returnValue;
					}
					else
						return this->CStaticRegion::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::hasEdgeList();
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CStaticRegion::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CStaticRegion::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CStaticRegion::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CStaticRegion::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback();
					}
					else
						return this->CStaticRegion::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback();
					}
					else
						return this->CStaticRegion::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CStaticRegion::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CStaticRegion::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CStaticRegion::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CStaticRegion::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CStaticRegion::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CStaticRegion::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CStaticRegion::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CStaticRegion::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CStaticRegion::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CStaticRegion::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CStaticRegion::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CStaticRegion::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CStaticRegion::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CStaticRegion::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CStaticRegion::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback();
					}
					else
						return this->CStaticRegion::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback();
					}
					else
						return this->CStaticRegion::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CStaticRegion::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback();
					}
					else
						return this->CStaticRegion::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CStaticRegion::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CStaticRegion::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CStaticRegion::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CStaticRegion::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CStaticRegion::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CStaticRegion::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CStaticRegion::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CStaticRegion::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CStaticRegion::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CStaticRegion::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::_getLightList();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CStaticRegion::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CStaticRegion::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CStaticRegion::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CStaticRegion::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStaticRegion::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CStaticRegion::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CStaticRegion::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CStaticRegion::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CStaticRegionProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_push_back_void_CStaticLODBucket(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_front_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_back_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_insert_void_ev_uint32_CStaticLODBucket(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& ref_t )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_OperatorIndex_CStaticLODBucket_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_at_CStaticLODBucket_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParent_CStaticGeometry(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_assign_void_QueuedStaticSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh* qmesh )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->assign(qmesh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_build_void_ev_bool(void *pObjectXXXX, _in ev_bool stencilShadows )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->build(stencilShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCentre_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getCentre();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::_notifyCurrentCamera(cam);
				else
					ptrNativeObject->_notifyCurrentCamera(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::_notifyCurrentCamera(cam);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getBoundingBox();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getTypeFlags();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getTypeFlags();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getTypeFlags_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getTypeFlags();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_getCurrent_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_next_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_getBegin_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_StaticLODBucketIterator_getEnd_CStaticLODBucket(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLODIterator_StaticLODBucketIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator objXXXX = ptrNativeObject->getLODIterator();
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator *pXXXX = new EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getEdgeList();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->getEdgeList();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEdgeList_CEdgeData_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::getEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				if (dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::hasEdgeList();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasEdgeList();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_CStaticRegion_hasEdgeList_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::CStaticRegion::hasEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CStaticRegionProxy* ptr = dynamic_cast<CStaticRegionProxy*>((EarthView::World::Graphic::CStaticGeometry::CStaticRegion*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_CStaticRegion_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_push_ev_bool_ev_uint32_CStaticRegion(void *pObjectXXXX, _in const ev_uint32& key, _in EarthView::World::Graphic::CStaticGeometry::CStaticRegion*& ref_val )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_exist_ev_bool_ev_uint32(void *pObjectXXXX, _in const ev_uint32& key )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_OperatorIndex_CStaticRegion_ev_uint32(void *pObjXXXX, _in const ev_uint32& key )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap& objYYYY = *(EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_get_CStaticRegion_ev_uint32(void *pObjectXXXX, _in const ev_uint32& key )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_erase_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32& key )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionMap* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool(void *pObjectXXXX, _in const void* bounds, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->getRegion(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CAxisAlignedBox_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* bounds, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool(void *pObjectXXXX, _in const void* point, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->getRegion(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_CVector3_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* point, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(*(EarthView::World::Spatial::Math::CVector3*)point, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(x, y, z, autoCreate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->getRegion(x, y, z, autoCreate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint16_ev_uint16_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z, _in ev_bool autoCreate )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(x, y, z, autoCreate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->getRegion(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegion_CStaticRegion_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegion(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
				else
					ptrNativeObject->getRegionIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionIndexes_void_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* point, _inout ev_uint16& x, _inout ev_uint16& y, _inout ev_uint16& z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionIndexes(*(EarthView::World::Spatial::Math::CVector3*)point, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::packIndex(x, y, z);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->packIndex(x, y, z);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_packIndex_ev_uint32_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::packIndex(x, y, z);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getVolumeIntersection_Real_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* box, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getVolumeIntersection(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionBounds(x, y, z);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getRegionBounds(x, y, z);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionBounds_CAxisAlignedBox_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionBounds(x, y, z);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionCentre(x, y, z);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRegionCentre(x, y, z);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionCentre_CVector3_ev_uint16_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 x, _in ev_uint16 y, _in ev_uint16 z )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionCentre(x, y, z);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::calculateBounds(vertexData, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_calculateBounds_CAxisAlignedBox_CVertexData_CVector3_CQuaternion_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* vertexData, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::calculateBounds(vertexData, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CStaticGeometry_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation, _in const void* scale )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation, *(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position, _in const void* orientation )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CQuaternion*)orientation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
				else
					ptrNativeObject->addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addEntity_void_CEntity_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* ent, _in const void* position )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addEntity(ent, *(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addSceneNode(node);
				else
					ptrNativeObject->addSceneNode(node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_addSceneNode_void_CSceneNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::addSceneNode(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_build_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_build_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_build_void_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_destroy_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::destroy();
				else
					ptrNativeObject->destroy();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_destroy_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_destroy_void_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_destroy_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_destroy_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::destroy();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::reset();
				else
					ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_reset_void( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_reset_void_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_reset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_reset_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRenderingDistance(dist);
				else
					ptrNativeObject->setRenderingDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderingDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRenderingDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRenderingDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getRenderingDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderingDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRenderingDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getSquaredRenderingDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredRenderingDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CStaticGeometry_getSquaredRenderingDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getSquaredRenderingDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool castShadows )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setCastShadows(castShadows);
				else
					ptrNativeObject->setCastShadows(castShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setCastShadows_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool castShadows )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setCastShadows(castShadows);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getCastShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_getCastShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getCastShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3(void *pObjectXXXX, _in const void* size )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRegionDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
				else
					ptrNativeObject->setRegionDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRegionDimensions_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* size )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRegionDimensions(*(EarthView::World::Spatial::Math::CVector3*)size);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionDimensions();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getRegionDimensions();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionDimensions_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRegionDimensions();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3(void *pObjectXXXX, _in const void* origin )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
				else
					ptrNativeObject->setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setOrigin_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* origin )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setOrigin(*(EarthView::World::Spatial::Math::CVector3*)origin);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getOrigin();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getOrigin_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getOrigin();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setVisibilityFlags_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->setVisibilityFlags(flags);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStaticGeometry_getVisibilityFlags_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getVisibilityFlags();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				if (dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRenderQueueGroup();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroup();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CStaticGeometryProxy* ptr = dynamic_cast<CStaticGeometryProxy*>((EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CStaticGeometry_getRenderQueueGroup_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStaticGeometry::getRenderQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_StaticRegionPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionPair* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionPair*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_StaticRegionPair_first( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::StaticRegionPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall Get_EarthView_World_Graphic_CStaticGeometry_StaticRegionPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionPair* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionPair*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStaticGeometry_StaticRegionPair_second( void *pObjectXXXX, EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  value )
			{
				((EarthView::World::Graphic::CStaticGeometry::StaticRegionPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_nextValue_CStaticRegion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion**  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_nextValuePtr_CStaticRegion(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStaticGeometry::CStaticRegion*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_next_CStaticRegion(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::CStaticRegion* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_getBegin_StaticRegionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_getEnd_StaticRegionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CStaticGeometry_StaticRegionIterator_getCurrent_StaticRegionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStaticGeometry_getRegionIterator_StaticRegionIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStaticGeometry* ptrNativeObject = (EarthView::World::Graphic::CStaticGeometry*) pObjectXXXX;
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator objXXXX = ptrNativeObject->getRegionIterator();
				EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator *pXXXX = new EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
