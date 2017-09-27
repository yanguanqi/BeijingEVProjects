/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scenenode.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback)(_in ev_bool inGraph);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback)(_in ev_bool bShow);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback)(_in ev_bool bShow, _in void* redPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback)(_in ev_bool bHide);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback)(_inout void* destList, _in Real radius, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback)(_inout void* destList, _in Real radius);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback)(_in ev_bool useFixed, _in const void* fixedAxis);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback)(_in ev_bool useFixed);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback)(_in const void* vec, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback)(_in const void* vec, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback)(_in const void* vec);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback)(_in const void* targetPoint, _in int relativeTo, _in const void* localDirectionVector);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback)(_in const void* targetPoint, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVecto);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback)(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVector, _in const void* offset);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback)(_in ev_bool visible, _in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback)(_in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback)(_in ev_bool enabled, _in ev_bool cascade);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback)(_in Real w, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback)(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback)(_in const void* scale, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback)(_in const void* d, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback)(_in const void* d);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback)(_in const void* axes, _in const void* move, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback)(_in const void* axes, _in const void* move);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback)(_in const void* axis, _in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback)(_in const void* axis, _in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback)(_in const void* q, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback)(_in ev_bool updateChildren, _in ev_bool parentHasChanged);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef EarthView::World::Graphic::CNode::CNodeListener*  ( _stdcall EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback)(_in const void* worldPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback)(_in const void* localPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback)(_in const void* worldOrientation);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback)(_in const void* localOrientation);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback)(_in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback)(_in Real scaling);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback)();
			class CSceneNodeProxy : public EarthView::World::Graphic::CSceneNode
			{
			private:
				EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback* m_EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback;
				EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback* m_EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback;
				EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback;
				EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback* m_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback;
				EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback;
				EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback* m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback;
				EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback;
				EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback* m_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback;
				EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback* m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback;
				EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback* m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback;
				EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback* m_EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback;
				EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback* m_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback;
				EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback* m_EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback;
				EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback* m_EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback;
				EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback* m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback;
				EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback* m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback;
				EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback* m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback;
				EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback* m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback;
				EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback* m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback;
				EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback* m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback;
				EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback* m_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback* m_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback;
				EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback* m_EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback;
				EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback* m_EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback;
				EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback* m_EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback;
				EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback* m_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback;
				EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback* m_EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback;
				EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback* m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback;
				EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback* m_EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback;
				EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback* m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback;
				EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback* m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback;
				EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback* m_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback;
			public:
				CSceneNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneNode(pList)
				{
					m_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool(EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool(EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__notifyRootNode_void(EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__updateBounds_void(EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox(EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator(EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool(EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr(EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool(EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue(EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool(EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString(EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32(EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real(EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3(EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool(EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real(EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3(EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace(EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3(EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3(EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace(EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool(EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode(EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode(EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3(EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3(EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool(EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool(EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool(EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool(EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool(EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool(EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool(EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool(EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void(EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable(EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__updateFromParent_void(EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setParent_void_CNode(EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void(EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode(EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString(EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_notifyMoved_void(EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getParent_CNode(EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion(EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion(EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real(EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool(EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_resetOrientation_void(EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3(EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real(EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getPosition_CVector3(EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3(EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool(EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real(EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getScale_CVector3(EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool(EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool(EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool(EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool(EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_scale_void_CVector3(EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real(EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace(EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3(EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real(EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace(EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3(EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real(EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace(EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian(EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace(EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian(EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace(EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian(EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace(EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian(EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace(EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion(EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4(EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4(EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4(EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4(EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3(EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion(EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3(EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode(EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3(EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString(EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_addChild_void_CNode(EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16(EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16(EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString(EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString(EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator(EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16(EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode(EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString(EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeAllChildren_void(EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3(EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion(EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion(EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3(EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3(EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4(EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool(EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener(EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener(EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32(EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32(EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_setInitialState_void(EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_resetToInitialState_void(EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3(EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3(EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3(EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion(EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3(EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool(EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void(EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool(EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode(EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode(EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real(EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject(EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16(EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString(EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject(EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString(EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_detachAllObjects_void(EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString(EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16(EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void(EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback = pCallback;
				}
				virtual void updateFromParentImpl() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback();
					}
					else
						return this->CSceneNode::updateFromParentImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl()
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::createChildImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildImpl(name);
				}
				virtual void setParent(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback(ref_parent);
					}
					else
						return this->CSceneNode::setParent(ref_parent);
				}
				virtual void setInSceneGraph(_in ev_bool inGraph)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback(inGraph);
					}
					else
						return this->CSceneNode::setInSceneGraph(inGraph);
				}
				virtual void notifyMoved() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback();
					}
					else
						return this->CSceneNode::notifyMoved();
				}
				virtual void attachObject(_in EarthView::World::Graphic::CMovableObject* ref_obj)
				{
					if(m_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback(ref_obj);
					}
					else
						return this->CSceneNode::attachObject(ref_obj);
				}
				virtual ev_uint16 numAttachedObjects() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::numAttachedObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::getAttachedObject(index);
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::getAttachedObject(name);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::detachObject(index);
				}
				virtual void detachObject(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback(obj);
					}
					else
						return this->CSceneNode::detachObject(obj);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::detachObject(name);
				}
				virtual void detachAllObjects()
				{
					if(m_EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback();
					}
					else
						return this->CSceneNode::detachAllObjects();
				}
				virtual ev_bool isInSceneGraph() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::isInSceneGraph();
				}
				virtual void _notifyRootNode()
				{
					if(m_EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback();
					}
					else
						return this->CSceneNode::_notifyRootNode();
				}
				virtual void _update(_in ev_bool updateChildren, _in ev_bool parentHasChanged)
				{
					if(m_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback(updateChildren, parentHasChanged);
					}
					else
						return this->CSceneNode::_update(updateChildren, parentHasChanged);
				}
				virtual void _updateBounds()
				{
					if(m_EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback();
					}
					else
						return this->CSceneNode::_updateBounds();
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters)
				{
					if(m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
					}
					else
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes)
				{
					if(m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback(cam, queue, visibleBounds, includeChildren, displayNodes);
					}
					else
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren)
				{
					if(m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback(cam, queue, visibleBounds, includeChildren);
					}
					else
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds)
				{
					if(m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback(cam, queue, visibleBounds);
					}
					else
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& _getWorldAABB() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::_getWorldAABB();
				}
				virtual EarthView::World::Graphic::CSceneNode::ObjectIterator getAttachedObjectIterator()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode::ObjectIterator returnValue = *(EarthView::World::Graphic::CSceneNode::ObjectIterator*)m_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getAttachedObjectIterator();
				}
				virtual void removeAndDestroyChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback(name_Char);
					}
					else
						return this->CSceneNode::removeAndDestroyChild(name);
				}
				virtual void removeAndDestroyChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback(index);
					}
					else
						return this->CSceneNode::removeAndDestroyChild(index);
				}
				virtual void removeAndDestroyAllChildren()
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback();
					}
					else
						return this->CSceneNode::removeAndDestroyAllChildren();
				}
				virtual void showBoundingBox(_in ev_bool bShow)
				{
					if(m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback(bShow);
					}
					else
						return this->CSceneNode::showBoundingBox(bShow);
				}
				virtual void showBoundingBox(_in ev_bool bShow, _in EarthView::World::Graphic::CMaterialPtr redPtr)
				{
					if(m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback(bShow, &redPtr);
					}
					else
						return this->CSceneNode::showBoundingBox(bShow, redPtr);
				}
				virtual void hideBoundingBox(_in ev_bool bHide)
				{
					if(m_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback(bHide);
					}
					else
						return this->CSceneNode::hideBoundingBox(bHide);
				}
				virtual void _addBoundingBoxToQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CSceneNode::_addBoundingBoxToQueue(queue);
				}
				virtual ev_bool getShowBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getShowBoundingBox();
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback(&translate, &rotate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode(translate, rotate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback(&translate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode(translate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode()
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback(name_Char, &translate, &rotate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode(name, translate, rotate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback(name_Char, &translate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode(name, translate);
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::createChildSceneNode(name);
				}
				virtual void findLights(_inout EarthView::World::Graphic::LightList& destList, _in Real radius, _in ev_uint32 lightMask) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback(&destList, radius, lightMask);
					}
					else
						return this->CSceneNode::findLights(destList, radius, lightMask);
				}
				virtual void findLights(_inout EarthView::World::Graphic::LightList& destList, _in Real radius) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback(&destList, radius);
					}
					else
						return this->CSceneNode::findLights(destList, radius);
				}
				virtual void setFixedYawAxis(_in ev_bool useFixed, _in const EarthView::World::Spatial::Math::CVector3& fixedAxis)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback(useFixed, &fixedAxis);
					}
					else
						return this->CSceneNode::setFixedYawAxis(useFixed, fixedAxis);
				}
				virtual void setFixedYawAxis(_in ev_bool useFixed)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback(useFixed);
					}
					else
						return this->CSceneNode::setFixedYawAxis(useFixed);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CSceneNode::yaw(angle, relativeTo);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback(&angle);
					}
					else
						return this->CSceneNode::yaw(angle);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback(x, y, z, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->CSceneNode::setDirection(x, y, z, relativeTo, localDirectionVector);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->CSceneNode::setDirection(x, y, z, relativeTo);
				}
				virtual void setDirection(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CSceneNode::setDirection(x, y, z);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback(&vec, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->CSceneNode::setDirection(vec, relativeTo, localDirectionVector);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback(&vec, (int)relativeTo);
					}
					else
						return this->CSceneNode::setDirection(vec, relativeTo);
				}
				virtual void setDirection(_in const EarthView::World::Spatial::Math::CVector3& vec)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback(&vec);
					}
					else
						return this->CSceneNode::setDirection(vec);
				}
				virtual void lookAt(_in const EarthView::World::Spatial::Math::CVector3& targetPoint, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if(m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback(&targetPoint, (int)relativeTo, &localDirectionVector);
					}
					else
						return this->CSceneNode::lookAt(targetPoint, relativeTo, localDirectionVector);
				}
				virtual void lookAt(_in const EarthView::World::Spatial::Math::CVector3& targetPoint, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback(&targetPoint, (int)relativeTo);
					}
					else
						return this->CSceneNode::lookAt(targetPoint, relativeTo);
				}
				virtual void setAutoTracking(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback(enabled);
					}
					else
						return this->CSceneNode::setAutoTracking(enabled);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback(enabled, ref_target);
					}
					else
						return this->CSceneNode::setAutoTracking(enabled, ref_target);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVecto)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback(enabled, ref_target, &localDirectionVecto);
					}
					else
						return this->CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVecto);
				}
				virtual void setAutoTracking(_in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const EarthView::World::Spatial::Math::CVector3& localDirectionVector, _in const EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback(enabled, ref_target, &localDirectionVector, &offset);
					}
					else
						return this->CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVector, offset);
				}
				virtual EarthView::World::Graphic::CSceneNode* getAutoTrackTarget()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getAutoTrackTarget();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackOffset()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getAutoTrackOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackLocalDirection()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getAutoTrackLocalDirection();
				}
				virtual void setVisible(_in ev_bool visible, _in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback(visible, cascade);
					}
					else
						return this->CSceneNode::setVisible(visible, cascade);
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CSceneNode::setVisible(visible);
				}
				virtual ev_bool getVisible()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getVisible();
				}
				virtual ev_bool hasAnyVisibleObject() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::hasAnyVisibleObject();
				}
				virtual ev_bool hasAnyVisibleObject2() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::hasAnyVisibleObject2();
				}
				virtual ev_bool hasAnyVisibleShadowCaster() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::hasAnyVisibleShadowCaster();
				}
				virtual ev_bool hasAnyVisibleShadowCaster2() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::hasAnyVisibleShadowCaster2();
				}
				virtual void flipVisibility(_in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback(cascade);
					}
					else
						return this->CSceneNode::flipVisibility(cascade);
				}
				virtual void flipVisibility()
				{
					if(m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback();
					}
					else
						return this->CSceneNode::flipVisibility();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled, _in ev_bool cascade)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback(enabled, cascade);
					}
					else
						return this->CSceneNode::setDebugDisplayEnabled(enabled, cascade);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CSceneNode::setDebugDisplayEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CDebugRenderable* returnValue = m_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getDebugRenderable();
				}
				virtual void _updateFromParent() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback();
					}
					else
						return this->CSceneNode::_updateFromParent();
				}
				virtual EarthView::World::Graphic::CNode* getParent() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getParent();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientation() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getOrientation();
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CSceneNode::setOrientation(q);
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->CSceneNode::setOrientation(q, notify);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback(w, x, y, z);
					}
					else
						return this->CSceneNode::setOrientation(w, x, y, z);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback(w, x, y, z, notify);
					}
					else
						return this->CSceneNode::setOrientation(w, x, y, z, notify);
				}
				virtual void resetOrientation()
				{
					if(m_EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback();
					}
					else
						return this->CSceneNode::resetOrientation();
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CSceneNode::setPosition(pos);
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->CSceneNode::setPosition(pos, notify);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CSceneNode::setPosition(x, y, z);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->CSceneNode::setPosition(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getPosition();
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback(&scale);
					}
					else
						return this->CSceneNode::setScale(scale);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback(&scale, notify);
					}
					else
						return this->CSceneNode::setScale(scale, notify);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CSceneNode::setScale(x, y, z);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->CSceneNode::setScale(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getScale();
				}
				virtual void setInheritOrientation(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback(inherit);
					}
					else
						return this->CSceneNode::setInheritOrientation(inherit);
				}
				virtual ev_bool getInheritOrientation() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getInheritOrientation();
				}
				virtual void setInheritScale(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback(inherit);
					}
					else
						return this->CSceneNode::setInheritScale(inherit);
				}
				virtual ev_bool getInheritScale() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getInheritScale();
				}
				virtual void scale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback(&scale);
					}
					else
						return this->CSceneNode::scale(scale);
				}
				virtual void scale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CSceneNode::scale(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback(&d, (int)relativeTo);
					}
					else
						return this->CSceneNode::translate(d, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback(&d);
					}
					else
						return this->CSceneNode::translate(d);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->CSceneNode::translate(x, y, z, relativeTo);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CSceneNode::translate(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback(&axes, &move, (int)relativeTo);
					}
					else
						return this->CSceneNode::translate(axes, move, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback(&axes, &move);
					}
					else
						return this->CSceneNode::translate(axes, move);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback(&axes, x, y, z, (int)relativeTo);
					}
					else
						return this->CSceneNode::translate(axes, x, y, z, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback(&axes, x, y, z);
					}
					else
						return this->CSceneNode::translate(axes, x, y, z);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CSceneNode::roll(angle, relativeTo);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback(&angle);
					}
					else
						return this->CSceneNode::roll(angle);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CSceneNode::pitch(angle, relativeTo);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback(&angle);
					}
					else
						return this->CSceneNode::pitch(angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback(&axis, &angle, (int)relativeTo);
					}
					else
						return this->CSceneNode::rotate(axis, angle, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback(&axis, &angle);
					}
					else
						return this->CSceneNode::rotate(axis, angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback(&q, (int)relativeTo);
					}
					else
						return this->CSceneNode::rotate(q, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback(&q);
					}
					else
						return this->CSceneNode::rotate(q);
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CSceneNode::setMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getMatrix();
				}
				virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CSceneNode::setLocalMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getLocalMatrix();
				}
				virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix3 returnValue = *(EarthView::World::Spatial::Math::CMatrix3*)m_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getLocalAxes();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback(&translate, &rotate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChild(translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback(&translate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChild(translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild()
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::createChild();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback(name_Char, &translate, &rotate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChild(name, translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback(name_Char, &translate);
						return returnValue;
					}
					else
						return this->CSceneNode::createChild(name, translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::createChild(name);
				}
				virtual void addChild(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback(ref_child);
					}
					else
						return this->CSceneNode::addChild(ref_child);
				}
				virtual ev_uint16 numChildren() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::numChildren();
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::getChild(index);
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::getChild(name);
				}
				virtual ev_bool existChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::existChild(name);
				}
				virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator()
				{
					if(m_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::ChildNodeIterator returnValue = *(EarthView::World::Graphic::CNode::ChildNodeIterator*)m_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getChildIterator();
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::removeChild(index);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback(child);
						return returnValue;
					}
					else
						return this->CSceneNode::removeChild(child);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSceneNode::removeChild(name);
				}
				virtual void removeAllChildren()
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback();
					}
					else
						return this->CSceneNode::removeAllChildren();
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CSceneNode::_setDerivedPosition(pos);
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->CSceneNode::_setDerivedPosition(pos, notify);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CSceneNode::_setDerivedOrientation(q);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->CSceneNode::_setDerivedOrientation(q, notify);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& _getDerivedOrientation() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::_getDerivedOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedPosition() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::_getDerivedPosition();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedScale() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::_getDerivedScale();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getFullTransform() const
				{
					if(m_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::_getFullTransform();
				}
				virtual void addListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CSceneNode::addListener(listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CSceneNode::removeListener(listener);
				}
				virtual EarthView::World::Graphic::CNode::CNodeListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CNodeListener* returnValue = m_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::getListener(index);
				}
				virtual ev_uint32 getNumListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CSceneNode::getNumListener(index);
				}
				virtual void setInitialState()
				{
					if(m_EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback();
					}
					else
						return this->CSceneNode::setInitialState();
				}
				virtual void resetToInitialState()
				{
					if(m_EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback();
					}
					else
						return this->CSceneNode::resetToInitialState();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialPosition() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getInitialPosition();
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition(_in const EarthView::World::Spatial::Math::CVector3& worldPos)
				{
					if(m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback(&worldPos);
						return returnValue;
					}
					else
						return this->CSceneNode::convertWorldToLocalPosition(worldPos);
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition(_in const EarthView::World::Spatial::Math::CVector3& localPos)
				{
					if(m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback(&localPos);
						return returnValue;
					}
					else
						return this->CSceneNode::convertLocalToWorldPosition(localPos);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& worldOrientation)
				{
					if(m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback(&worldOrientation);
						return returnValue;
					}
					else
						return this->CSceneNode::convertWorldToLocalOrientation(worldOrientation);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if(m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback(&localOrientation);
						return returnValue;
					}
					else
						return this->CSceneNode::convertLocalToWorldOrientation(localOrientation);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getInitialOrientation() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getInitialOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialScale() const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CSceneNode::getInitialScale();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CSceneNode::getSquaredViewDepth(cam);
				}
				virtual void needUpdate(_in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback(forceParentUpdate);
					}
					else
						return this->CSceneNode::needUpdate(forceParentUpdate);
				}
				virtual void needUpdate()
				{
					if(m_EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback();
					}
					else
						return this->CSceneNode::needUpdate();
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback(ref_child, forceParentUpdate);
					}
					else
						return this->CSceneNode::requestUpdate(ref_child, forceParentUpdate);
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback(ref_child);
					}
					else
						return this->CSceneNode::requestUpdate(ref_child);
				}
				virtual void cancelUpdate(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback(child);
					}
					else
						return this->CSceneNode::cancelUpdate(child);
				}
			};
			REGISTER_FACTORY_CLASS(CSceneNodeProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_push_ev_bool_EVString_CMovableObject(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CMovableObject*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_OperatorIndex_CMovableObject_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CSceneNode::ObjectMap& objYYYY = *(EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_get_CMovableObject_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_ObjectMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ObjectMap* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CSceneNode_ObjectIteratorPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneNode_ObjectIteratorPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_CSceneNode_ObjectIteratorPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneNode_ObjectIteratorPair_second( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_nextValue_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject**  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_nextValuePtr_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_next_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_getBegin_ObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_getEnd_ObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ObjectIterator_getCurrent_ObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CSceneNode_ConstObjectIteratorPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneNode_ConstObjectIteratorPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall Get_EarthView_World_Graphic_CSceneNode_ConstObjectIteratorPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneNode_ConstObjectIteratorPair_second( void *pObjectXXXX, EarthView::World::Graphic::CMovableObject*  value )
			{
				((EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_nextValue_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject**  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_nextValuePtr_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_next_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_getBegin_ConstObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_getEnd_ConstObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_ConstObjectIterator_getCurrent_ConstObjectIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::updateFromParentImpl();
				else
					ptrNativeObject->updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_updateFromParentImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildImpl();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChildImpl();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildImpl();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildImpl(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChildImpl(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildImpl_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildImpl(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setParent_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setParent(ref_parent);
				else
					ptrNativeObject->setParent(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setParent_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setParent_void_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setParent_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setParent_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setParent(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool(void *pObjectXXXX, _in ev_bool inGraph )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setInSceneGraph(inGraph);
				else
					ptrNativeObject->setInSceneGraph(inGraph);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setInSceneGraph_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool inGraph )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setInSceneGraph(inGraph);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_notifyMoved_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::notifyMoved();
				else
					ptrNativeObject->notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_notifyMoved_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_notifyMoved_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_obj )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::attachObject(ref_obj);
				else
					ptrNativeObject->attachObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_attachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_obj )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::attachObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::numAttachedObjects();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->numAttachedObjects();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSceneNode_numAttachedObjects_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::numAttachedObjects();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(obj);
				else
					ptrNativeObject->detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSceneNode_detachObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_detachAllObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachAllObjects();
				else
					ptrNativeObject->detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_detachAllObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_detachAllObjects_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_detachAllObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_detachAllObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::isInSceneGraph();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isInSceneGraph();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_isInSceneGraph_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::isInSceneGraph();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__notifyRootNode_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_notifyRootNode();
				else
					ptrNativeObject->_notifyRootNode();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__notifyRootNode_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__notifyRootNode_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__notifyRootNode_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__notifyRootNode_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_notifyRootNode();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool updateChildren, _in ev_bool parentHasChanged )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_update(updateChildren, parentHasChanged);
				else
					ptrNativeObject->_update(updateChildren, parentHasChanged);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__update_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool updateChildren, _in ev_bool parentHasChanged )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_update(updateChildren, parentHasChanged);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__updateBounds_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_updateBounds();
				else
					ptrNativeObject->_updateBounds();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__updateBounds_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__updateBounds_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__updateBounds_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__updateBounds_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_updateBounds();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
				else
					ptrNativeObject->_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes, _in ev_bool onlyShadowCasters )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
				else
					ptrNativeObject->_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren, _in ev_bool displayNodes )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
				else
					ptrNativeObject->_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool includeChildren )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
				else
					ptrNativeObject->_findVisibleObjects(cam, queue, visibleBounds);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__findVisibleObjects_void_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::_getWorldAABB();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->_getWorldAABB();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode__getWorldAABB_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::_getWorldAABB();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode::ObjectIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObjectIterator();
					EarthView::World::Graphic::CSceneNode::ObjectIterator *pXXXX = new EarthView::World::Graphic::CSceneNode::ObjectIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode::ObjectIterator objXXXX = ptrNativeObject->getAttachedObjectIterator();
					EarthView::World::Graphic::CSceneNode::ObjectIterator *pXXXX = new EarthView::World::Graphic::CSceneNode::ObjectIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSceneNode_getAttachedObjectIterator_ObjectIterator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode::ObjectIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAttachedObjectIterator();
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pXXXX = new EarthView::World::Graphic::CSceneNode::ObjectIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneNode_getCreator_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getCreator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(name1);
				else
					ptrNativeObject->removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(index);
				else
					ptrNativeObject->removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyChild_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyAllChildren();
				else
					ptrNativeObject->removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_removeAndDestroyAllChildren_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool(void *pObjectXXXX, _in ev_bool bShow )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow);
				else
					ptrNativeObject->showBoundingBox(bShow);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bShow )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr(void *pObjectXXXX, _in ev_bool bShow, _in void* redPtr )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow, *(EarthView::World::Graphic::CMaterialPtr*)redPtr);
				else
					ptrNativeObject->showBoundingBox(bShow, *(EarthView::World::Graphic::CMaterialPtr*)redPtr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_showBoundingBox_void_ev_bool_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in ev_bool bShow, _in void* redPtr )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow, *(EarthView::World::Graphic::CMaterialPtr*)redPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool(void *pObjectXXXX, _in ev_bool bHide )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::hideBoundingBox(bHide);
				else
					ptrNativeObject->hideBoundingBox(bHide);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_hideBoundingBox_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bHide )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::hideBoundingBox(bHide);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::_addBoundingBoxToQueue(queue);
				else
					ptrNativeObject->_addBoundingBoxToQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__addBoundingBoxToQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::_addBoundingBoxToQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getShowBoundingBox();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getShowBoundingBox();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_getShowBoundingBox_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getShowBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(void *pObjectXXXX, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3(void *pObjectXXXX, _in const void* translate )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_CVector3_NoVirtual(void *pObjectXXXX, _in const void* translate )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(*(EarthView::World::Spatial::Math::CVector3*)translate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(void *pObjectXXXX, _in const char* name, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in const char* name, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* translate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_CVector3_NoVirtual(void *pObjectXXXX, _in const char* name, _in const void* translate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createChildSceneNode(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_createChildSceneNode_CSceneNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32(void *pObjectXXXX, _inout void* destList, _in Real radius, _in ev_uint32 lightMask )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::findLights(*(EarthView::World::Graphic::LightList*)destList, radius, lightMask);
				else
					ptrNativeObject->findLights(*(EarthView::World::Graphic::LightList*)destList, radius, lightMask);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_ev_uint32_NoVirtual(void *pObjectXXXX, _inout void* destList, _in Real radius, _in ev_uint32 lightMask )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::findLights(*(EarthView::World::Graphic::LightList*)destList, radius, lightMask);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real(void *pObjectXXXX, _inout void* destList, _in Real radius )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::findLights(*(EarthView::World::Graphic::LightList*)destList, radius);
				else
					ptrNativeObject->findLights(*(EarthView::World::Graphic::LightList*)destList, radius);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_findLights_void_LightList_Real_NoVirtual(void *pObjectXXXX, _inout void* destList, _in Real radius )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::findLights(*(EarthView::World::Graphic::LightList*)destList, radius);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3(void *pObjectXXXX, _in ev_bool useFixed, _in const void* fixedAxis )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed, *(EarthView::World::Spatial::Math::CVector3*)fixedAxis);
				else
					ptrNativeObject->setFixedYawAxis(useFixed, *(EarthView::World::Spatial::Math::CVector3*)fixedAxis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_CVector3_NoVirtual(void *pObjectXXXX, _in ev_bool useFixed, _in const void* fixedAxis )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed, *(EarthView::World::Spatial::Math::CVector3*)fixedAxis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool(void *pObjectXXXX, _in ev_bool useFixed )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed);
				else
					ptrNativeObject->setFixedYawAxis(useFixed);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setFixedYawAxis_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool useFixed )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
				else
					ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_yaw_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_yaw_void_CRadian_NoVirtual(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
				else
					ptrNativeObject->setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_CVector3_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_TransformSpace_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z);
				else
					ptrNativeObject->setDirection(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3(void *pObjectXXXX, _in const void* vec, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
				else
					ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_CVector3_NoVirtual(void *pObjectXXXX, _in const void* vec, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace(void *pObjectXXXX, _in const void* vec, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* vec, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec);
				else
					ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDirection_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3(void *pObjectXXXX, _in const void* targetPoint, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
				else
					ptrNativeObject->lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_CVector3_NoVirtual(void *pObjectXXXX, _in const void* targetPoint, _in int relativeTo, _in const void* localDirectionVector )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace(void *pObjectXXXX, _in const void* targetPoint, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_lookAt_void_CVector3_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* targetPoint, _in int relativeTo )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled);
				else
					ptrNativeObject->setAutoTracking(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target);
				else
					ptrNativeObject->setAutoTracking(enabled, ref_target);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVecto )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVecto);
				else
					ptrNativeObject->setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVecto);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVecto )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVecto);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVector, _in const void* offset )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector, *(EarthView::World::Spatial::Math::CVector3*)offset);
				else
					ptrNativeObject->setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector, *(EarthView::World::Spatial::Math::CVector3*)offset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setAutoTracking_void_ev_bool_CSceneNode_CVector3_CVector3_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* localDirectionVector, _in const void* offset )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)localDirectionVector, *(EarthView::World::Spatial::Math::CVector3*)offset);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackTarget();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getAutoTrackTarget();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackTarget_CSceneNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackOffset();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getAutoTrackOffset();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackOffset_CVector3_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackOffset();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackLocalDirection();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getAutoTrackLocalDirection();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneNode_getAutoTrackLocalDirection_CVector3_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getAutoTrackLocalDirection();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode__autoTrack_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->_autoTrack();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CSceneNode_getParentSceneNode_CSceneNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getParentSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool visible, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setVisible(visible, cascade);
				else
					ptrNativeObject->setVisible(visible, cascade);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setVisible(visible, cascade);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_getVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnyVisibleObject();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject2();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnyVisibleObject2();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleObject2_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject2();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnyVisibleShadowCaster();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster2();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnyVisibleShadowCaster2();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_hasAnyVisibleShadowCaster2_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster2();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool(void *pObjectXXXX, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::flipVisibility(cascade);
				else
					ptrNativeObject->flipVisibility(cascade);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::flipVisibility(cascade);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::flipVisibility();
				else
					ptrNativeObject->flipVisibility();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_flipVisibility_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_flipVisibility_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_flipVisibility_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::flipVisibility();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enabled, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled, cascade);
				else
					ptrNativeObject->setDebugDisplayEnabled(enabled, cascade);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in ev_bool cascade )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled, cascade);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled);
				else
					ptrNativeObject->setDebugDisplayEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setDebugDisplayEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CDebugRenderable*  _stdcall EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				if (dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getDebugRenderable();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->getDebugRenderable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CDebugRenderable*  _stdcall EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSceneNode::getDebugRenderable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneNode_getIsOceanNode_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsOceanNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneNode_setIsOceanNode_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
			{
				EarthView::World::Graphic::CSceneNode* ptrNativeObject = (EarthView::World::Graphic::CSceneNode*) pObjectXXXX;
				ptrNativeObject->setIsOceanNode(flag);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__updateFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__updateFromParent_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__updateFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getParent_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getParent_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getParent_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setOrientation_void_Real_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_resetOrientation_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_resetOrientation_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_resetOrientation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setPosition_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getPosition_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setScale_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getScale_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setInheritOrientation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getInheritOrientation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setInheritScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getInheritScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_scale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_scale_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_scale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_scale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_translate_void_CMatrix3_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_roll_void_CRadian_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_roll_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_pitch_void_CRadian_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_pitch_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CVector3_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_rotate_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setLocalMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getLocalMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getLocalAxes_CMatrix3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_createChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_addChild_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_addChild_void_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_addChild_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_numChildren_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_existChild_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getChildIterator_ChildNodeIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeAllChildren_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__setDerivedOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__getDerivedScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode__getFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_addListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_removeListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getListener_CNodeListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getNumListener_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_setInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_setInitialState_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_setInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_resetToInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_resetToInitialState_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_resetToInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getInitialPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getInitialOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getInitialScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_needUpdate_void_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_needUpdate_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_requestUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_cancelUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real( void *pObjectXXXX, EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback )
			{
				CSceneNodeProxy* ptr = dynamic_cast<CSceneNodeProxy*>((EarthView::World::Graphic::CSceneNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSceneNode_getDebugRenderable_CDebugRenderable_Real(pCallback);
				}
			}
		}
	}
}
