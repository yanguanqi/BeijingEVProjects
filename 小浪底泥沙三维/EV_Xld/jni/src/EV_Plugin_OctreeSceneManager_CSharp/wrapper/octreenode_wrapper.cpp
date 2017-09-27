/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octreenode.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* q, _in ev_bool onlyShadowCasters, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback)(_in ev_bool inGraph);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback)(_in ev_bool bShow);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback)(_in ev_bool bShow, _in void* redPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback)(_in ev_bool bHide);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback)(_inout void* destList, _in Real radius, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback)(_inout void* destList, _in Real radius);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback)(_in ev_bool useFixed, _in const void* fixedAxis);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback)(_in ev_bool useFixed);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback)(_in const void* vec, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback)(_in const void* vec, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback)(_in const void* vec);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback)(_in const void* targetPoint, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback)(_in const void* targetPoint, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVecto);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVector, _in const void* offset);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback)(_in ev_bool visible, _in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback)(_in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback)(_in ev_bool enabled, _in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback)(_in Real w, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback)(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback)(_in const void* scale, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback)(_in const void* d, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback)(_in const void* d);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback)(_in const void* axes, _in const void* move, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback)(_in const void* axes, _in const void* move);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback)(_in const void* axis, _in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback)(_in const void* axis, _in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback)(_in const void* q, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback)(_in ev_bool updateChildren, _in ev_bool parentHasChanged);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef EarthView::World::Graphic::CNode::CNodeListener*  ( _stdcall EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback)(_in const void* worldPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback)(_in const void* localPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback)(_in const void* worldOrientation);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback)(_in const void* localOrientation);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback)(_in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback)(_in Real scaling);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback)();
			class COctreeNodeProxy : public EarthView::World::Graphic::COctreeNode
			{
			private:
				EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback* m_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback;
				EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback* m_EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback;
				EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback* m_EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback;
				EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback;
				EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback* m_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback;
				EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback;
				EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback* m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback;
				EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback* m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback;
				EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback* m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback;
				EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback* m_EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback;
				EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback* m_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback;
				EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback* m_EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback;
				EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback* m_EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback;
				EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback* m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback;
				EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback* m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback;
				EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback* m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback;
				EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback* m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback;
				EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback* m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback;
				EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback* m_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback* m_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback;
				EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback* m_EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback;
				EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback* m_EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback;
				EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback* m_EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback;
				EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback* m_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback;
				EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback* m_EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback;
				EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback* m_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback;
				EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback* m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback;
				EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback* m_EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback;
				EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback* m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback;
				EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback* m_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback;
			public:
				COctreeNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeNode(pList)
				{
					m_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool(EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool(EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__notifyRootNode_void(EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__updateBounds_void(EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox(EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator(EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool(EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr(EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool(EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue(EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool(EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString(EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32(EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real(EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3(EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool(EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real(EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3(EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace(EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3(EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3(EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace(EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool(EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode(EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode(EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3(EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3(EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool(EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool(EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool(EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool(EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool(EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool(EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool(EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool(EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void(EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable(EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__updateFromParent_void(EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setParent_void_CNode(EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void(EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode(EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString(EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_notifyMoved_void(EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getParent_CNode(EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion(EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion(EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real(EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool(EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_resetOrientation_void(EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3(EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool(EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real(EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getPosition_CVector3(EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3(EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool(EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real(EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getScale_CVector3(EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool(EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool(EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool(EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool(EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_scale_void_CVector3(EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real(EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace(EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3(EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real(EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace(EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3(EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real(EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace(EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian(EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace(EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian(EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace(EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian(EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace(EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian(EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace(EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion(EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4(EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4(EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4(EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4(EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3(EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion(EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3(EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode(EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3(EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString(EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_addChild_void_CNode(EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16(EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16(EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString(EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString(EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator(EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeAllChildren_void(EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3(EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool(EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion(EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion(EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3(EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3(EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4(EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool(EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener(EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener(EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32(EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32(EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_setInitialState_void(EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_resetToInitialState_void(EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3(EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3(EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3(EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion(EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3(EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool(EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void(EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool(EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode(EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode(EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real(EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject(EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16(EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16(EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString(EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16(EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject(EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString(EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_detachAllObjects_void(EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString(EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16(EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void(EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::removeChild(index);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::removeChild(name);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback(child);
						return returnValue;
					}
					else
						return this->COctreeNode::removeChild(child);
				}
				virtual void removeAllChildren()
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback();
					}
					else
						return this->COctreeNode::removeAllChildren();
				}
				virtual void _addToRenderQueue(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* q, _in ev_bool onlyShadowCasters, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds)
				{
					if(m_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback(cam, q, onlyShadowCasters, visibleBounds);
					}
					else
						return this->COctreeNode::_addToRenderQueue(cam, q, onlyShadowCasters, visibleBounds);
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->COctreeNode::getRenderOperation(op);
				}
				virtual void _updateBounds()
				{
					if(m_EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback();
					}
					else
						return this->COctreeNode::_updateBounds();
				}
				virtual void updateFromParentImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback();
					}
					else
						return this->COctreeNode::updateFromParentImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl()
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::createChildImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildImpl(name);
				}
				virtual void setParent(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback(ref_parent);
					}
					else
						return this->COctreeNode::setParent(ref_parent);
				}
				virtual void setInSceneGraph(_in ev_bool inGraph)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback(inGraph);
					}
					else
						return this->COctreeNode::setInSceneGraph(inGraph);
				}
				virtual void notifyMoved() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback();
					}
					else
						return this->COctreeNode::notifyMoved();
				}
				virtual void attachObject(_in EarthView::World::Graphic::CMovableObject* ref_obj)
				{
					if(m_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback(ref_obj);
					}
					else
						return this->COctreeNode::attachObject(ref_obj);
				}
				virtual ev_uint16 numAttachedObjects() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::numAttachedObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::getAttachedObject(index);
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::getAttachedObject(name);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::detachObject(index);
				}
				virtual void detachObject(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback(obj);
					}
					else
						return this->COctreeNode::detachObject(obj);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::detachObject(name);
				}
				virtual void detachAllObjects()
				{
					if(m_EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback();
					}
					else
						return this->COctreeNode::detachAllObjects();
				}
				virtual ev_bool isInSceneGraph() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::isInSceneGraph();
				}
				virtual void _notifyRootNode()
				{
					if(m_EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback();
					}
					else
						return this->COctreeNode::_notifyRootNode();
				}
				virtual void _update(_in ev_bool updateChildren, _in ev_bool parentHasChanged)
				{
					if(m_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback(updateChildren, parentHasChanged);
					}
					else
						return this->COctreeNode::_update(updateChildren, parentHasChanged);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters)
				{
					if(m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
					}
					else
						return this->COctreeNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes)
				{
					if(m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback(cam, queue, visibleBounds, includeChildren, displayNodes);
					}
					else
						return this->COctreeNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren)
				{
					if(m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback(cam, queue, visibleBounds, includeChildren);
					}
					else
						return this->COctreeNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds)
				{
					if(m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback(cam, queue, visibleBounds);
					}
					else
						return this->COctreeNode::_findVisibleObjects(cam, queue, visibleBounds);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& _getWorldAABB() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::_getWorldAABB();
				}
				virtual EarthView::World::Graphic::CSceneNode::ObjectIterator getAttachedObjectIterator()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode::ObjectIterator returnValue = *(EarthView::World::Graphic::CSceneNode::ObjectIterator*)m_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getAttachedObjectIterator();
				}
				virtual void removeAndDestroyChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeNode::removeAndDestroyChild(name);
				}
				virtual void removeAndDestroyChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback(index);
					}
					else
						return this->COctreeNode::removeAndDestroyChild(index);
				}
				virtual void removeAndDestroyAllChildren()
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback();
					}
					else
						return this->COctreeNode::removeAndDestroyAllChildren();
				}
				virtual void showBoundingBox(_in ev_bool bShow)
				{
					if(m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback(bShow);
					}
					else
						return this->COctreeNode::showBoundingBox(bShow);
				}
				virtual void showBoundingBox(_in ev_bool bShow, _in EarthView::World::Graphic::CMaterialPtr redPtr)
				{
					if(m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback(bShow, &redPtr);
					}
					else
						return this->COctreeNode::showBoundingBox(bShow, redPtr);
				}
				virtual void hideBoundingBox(_in ev_bool bHide)
				{
					if(m_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback(bHide);
					}
					else
						return this->COctreeNode::hideBoundingBox(bHide);
				}
				virtual void _addBoundingBoxToQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->COctreeNode::_addBoundingBoxToQueue(queue);
				}
				virtual ev_bool getShowBoundingBox() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getShowBoundingBox();
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback(&translate, &rotate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode(translate, rotate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback(&translate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode(translate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode()
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback(name_Char, &translate, &rotate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode(name, translate, rotate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback(name_Char, &translate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode(name, translate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::createChildSceneNode(name);
				}
				virtual void findLights(_inout EarthView::World::Graphic::LightList& destList, _in Real radius, _in ev_uint32 lightMask) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback(&destList, radius, lightMask);
					}
					else
						return this->COctreeNode::findLights(destList, radius, lightMask);
				}
				virtual void findLights(_inout EarthView::World::Graphic::LightList& destList, _in Real radius) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback(&destList, radius);
					}
					else
						return this->COctreeNode::findLights(destList, radius);
				}
				virtual void setFixedYawAxis(_in ev_bool useFixed, _in const EarthView::World::Spatial::Math::CVector3& fixedAxis)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback(useFixed, &fixedAxis);
					}
					else
						return this->COctreeNode::setFixedYawAxis(useFixed, fixedAxis);
				}
				virtual void setFixedYawAxis(_in ev_bool useFixed)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback(useFixed);
					}
					else
						return this->COctreeNode::setFixedYawAxis(useFixed);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->COctreeNode::yaw(angle, relativeTo);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback(&angle);
					}
					else
						return this->COctreeNode::yaw(angle);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback(x, y, z, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->COctreeNode::setDirection(x, y, z, relativeTo, localDirectionVector);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->COctreeNode::setDirection(x, y, z, relativeTo);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->COctreeNode::setDirection(x, y, z);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback(&vec, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->COctreeNode::setDirection(vec, relativeTo, localDirectionVector);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback(&vec, (int)relativeTo);
					}
					else
						return this->COctreeNode::setDirection(vec, relativeTo);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback(&vec);
					}
					else
						return this->COctreeNode::setDirection(vec);
				}
				virtual void lookAt(_in const EarthView::World::Spatial::Math::CVector3& targetPoint, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback(&targetPoint, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->COctreeNode::lookAt(targetPoint, relativeTo, localDirectionVector);
				}
				virtual void lookAt(_in const EarthView::World::Spatial::Math::CVector3& targetPoint, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback(&targetPoint, (int)relativeTo);
					}
					else
						return this->COctreeNode::lookAt(targetPoint, relativeTo);
				}
				virtual void setAutoTracking(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback(enabled);
					}
					else
						return this->COctreeNode::setAutoTracking(enabled);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback(enabled, ref_target);
					}
					else
						return this->COctreeNode::setAutoTracking(enabled, ref_target);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVecto)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback(enabled, ref_target, &localDirectionVecto);
					}
					else
						return this->COctreeNode::setAutoTracking(enabled, ref_target, localDirectionVecto);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector, _in const EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback(enabled, ref_target, &localDirectionVector, &offset);
					}
					else
						return this->COctreeNode::setAutoTracking(enabled, ref_target, localDirectionVector, offset);
				}
				virtual EarthView::World::Graphic::CSceneNode* getAutoTrackTarget()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getAutoTrackTarget();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackOffset()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getAutoTrackOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackLocalDirection()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getAutoTrackLocalDirection();
				}
				virtual void setVisible(_in ev_bool visible, _in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback(visible, cascade);
					}
					else
						return this->COctreeNode::setVisible(visible, cascade);
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->COctreeNode::setVisible(visible);
				}
				virtual ev_bool getVisible()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getVisible();
				}
				virtual ev_bool hasAnyVisibleObject() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::hasAnyVisibleObject();
				}
				virtual ev_bool hasAnyVisibleObject2() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::hasAnyVisibleObject2();
				}
				virtual ev_bool hasAnyVisibleShadowCaster() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::hasAnyVisibleShadowCaster();
				}
				virtual ev_bool hasAnyVisibleShadowCaster2() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::hasAnyVisibleShadowCaster2();
				}
				virtual void flipVisibility(_in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback(cascade);
					}
					else
						return this->COctreeNode::flipVisibility(cascade);
				}
				virtual void flipVisibility()
				{
					if(m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback();
					}
					else
						return this->COctreeNode::flipVisibility();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled, _in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback(enabled, cascade);
					}
					else
						return this->COctreeNode::setDebugDisplayEnabled(enabled, cascade);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->COctreeNode::setDebugDisplayEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CDebugRenderable* returnValue = m_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getDebugRenderable();
				}
				virtual void _updateFromParent() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback();
					}
					else
						return this->COctreeNode::_updateFromParent();
				}
				virtual EarthView::World::Graphic::CNode* getParent() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getParent();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientation() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getOrientation();
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->COctreeNode::setOrientation(q);
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->COctreeNode::setOrientation(q, notify);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback(w, x, y, z);
					}
					else
						return this->COctreeNode::setOrientation(w, x, y, z);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback(w, x, y, z, notify);
					}
					else
						return this->COctreeNode::setOrientation(w, x, y, z, notify);
				}
				virtual void resetOrientation()
				{
					if(m_EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback();
					}
					else
						return this->COctreeNode::resetOrientation();
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->COctreeNode::setPosition(pos);
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->COctreeNode::setPosition(pos, notify);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->COctreeNode::setPosition(x, y, z);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->COctreeNode::setPosition(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getPosition();
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback(&scale);
					}
					else
						return this->COctreeNode::setScale(scale);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback(&scale, notify);
					}
					else
						return this->COctreeNode::setScale(scale, notify);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->COctreeNode::setScale(x, y, z);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->COctreeNode::setScale(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getScale();
				}
				virtual void setInheritOrientation(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback(inherit);
					}
					else
						return this->COctreeNode::setInheritOrientation(inherit);
				}
				virtual ev_bool getInheritOrientation() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getInheritOrientation();
				}
				virtual void setInheritScale(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback(inherit);
					}
					else
						return this->COctreeNode::setInheritScale(inherit);
				}
				virtual ev_bool getInheritScale() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getInheritScale();
				}
				virtual void scale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback(&scale);
					}
					else
						return this->COctreeNode::scale(scale);
				}
				virtual void scale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->COctreeNode::scale(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback(&d, (int)relativeTo);
					}
					else
						return this->COctreeNode::translate(d, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback(&d);
					}
					else
						return this->COctreeNode::translate(d);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->COctreeNode::translate(x, y, z, relativeTo);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->COctreeNode::translate(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback(&axes, &move, (int)relativeTo);
					}
					else
						return this->COctreeNode::translate(axes, move, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback(&axes, &move);
					}
					else
						return this->COctreeNode::translate(axes, move);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback(&axes, x, y, z, (int)relativeTo);
					}
					else
						return this->COctreeNode::translate(axes, x, y, z, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback(&axes, x, y, z);
					}
					else
						return this->COctreeNode::translate(axes, x, y, z);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->COctreeNode::roll(angle, relativeTo);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback(&angle);
					}
					else
						return this->COctreeNode::roll(angle);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->COctreeNode::pitch(angle, relativeTo);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback(&angle);
					}
					else
						return this->COctreeNode::pitch(angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback(&axis, &angle, (int)relativeTo);
					}
					else
						return this->COctreeNode::rotate(axis, angle, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback(&axis, &angle);
					}
					else
						return this->COctreeNode::rotate(axis, angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback(&q, (int)relativeTo);
					}
					else
						return this->COctreeNode::rotate(q, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback(&q);
					}
					else
						return this->COctreeNode::rotate(q);
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->COctreeNode::setMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getMatrix();
				}
				virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->COctreeNode::setLocalMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getLocalMatrix();
				}
				virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix3 returnValue = *(EarthView::World::Spatial::Math::CMatrix3*)m_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getLocalAxes();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback(&translate, &rotate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChild(translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback(&translate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChild(translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild()
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::createChild();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback(name_Char, &translate, &rotate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChild(name, translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback(name_Char, &translate);
						return returnValue;
					}
					else
						return this->COctreeNode::createChild(name, translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::createChild(name);
				}
				virtual void addChild(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback(ref_child);
					}
					else
						return this->COctreeNode::addChild(ref_child);
				}
				virtual ev_uint16 numChildren() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::numChildren();
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::getChild(index);
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::getChild(name);
				}
				virtual ev_bool existChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeNode::existChild(name);
				}
				virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator()
				{
					if(m_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::ChildNodeIterator returnValue = *(EarthView::World::Graphic::CNode::ChildNodeIterator*)m_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getChildIterator();
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->COctreeNode::_setDerivedPosition(pos);
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->COctreeNode::_setDerivedPosition(pos, notify);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->COctreeNode::_setDerivedOrientation(q);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->COctreeNode::_setDerivedOrientation(q, notify);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& _getDerivedOrientation() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::_getDerivedOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedPosition() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::_getDerivedPosition();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedScale() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::_getDerivedScale();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getFullTransform() const
				{
					if(m_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::_getFullTransform();
				}
				virtual void addListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->COctreeNode::addListener(listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->COctreeNode::removeListener(listener);
				}
				virtual EarthView::World::Graphic::CNode::CNodeListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CNodeListener* returnValue = m_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::getListener(index);
				}
				virtual ev_uint32 getNumListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeNode::getNumListener(index);
				}
				virtual void setInitialState()
				{
					if(m_EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback();
					}
					else
						return this->COctreeNode::setInitialState();
				}
				virtual void resetToInitialState()
				{
					if(m_EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback();
					}
					else
						return this->COctreeNode::resetToInitialState();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialPosition() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getInitialPosition();
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition(_in const EarthView::World::Spatial::Math::CVector3& worldPos)
				{
					if(m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback(&worldPos);
						return returnValue;
					}
					else
						return this->COctreeNode::convertWorldToLocalPosition(worldPos);
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition(_in const EarthView::World::Spatial::Math::CVector3& localPos)
				{
					if(m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback(&localPos);
						return returnValue;
					}
					else
						return this->COctreeNode::convertLocalToWorldPosition(localPos);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& worldOrientation)
				{
					if(m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback(&worldOrientation);
						return returnValue;
					}
					else
						return this->COctreeNode::convertWorldToLocalOrientation(worldOrientation);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if(m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback(&localOrientation);
						return returnValue;
					}
					else
						return this->COctreeNode::convertLocalToWorldOrientation(localOrientation);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getInitialOrientation() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getInitialOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialScale() const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeNode::getInitialScale();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->COctreeNode::getSquaredViewDepth(cam);
				}
				virtual void needUpdate(_in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback(forceParentUpdate);
					}
					else
						return this->COctreeNode::needUpdate(forceParentUpdate);
				}
				virtual void needUpdate()
				{
					if(m_EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback();
					}
					else
						return this->COctreeNode::needUpdate();
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback(ref_child, forceParentUpdate);
					}
					else
						return this->COctreeNode::requestUpdate(ref_child, forceParentUpdate);
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback(ref_child);
					}
					else
						return this->COctreeNode::requestUpdate(ref_child);
				}
				virtual void cancelUpdate(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback(child);
					}
					else
						return this->COctreeNode::cancelUpdate(child);
				}
			};
			REGISTER_FACTORY_CLASS(COctreeNodeProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(child);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(child);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_COctreeNode_removeChild_CNode_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeChild(child);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode_removeAllChildren_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeAllChildren();
				else
					ptrNativeObject->removeAllChildren();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeAllChildren_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode_removeAllChildren_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeNode::removeAllChildren();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COctree*  _stdcall EarthView_World_Graphic_COctreeNode_getOctant_COctree(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				EarthView::World::Graphic::COctree* objXXXX = ptrNativeObject->getOctant();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode_setOctant_void_COctree(void *pObjectXXXX, _in EarthView::World::Graphic::COctree* ref_o )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ptrNativeObject->setOctant(ref_o);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeNode__isIn_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _inout void* box )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_isIn(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* q, _in ev_bool onlyShadowCasters, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeNode::_addToRenderQueue(cam, q, onlyShadowCasters, visibleBounds);
				else
					ptrNativeObject->_addToRenderQueue(cam, q, onlyShadowCasters, visibleBounds);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode__addToRenderQueue_void_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* q, _in ev_bool onlyShadowCasters, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeNode::_addToRenderQueue(cam, q, onlyShadowCasters, visibleBounds);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeNode::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeNode::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_COctreeNode__getLocalAABB_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->_getLocalAABB();
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode__updateBounds_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				if (dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeNode::_updateBounds();
				else
					ptrNativeObject->_updateBounds();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateBounds_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__updateBounds_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__updateBounds_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeNode__updateBounds_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeNode* ptrNativeObject = (EarthView::World::Graphic::COctreeNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeNode::_updateBounds();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setInSceneGraph_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_isInSceneGraph_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__notifyRootNode_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__notifyRootNode_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__notifyRootNode_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__getWorldAABB_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObjectIterator_ObjectIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_showBoundingBox_void_ev_bool_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_hideBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__addBoundingBoxToQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getShowBoundingBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_findLights_void_LightList_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setFixedYawAxis_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDirection_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_lookAt_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackOffset_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAutoTrackLocalDirection_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getVisible_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleObject2_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_hasAnyVisibleShadowCaster2_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_flipVisibility_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_flipVisibility_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__updateFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__updateFromParent_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__updateFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setParent_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setParent_void_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setParent_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_updateFromParentImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChildImpl_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_notifyMoved_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getParent_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getParent_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getParent_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setOrientation_void_Real_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetOrientation_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_resetOrientation_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_resetOrientation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setPosition_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getPosition_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setScale_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getScale_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setInheritOrientation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getInheritOrientation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setInheritScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getInheritScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_scale_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_scale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_scale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_translate_void_CMatrix3_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_roll_void_CRadian_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_roll_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_pitch_void_CRadian_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_pitch_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_yaw_void_CRadian_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_yaw_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CVector3_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_rotate_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setLocalMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getLocalMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getLocalAxes_CMatrix3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_createChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addChild_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_addChild_void_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_addChild_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_numChildren_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_existChild_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getChildIterator_ChildNodeIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__setDerivedOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__getDerivedScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__getFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode__update_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_addListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getListener_CNodeListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getNumListener_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_setInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_setInitialState_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_setInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_resetToInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_resetToInitialState_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_resetToInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getInitialPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getInitialOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getInitialScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_needUpdate_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_needUpdate_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_requestUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_cancelUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getDebugRenderable_CDebugRenderable_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_attachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_numAttachedObjects_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_getAttachedObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_detachObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_detachAllObjects_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_detachAllObjects_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_detachAllObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyChild_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void_Callback* pCallback )
			{
				COctreeNodeProxy* ptr = dynamic_cast<COctreeNodeProxy*>((EarthView::World::Graphic::COctreeNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeNode_removeAndDestroyAllChildren_void(pCallback);
				}
			}
		}
	}
}
