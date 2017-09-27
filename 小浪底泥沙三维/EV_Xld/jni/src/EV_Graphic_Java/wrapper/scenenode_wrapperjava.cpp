/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scenenode.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCSceneNodeProxy : public EarthView::World::Graphic::CSceneNode
			{
			 private:
				EarthView::World::Core::ev_string m_setInSceneGraph_ev_bool_callback;
				EarthView::World::Core::ev_string m_isInSceneGraph_void_callback;
				EarthView::World::Core::ev_string m__notifyRootNode_void_callback;
				EarthView::World::Core::ev_string m__updateBounds_void_callback;
				EarthView::World::Core::ev_string m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback;
				EarthView::World::Core::ev_string m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback;
				EarthView::World::Core::ev_string m__getWorldAABB_void_callback;
				EarthView::World::Core::ev_string m_getAttachedObjectIterator_void_callback;
				EarthView::World::Core::ev_string m_showBoundingBox_ev_bool_callback;
				EarthView::World::Core::ev_string m_showBoundingBox_ev_bool_CMaterialPtr_callback;
				EarthView::World::Core::ev_string m_hideBoundingBox_ev_bool_callback;
				EarthView::World::Core::ev_string m__addBoundingBoxToQueue_CRenderQueue_callback;
				EarthView::World::Core::ev_string m_getShowBoundingBox_void_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_CVector3_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_void_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_EVString_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_EVString_CVector3_callback;
				EarthView::World::Core::ev_string m_createChildSceneNode_EVString_callback;
				EarthView::World::Core::ev_string m_findLights_LightList_Real_ev_uint32_callback;
				EarthView::World::Core::ev_string m_findLights_LightList_Real_callback;
				EarthView::World::Core::ev_string m_setFixedYawAxis_ev_bool_CVector3_callback;
				EarthView::World::Core::ev_string m_setFixedYawAxis_ev_bool_callback;
				EarthView::World::Core::ev_string m_setDirection_Real_Real_Real_TransformSpace_CVector3_callback;
				EarthView::World::Core::ev_string m_setDirection_Real_Real_Real_TransformSpace_callback;
				EarthView::World::Core::ev_string m_setDirection_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_setDirection_CVector3_TransformSpace_CVector3_callback;
				EarthView::World::Core::ev_string m_setDirection_CVector3_TransformSpace_callback;
				EarthView::World::Core::ev_string m_setDirection_CVector3_callback;
				EarthView::World::Core::ev_string m_lookAt_CVector3_TransformSpace_CVector3_callback;
				EarthView::World::Core::ev_string m_lookAt_CVector3_TransformSpace_callback;
				EarthView::World::Core::ev_string m_setAutoTracking_ev_bool_callback;
				EarthView::World::Core::ev_string m_setAutoTracking_ev_bool_CSceneNode_callback;
				EarthView::World::Core::ev_string m_setAutoTracking_ev_bool_CSceneNode_CVector3_callback;
				EarthView::World::Core::ev_string m_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback;
				EarthView::World::Core::ev_string m_getAutoTrackTarget_void_callback;
				EarthView::World::Core::ev_string m_getAutoTrackOffset_void_callback;
				EarthView::World::Core::ev_string m_getAutoTrackLocalDirection_void_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
				EarthView::World::Core::ev_string m_getVisible_void_callback;
				EarthView::World::Core::ev_string m_hasAnyVisibleObject_void_callback;
				EarthView::World::Core::ev_string m_hasAnyVisibleObject2_void_callback;
				EarthView::World::Core::ev_string m_hasAnyVisibleShadowCaster_void_callback;
				EarthView::World::Core::ev_string m_hasAnyVisibleShadowCaster2_void_callback;
				EarthView::World::Core::ev_string m_flipVisibility_ev_bool_callback;
				EarthView::World::Core::ev_string m_flipVisibility_void_callback;
				EarthView::World::Core::ev_string m_setDebugDisplayEnabled_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setDebugDisplayEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getDebugRenderable_void_callback;
				EarthView::World::Core::ev_string m__updateFromParent_void_callback;
				EarthView::World::Core::ev_string m_setParent_CNode_callback;
				EarthView::World::Core::ev_string m_updateFromParentImpl_void_callback;
				EarthView::World::Core::ev_string m_createChildImpl_void_callback;
				EarthView::World::Core::ev_string m_createChildImpl_EVString_callback;
				EarthView::World::Core::ev_string m_notifyMoved_void_callback;
				EarthView::World::Core::ev_string m_getParent_void_callback;
				EarthView::World::Core::ev_string m_getOrientation_void_callback;
				EarthView::World::Core::ev_string m_setOrientation_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setOrientation_CQuaternion_ev_bool_callback;
				EarthView::World::Core::ev_string m_setOrientation_Real_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_setOrientation_Real_Real_Real_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_resetOrientation_void_callback;
				EarthView::World::Core::ev_string m_setPosition_CVector3_callback;
				EarthView::World::Core::ev_string m_setPosition_CVector3_ev_bool_callback;
				EarthView::World::Core::ev_string m_setPosition_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_setPosition_Real_Real_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_getPosition_void_callback;
				EarthView::World::Core::ev_string m_setScale_CVector3_callback;
				EarthView::World::Core::ev_string m_setScale_CVector3_ev_bool_callback;
				EarthView::World::Core::ev_string m_setScale_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_setScale_Real_Real_Real_ev_bool_callback;
				EarthView::World::Core::ev_string m_getScale_void_callback;
				EarthView::World::Core::ev_string m_setInheritOrientation_ev_bool_callback;
				EarthView::World::Core::ev_string m_getInheritOrientation_void_callback;
				EarthView::World::Core::ev_string m_setInheritScale_ev_bool_callback;
				EarthView::World::Core::ev_string m_getInheritScale_void_callback;
				EarthView::World::Core::ev_string m_scale_CVector3_callback;
				EarthView::World::Core::ev_string m_scale_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_translate_CVector3_TransformSpace_callback;
				EarthView::World::Core::ev_string m_translate_CVector3_callback;
				EarthView::World::Core::ev_string m_translate_Real_Real_Real_TransformSpace_callback;
				EarthView::World::Core::ev_string m_translate_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_translate_CMatrix3_CVector3_TransformSpace_callback;
				EarthView::World::Core::ev_string m_translate_CMatrix3_CVector3_callback;
				EarthView::World::Core::ev_string m_translate_CMatrix3_Real_Real_Real_TransformSpace_callback;
				EarthView::World::Core::ev_string m_translate_CMatrix3_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_roll_CRadian_TransformSpace_callback;
				EarthView::World::Core::ev_string m_roll_CRadian_callback;
				EarthView::World::Core::ev_string m_pitch_CRadian_TransformSpace_callback;
				EarthView::World::Core::ev_string m_pitch_CRadian_callback;
				EarthView::World::Core::ev_string m_yaw_CRadian_TransformSpace_callback;
				EarthView::World::Core::ev_string m_yaw_CRadian_callback;
				EarthView::World::Core::ev_string m_rotate_CVector3_CRadian_TransformSpace_callback;
				EarthView::World::Core::ev_string m_rotate_CVector3_CRadian_callback;
				EarthView::World::Core::ev_string m_rotate_CQuaternion_TransformSpace_callback;
				EarthView::World::Core::ev_string m_rotate_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getMatrix_void_callback;
				EarthView::World::Core::ev_string m_setLocalMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getLocalMatrix_void_callback;
				EarthView::World::Core::ev_string m_getLocalAxes_void_callback;
				EarthView::World::Core::ev_string m_createChild_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_createChild_CVector3_callback;
				EarthView::World::Core::ev_string m_createChild_void_callback;
				EarthView::World::Core::ev_string m_createChild_EVString_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_createChild_EVString_CVector3_callback;
				EarthView::World::Core::ev_string m_createChild_EVString_callback;
				EarthView::World::Core::ev_string m_addChild_CNode_callback;
				EarthView::World::Core::ev_string m_numChildren_void_callback;
				EarthView::World::Core::ev_string m_getChild_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getChild_EVString_callback;
				EarthView::World::Core::ev_string m_existChild_EVString_callback;
				EarthView::World::Core::ev_string m_getChildIterator_void_callback;
				EarthView::World::Core::ev_string m_removeChild_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeChild_CNode_callback;
				EarthView::World::Core::ev_string m_removeChild_EVString_callback;
				EarthView::World::Core::ev_string m_removeAllChildren_void_callback;
				EarthView::World::Core::ev_string m__setDerivedPosition_CVector3_callback;
				EarthView::World::Core::ev_string m__setDerivedPosition_CVector3_ev_bool_callback;
				EarthView::World::Core::ev_string m__setDerivedOrientation_CQuaternion_callback;
				EarthView::World::Core::ev_string m__setDerivedOrientation_CQuaternion_ev_bool_callback;
				EarthView::World::Core::ev_string m__getDerivedOrientation_void_callback;
				EarthView::World::Core::ev_string m__getDerivedPosition_void_callback;
				EarthView::World::Core::ev_string m__getDerivedScale_void_callback;
				EarthView::World::Core::ev_string m__getFullTransform_void_callback;
				EarthView::World::Core::ev_string m__update_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_addListener_CNodeListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CNodeListener_callback;
				EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getNumListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_setInitialState_void_callback;
				EarthView::World::Core::ev_string m_resetToInitialState_void_callback;
				EarthView::World::Core::ev_string m_getInitialPosition_void_callback;
				EarthView::World::Core::ev_string m_convertWorldToLocalPosition_CVector3_callback;
				EarthView::World::Core::ev_string m_convertLocalToWorldPosition_CVector3_callback;
				EarthView::World::Core::ev_string m_convertWorldToLocalOrientation_CQuaternion_callback;
				EarthView::World::Core::ev_string m_convertLocalToWorldOrientation_CQuaternion_callback;
				EarthView::World::Core::ev_string m_getInitialOrientation_void_callback;
				EarthView::World::Core::ev_string m_getInitialScale_void_callback;
				EarthView::World::Core::ev_string m_getSquaredViewDepth_CCamera_callback;
				EarthView::World::Core::ev_string m_needUpdate_ev_bool_callback;
				EarthView::World::Core::ev_string m_needUpdate_void_callback;
				EarthView::World::Core::ev_string m_requestUpdate_CNode_ev_bool_callback;
				EarthView::World::Core::ev_string m_requestUpdate_CNode_callback;
				EarthView::World::Core::ev_string m_cancelUpdate_CNode_callback;
				EarthView::World::Core::ev_string m_getDebugRenderable_Real_callback;
				EarthView::World::Core::ev_string m_attachObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_numAttachedObjects_void_callback;
				EarthView::World::Core::ev_string m_getAttachedObject_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getAttachedObject_EVString_callback;
				EarthView::World::Core::ev_string m_detachObject_ev_uint16_callback;
				EarthView::World::Core::ev_string m_detachObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_detachObject_EVString_callback;
				EarthView::World::Core::ev_string m_detachAllObjects_void_callback;
				EarthView::World::Core::ev_string m_removeAndDestroyChild_EVString_callback;
				EarthView::World::Core::ev_string m_removeAndDestroyChild_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAndDestroyAllChildren_void_callback;
			public:
				JCSceneNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_setInSceneGraph_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInSceneGraph_ev_bool_callback = __method;
				}
				void register_isInSceneGraph_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isInSceneGraph_void_callback = __method;
				}
				void register__notifyRootNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyRootNode_void_callback = __method;
				}
				void register__updateBounds_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateBounds_void_callback = __method;
				}
				void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback = __method;
				}
				void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback = __method;
				}
				void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback = __method;
				}
				void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback = __method;
				}
				void register__getWorldAABB_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getWorldAABB_void_callback = __method;
				}
				void register_getAttachedObjectIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAttachedObjectIterator_void_callback = __method;
				}
				void register_showBoundingBox_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_showBoundingBox_ev_bool_callback = __method;
				}
				void register_showBoundingBox_ev_bool_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_showBoundingBox_ev_bool_CMaterialPtr_callback = __method;
				}
				void register_hideBoundingBox_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hideBoundingBox_ev_bool_callback = __method;
				}
				void register__addBoundingBoxToQueue_CRenderQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__addBoundingBoxToQueue_CRenderQueue_callback = __method;
				}
				void register_getShowBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShowBoundingBox_void_callback = __method;
				}
				void register_createChildSceneNode_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_CVector3_CQuaternion_callback = __method;
				}
				void register_createChildSceneNode_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_CVector3_callback = __method;
				}
				void register_createChildSceneNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_void_callback = __method;
				}
				void register_createChildSceneNode_EVString_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_EVString_CVector3_CQuaternion_callback = __method;
				}
				void register_createChildSceneNode_EVString_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_EVString_CVector3_callback = __method;
				}
				void register_createChildSceneNode_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildSceneNode_EVString_callback = __method;
				}
				void register_findLights_LightList_Real_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findLights_LightList_Real_ev_uint32_callback = __method;
				}
				void register_findLights_LightList_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findLights_LightList_Real_callback = __method;
				}
				void register_setFixedYawAxis_ev_bool_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setFixedYawAxis_ev_bool_CVector3_callback = __method;
				}
				void register_setFixedYawAxis_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setFixedYawAxis_ev_bool_callback = __method;
				}
				void register_setDirection_Real_Real_Real_TransformSpace_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_Real_Real_Real_TransformSpace_CVector3_callback = __method;
				}
				void register_setDirection_Real_Real_Real_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_Real_Real_Real_TransformSpace_callback = __method;
				}
				void register_setDirection_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_Real_Real_Real_callback = __method;
				}
				void register_setDirection_CVector3_TransformSpace_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_CVector3_TransformSpace_CVector3_callback = __method;
				}
				void register_setDirection_CVector3_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_CVector3_TransformSpace_callback = __method;
				}
				void register_setDirection_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_CVector3_callback = __method;
				}
				void register_lookAt_CVector3_TransformSpace_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lookAt_CVector3_TransformSpace_CVector3_callback = __method;
				}
				void register_lookAt_CVector3_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lookAt_CVector3_TransformSpace_callback = __method;
				}
				void register_setAutoTracking_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAutoTracking_ev_bool_callback = __method;
				}
				void register_setAutoTracking_ev_bool_CSceneNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAutoTracking_ev_bool_CSceneNode_callback = __method;
				}
				void register_setAutoTracking_ev_bool_CSceneNode_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAutoTracking_ev_bool_CSceneNode_CVector3_callback = __method;
				}
				void register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback = __method;
				}
				void register_getAutoTrackTarget_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAutoTrackTarget_void_callback = __method;
				}
				void register_getAutoTrackOffset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAutoTrackOffset_void_callback = __method;
				}
				void register_getAutoTrackLocalDirection_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAutoTrackLocalDirection_void_callback = __method;
				}
				void register_setVisible_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_ev_bool_callback = __method;
				}
				void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_callback = __method;
				}
				void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVisible_void_callback = __method;
				}
				void register_hasAnyVisibleObject_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnyVisibleObject_void_callback = __method;
				}
				void register_hasAnyVisibleObject2_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnyVisibleObject2_void_callback = __method;
				}
				void register_hasAnyVisibleShadowCaster_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnyVisibleShadowCaster_void_callback = __method;
				}
				void register_hasAnyVisibleShadowCaster2_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnyVisibleShadowCaster2_void_callback = __method;
				}
				void register_flipVisibility_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipVisibility_ev_bool_callback = __method;
				}
				void register_flipVisibility_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipVisibility_void_callback = __method;
				}
				void register_setDebugDisplayEnabled_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDebugDisplayEnabled_ev_bool_ev_bool_callback = __method;
				}
				void register_setDebugDisplayEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDebugDisplayEnabled_ev_bool_callback = __method;
				}
				void register_getDebugRenderable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDebugRenderable_void_callback = __method;
				}
				void register__updateFromParent_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateFromParent_void_callback = __method;
				}
				void register_setParent_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParent_CNode_callback = __method;
				}
				void register_updateFromParentImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateFromParentImpl_void_callback = __method;
				}
				void register_createChildImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildImpl_void_callback = __method;
				}
				void register_createChildImpl_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildImpl_EVString_callback = __method;
				}
				void register_notifyMoved_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_notifyMoved_void_callback = __method;
				}
				void register_getParent_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParent_void_callback = __method;
				}
				void register_getOrientation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOrientation_void_callback = __method;
				}
				void register_setOrientation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOrientation_CQuaternion_callback = __method;
				}
				void register_setOrientation_CQuaternion_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOrientation_CQuaternion_ev_bool_callback = __method;
				}
				void register_setOrientation_Real_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOrientation_Real_Real_Real_Real_callback = __method;
				}
				void register_setOrientation_Real_Real_Real_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setOrientation_Real_Real_Real_Real_ev_bool_callback = __method;
				}
				void register_resetOrientation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetOrientation_void_callback = __method;
				}
				void register_setPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_CVector3_callback = __method;
				}
				void register_setPosition_CVector3_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_CVector3_ev_bool_callback = __method;
				}
				void register_setPosition_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_Real_Real_Real_callback = __method;
				}
				void register_setPosition_Real_Real_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_Real_Real_Real_ev_bool_callback = __method;
				}
				void register_getPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPosition_void_callback = __method;
				}
				void register_setScale_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScale_CVector3_callback = __method;
				}
				void register_setScale_CVector3_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScale_CVector3_ev_bool_callback = __method;
				}
				void register_setScale_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScale_Real_Real_Real_callback = __method;
				}
				void register_setScale_Real_Real_Real_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScale_Real_Real_Real_ev_bool_callback = __method;
				}
				void register_getScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScale_void_callback = __method;
				}
				void register_setInheritOrientation_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInheritOrientation_ev_bool_callback = __method;
				}
				void register_getInheritOrientation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInheritOrientation_void_callback = __method;
				}
				void register_setInheritScale_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInheritScale_ev_bool_callback = __method;
				}
				void register_getInheritScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInheritScale_void_callback = __method;
				}
				void register_scale_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_scale_CVector3_callback = __method;
				}
				void register_scale_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_scale_Real_Real_Real_callback = __method;
				}
				void register_translate_CVector3_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CVector3_TransformSpace_callback = __method;
				}
				void register_translate_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CVector3_callback = __method;
				}
				void register_translate_Real_Real_Real_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_Real_Real_Real_TransformSpace_callback = __method;
				}
				void register_translate_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_Real_Real_Real_callback = __method;
				}
				void register_translate_CMatrix3_CVector3_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CMatrix3_CVector3_TransformSpace_callback = __method;
				}
				void register_translate_CMatrix3_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CMatrix3_CVector3_callback = __method;
				}
				void register_translate_CMatrix3_Real_Real_Real_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CMatrix3_Real_Real_Real_TransformSpace_callback = __method;
				}
				void register_translate_CMatrix3_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_translate_CMatrix3_Real_Real_Real_callback = __method;
				}
				void register_roll_CRadian_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_roll_CRadian_TransformSpace_callback = __method;
				}
				void register_roll_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_roll_CRadian_callback = __method;
				}
				void register_pitch_CRadian_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_pitch_CRadian_TransformSpace_callback = __method;
				}
				void register_pitch_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_pitch_CRadian_callback = __method;
				}
				void register_yaw_CRadian_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_yaw_CRadian_TransformSpace_callback = __method;
				}
				void register_yaw_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_yaw_CRadian_callback = __method;
				}
				void register_rotate_CVector3_CRadian_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_rotate_CVector3_CRadian_TransformSpace_callback = __method;
				}
				void register_rotate_CVector3_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_rotate_CVector3_CRadian_callback = __method;
				}
				void register_rotate_CQuaternion_TransformSpace_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_rotate_CQuaternion_TransformSpace_callback = __method;
				}
				void register_rotate_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_rotate_CQuaternion_callback = __method;
				}
				void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMatrix_CMatrix4_callback = __method;
				}
				void register_getMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMatrix_void_callback = __method;
				}
				void register_setLocalMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLocalMatrix_CMatrix4_callback = __method;
				}
				void register_getLocalMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLocalMatrix_void_callback = __method;
				}
				void register_getLocalAxes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLocalAxes_void_callback = __method;
				}
				void register_createChild_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_CVector3_CQuaternion_callback = __method;
				}
				void register_createChild_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_CVector3_callback = __method;
				}
				void register_createChild_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_void_callback = __method;
				}
				void register_createChild_EVString_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_EVString_CVector3_CQuaternion_callback = __method;
				}
				void register_createChild_EVString_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_EVString_CVector3_callback = __method;
				}
				void register_createChild_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_EVString_callback = __method;
				}
				void register_addChild_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addChild_CNode_callback = __method;
				}
				void register_numChildren_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_numChildren_void_callback = __method;
				}
				void register_getChild_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getChild_ev_uint16_callback = __method;
				}
				void register_getChild_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getChild_EVString_callback = __method;
				}
				void register_existChild_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existChild_EVString_callback = __method;
				}
				void register_getChildIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getChildIterator_void_callback = __method;
				}
				void register_removeChild_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeChild_ev_uint16_callback = __method;
				}
				void register_removeChild_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeChild_CNode_callback = __method;
				}
				void register_removeChild_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeChild_EVString_callback = __method;
				}
				void register_removeAllChildren_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllChildren_void_callback = __method;
				}
				void register__setDerivedPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDerivedPosition_CVector3_callback = __method;
				}
				void register__setDerivedPosition_CVector3_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDerivedPosition_CVector3_ev_bool_callback = __method;
				}
				void register__setDerivedOrientation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDerivedOrientation_CQuaternion_callback = __method;
				}
				void register__setDerivedOrientation_CQuaternion_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__setDerivedOrientation_CQuaternion_ev_bool_callback = __method;
				}
				void register__getDerivedOrientation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDerivedOrientation_void_callback = __method;
				}
				void register__getDerivedPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDerivedPosition_void_callback = __method;
				}
				void register__getDerivedScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDerivedScale_void_callback = __method;
				}
				void register__getFullTransform_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getFullTransform_void_callback = __method;
				}
				void register__update_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__update_ev_bool_ev_bool_callback = __method;
				}
				void register_addListener_CNodeListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CNodeListener_callback = __method;
				}
				void register_removeListener_CNodeListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CNodeListener_callback = __method;
				}
				void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListener_ev_uint32_callback = __method;
				}
				void register_getNumListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumListener_ev_uint32_callback = __method;
				}
				void register_setInitialState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInitialState_void_callback = __method;
				}
				void register_resetToInitialState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetToInitialState_void_callback = __method;
				}
				void register_getInitialPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInitialPosition_void_callback = __method;
				}
				void register_convertWorldToLocalPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertWorldToLocalPosition_CVector3_callback = __method;
				}
				void register_convertLocalToWorldPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertLocalToWorldPosition_CVector3_callback = __method;
				}
				void register_convertWorldToLocalOrientation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertWorldToLocalOrientation_CQuaternion_callback = __method;
				}
				void register_convertLocalToWorldOrientation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertLocalToWorldOrientation_CQuaternion_callback = __method;
				}
				void register_getInitialOrientation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInitialOrientation_void_callback = __method;
				}
				void register_getInitialScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInitialScale_void_callback = __method;
				}
				void register_getSquaredViewDepth_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSquaredViewDepth_CCamera_callback = __method;
				}
				void register_needUpdate_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_needUpdate_ev_bool_callback = __method;
				}
				void register_needUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_needUpdate_void_callback = __method;
				}
				void register_requestUpdate_CNode_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_requestUpdate_CNode_ev_bool_callback = __method;
				}
				void register_requestUpdate_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_requestUpdate_CNode_callback = __method;
				}
				void register_cancelUpdate_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_cancelUpdate_CNode_callback = __method;
				}
				void register_getDebugRenderable_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDebugRenderable_Real_callback = __method;
				}
				void register_attachObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachObject_CMovableObject_callback = __method;
				}
				void register_numAttachedObjects_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_numAttachedObjects_void_callback = __method;
				}
				void register_getAttachedObject_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAttachedObject_ev_uint16_callback = __method;
				}
				void register_getAttachedObject_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAttachedObject_EVString_callback = __method;
				}
				void register_detachObject_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachObject_ev_uint16_callback = __method;
				}
				void register_detachObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachObject_CMovableObject_callback = __method;
				}
				void register_detachObject_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachObject_EVString_callback = __method;
				}
				void register_detachAllObjects_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachAllObjects_void_callback = __method;
				}
				void register_removeAndDestroyChild_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAndDestroyChild_EVString_callback = __method;
				}
				void register_removeAndDestroyChild_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAndDestroyChild_ev_uint16_callback = __method;
				}
				void register_removeAndDestroyAllChildren_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAndDestroyAllChildren_void_callback = __method;
				}
				virtual void updateFromParentImpl() const
				{
					if (this->_gRef != NULL && this->m_updateFromParentImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("updateFromParentImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::updateFromParentImpl();
					}
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl()
				{
					if (this->_gRef != NULL && this->m_createChildImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createChildImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildImpl();
					}
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createChildImpl_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createChildImpl_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildImpl(name);
					}
				}
				virtual void setParent(EarthView::World::Graphic::CNode* ref_parent)
				{
					if (this->_gRef != NULL && this->m_setParent_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_parent_j = (jlong) ref_parent;
						jmethodID __method = __gr->getMethod("setParent_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_parent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setParent(ref_parent);
					}
				}
				virtual void setInSceneGraph(ev_bool inGraph)
				{
					if (this->_gRef != NULL && this->m_setInSceneGraph_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean inGraph_j = (jboolean) inGraph;
						jmethodID __method = __gr->getMethod("setInSceneGraph_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , inGraph_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setInSceneGraph(inGraph);
					}
				}
				virtual void notifyMoved() const
				{
					if (this->_gRef != NULL && this->m_notifyMoved_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("notifyMoved_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::notifyMoved();
					}
				}
				virtual void attachObject(EarthView::World::Graphic::CMovableObject* ref_obj)
				{
					if (this->_gRef != NULL && this->m_attachObject_CMovableObject_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_obj_j = (jlong) ref_obj;
						jmethodID __method = __gr->getMethod("attachObject_CMovableObject_callback");
						__env->CallVoidMethod(__obj, __method , ref_obj_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::attachObject(ref_obj);
					}
				}
				virtual ev_uint16 numAttachedObjects() const
				{
					if (this->_gRef != NULL && this->m_numAttachedObjects_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("numAttachedObjects_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::numAttachedObjects();
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_getAttachedObject_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getAttachedObject_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAttachedObject(index);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getAttachedObject_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getAttachedObject_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAttachedObject(name);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_detachObject_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("detachObject_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::detachObject(index);
					}
				}
				virtual void detachObject(EarthView::World::Graphic::CMovableObject* obj)
				{
					if (this->_gRef != NULL && this->m_detachObject_CMovableObject_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong obj_j = (jlong) obj;
						jmethodID __method = __gr->getMethod("detachObject_CMovableObject_callback");
						__env->CallVoidMethod(__obj, __method , obj_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::detachObject(obj);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_detachObject_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("detachObject_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::detachObject(name);
					}
				}
				virtual void detachAllObjects()
				{
					if (this->_gRef != NULL && this->m_detachAllObjects_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("detachAllObjects_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::detachAllObjects();
					}
				}
				virtual ev_bool isInSceneGraph() const
				{
					if (this->_gRef != NULL && this->m_isInSceneGraph_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isInSceneGraph_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::isInSceneGraph();
					}
				}
				virtual void _notifyRootNode()
				{
					if (this->_gRef != NULL && this->m__notifyRootNode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_notifyRootNode_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_notifyRootNode();
					}
				}
				virtual void _update(ev_bool updateChildren, ev_bool parentHasChanged)
				{
					if (this->_gRef != NULL && this->m__update_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean updateChildren_j = (jboolean) updateChildren;
						jboolean parentHasChanged_j = (jboolean) parentHasChanged;
						jmethodID __method = __gr->getMethod("_update_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , updateChildren_j, parentHasChanged_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_update(updateChildren, parentHasChanged);
					}
				}
				virtual void _updateBounds()
				{
					if (this->_gRef != NULL && this->m__updateBounds_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_updateBounds_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_updateBounds();
					}
				}
				virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera* cam, EarthView::World::Graphic::CRenderQueue* queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, ev_bool includeChildren, ev_bool displayNodes, ev_bool onlyShadowCasters)
				{
					if (this->_gRef != NULL && this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong cam_j = (jlong) cam;
						jlong queue_j = (jlong) queue;
						jlong visibleBounds_j = (jlong) visibleBounds;
						jboolean includeChildren_j = (jboolean) includeChildren;
						jboolean displayNodes_j = (jboolean) displayNodes;
						jboolean onlyShadowCasters_j = (jboolean) onlyShadowCasters;
						jmethodID __method = __gr->getMethod("_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , cam_j, queue_j, visibleBounds_j, includeChildren_j, displayNodes_j, onlyShadowCasters_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
					}
				}
				virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera* cam, EarthView::World::Graphic::CRenderQueue* queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, ev_bool includeChildren, ev_bool displayNodes)
				{
					if (this->_gRef != NULL && this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong cam_j = (jlong) cam;
						jlong queue_j = (jlong) queue;
						jlong visibleBounds_j = (jlong) visibleBounds;
						jboolean includeChildren_j = (jboolean) includeChildren;
						jboolean displayNodes_j = (jboolean) displayNodes;
						jmethodID __method = __gr->getMethod("_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , cam_j, queue_j, visibleBounds_j, includeChildren_j, displayNodes_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
					}
				}
				virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera* cam, EarthView::World::Graphic::CRenderQueue* queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, ev_bool includeChildren)
				{
					if (this->_gRef != NULL && this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong cam_j = (jlong) cam;
						jlong queue_j = (jlong) queue;
						jlong visibleBounds_j = (jlong) visibleBounds;
						jboolean includeChildren_j = (jboolean) includeChildren;
						jmethodID __method = __gr->getMethod("_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , cam_j, queue_j, visibleBounds_j, includeChildren_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
					}
				}
				virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera* cam, EarthView::World::Graphic::CRenderQueue* queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds)
				{
					if (this->_gRef != NULL && this->m__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong cam_j = (jlong) cam;
						jlong queue_j = (jlong) queue;
						jlong visibleBounds_j = (jlong) visibleBounds;
						jmethodID __method = __gr->getMethod("_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback");
						__env->CallVoidMethod(__obj, __method , cam_j, queue_j, visibleBounds_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
					}
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& _getWorldAABB() const
				{
					if (this->_gRef != NULL && this->m__getWorldAABB_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getWorldAABB_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CAxisAlignedBox &__values1 = *(const EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::_getWorldAABB();
					}
				}
				virtual EarthView::World::Graphic::CSceneNode::ObjectIterator getAttachedObjectIterator()
				{
					if (this->_gRef != NULL && this->m_getAttachedObjectIterator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAttachedObjectIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode::ObjectIterator __values1 = *(EarthView::World::Graphic::CSceneNode::ObjectIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAttachedObjectIterator();
					}
				}
				virtual void removeAndDestroyChild(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAndDestroyChild_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeAndDestroyChild_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::removeAndDestroyChild(name);
					}
				}
				virtual void removeAndDestroyChild(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeAndDestroyChild_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeAndDestroyChild_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::removeAndDestroyChild(index);
					}
				}
				virtual void removeAndDestroyAllChildren()
				{
					if (this->_gRef != NULL && this->m_removeAndDestroyAllChildren_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("removeAndDestroyAllChildren_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::removeAndDestroyAllChildren();
					}
				}
				virtual void showBoundingBox(ev_bool bShow)
				{
					if (this->_gRef != NULL && this->m_showBoundingBox_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean bShow_j = (jboolean) bShow;
						jmethodID __method = __gr->getMethod("showBoundingBox_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , bShow_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::showBoundingBox(bShow);
					}
				}
				virtual void showBoundingBox(ev_bool bShow, EarthView::World::Graphic::CMaterialPtr redPtr)
				{
					if (this->_gRef != NULL && this->m_showBoundingBox_ev_bool_CMaterialPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean bShow_j = (jboolean) bShow;
						jlong redPtr_j = (jlong) &redPtr;
						jmethodID __method = __gr->getMethod("showBoundingBox_ev_bool_CMaterialPtr_callback");
						__env->CallVoidMethod(__obj, __method , bShow_j, redPtr_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::showBoundingBox(bShow, redPtr);
					}
				}
				virtual void hideBoundingBox(ev_bool bHide)
				{
					if (this->_gRef != NULL && this->m_hideBoundingBox_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean bHide_j = (jboolean) bHide;
						jmethodID __method = __gr->getMethod("hideBoundingBox_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , bHide_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::hideBoundingBox(bHide);
					}
				}
				virtual void _addBoundingBoxToQueue(EarthView::World::Graphic::CRenderQueue* queue)
				{
					if (this->_gRef != NULL && this->m__addBoundingBoxToQueue_CRenderQueue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong queue_j = (jlong) queue;
						jmethodID __method = __gr->getMethod("_addBoundingBoxToQueue_CRenderQueue_callback");
						__env->CallVoidMethod(__obj, __method , queue_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_addBoundingBoxToQueue(queue);
					}
				}
				virtual ev_bool getShowBoundingBox() const
				{
					if (this->_gRef != NULL && this->m_getShowBoundingBox_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getShowBoundingBox_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getShowBoundingBox();
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(const EarthView::World::Spatial::Math::CVector3& translate, const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong translate_j = (jlong) &translate;
						jlong rotate_j = (jlong) &rotate;
						jmethodID __method = __gr->getMethod("createChildSceneNode_CVector3_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translate_j, rotate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode(translate, rotate);
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong translate_j = (jlong) &translate;
						jmethodID __method = __gr->getMethod("createChildSceneNode_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode(translate);
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode()
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createChildSceneNode_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode();
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(const EVString& name, const EarthView::World::Spatial::Math::CVector3& translate, const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_EVString_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong translate_j = (jlong) &translate;
						jlong rotate_j = (jlong) &rotate;
						jmethodID __method = __gr->getMethod("createChildSceneNode_EVString_CVector3_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, translate_j, rotate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode(name, translate, rotate);
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(const EVString& name, const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_EVString_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong translate_j = (jlong) &translate;
						jmethodID __method = __gr->getMethod("createChildSceneNode_EVString_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, translate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode(name, translate);
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* createChildSceneNode(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createChildSceneNode_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createChildSceneNode_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChildSceneNode(name);
					}
				}
				virtual void findLights(EarthView::World::Graphic::LightList& destList, Real radius, ev_uint32 lightMask) const
				{
					if (this->_gRef != NULL && this->m_findLights_LightList_Real_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destList_j = (jlong) &destList;
						jdouble radius_j = (jdouble) radius;
						jlong lightMask_j = (jlong) lightMask;
						jmethodID __method = __gr->getMethod("findLights_LightList_Real_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , destList_j, radius_j, lightMask_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::findLights(destList, radius, lightMask);
					}
				}
				virtual void findLights(EarthView::World::Graphic::LightList& destList, Real radius) const
				{
					if (this->_gRef != NULL && this->m_findLights_LightList_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destList_j = (jlong) &destList;
						jdouble radius_j = (jdouble) radius;
						jmethodID __method = __gr->getMethod("findLights_LightList_Real_callback");
						__env->CallVoidMethod(__obj, __method , destList_j, radius_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::findLights(destList, radius);
					}
				}
				virtual void setFixedYawAxis(ev_bool useFixed, const EarthView::World::Spatial::Math::CVector3& fixedAxis)
				{
					if (this->_gRef != NULL && this->m_setFixedYawAxis_ev_bool_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean useFixed_j = (jboolean) useFixed;
						jlong fixedAxis_j = (jlong) &fixedAxis;
						jmethodID __method = __gr->getMethod("setFixedYawAxis_ev_bool_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , useFixed_j, fixedAxis_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setFixedYawAxis(useFixed, fixedAxis);
					}
				}
				virtual void setFixedYawAxis(ev_bool useFixed)
				{
					if (this->_gRef != NULL && this->m_setFixedYawAxis_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean useFixed_j = (jboolean) useFixed;
						jmethodID __method = __gr->getMethod("setFixedYawAxis_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , useFixed_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setFixedYawAxis(useFixed);
					}
				}
				virtual void yaw(const EarthView::World::Spatial::Math::CRadian& angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_yaw_CRadian_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("yaw_CRadian_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , angle_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::yaw(angle, relativeTo);
					}
				}
				virtual void yaw(const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if (this->_gRef != NULL && this->m_yaw_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("yaw_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::yaw(angle);
					}
				}
				virtual void setDirection(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if (this->_gRef != NULL && this->m_setDirection_Real_Real_Real_TransformSpace_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jint relativeTo_j = (jint) relativeTo;
						jlong localDirectionVector_j = (jlong) &localDirectionVector;
						jmethodID __method = __gr->getMethod("setDirection_Real_Real_Real_TransformSpace_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j, relativeTo_j, localDirectionVector_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(x, y, z, relativeTo, localDirectionVector);
					}
				}
				virtual void setDirection(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_setDirection_Real_Real_Real_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("setDirection_Real_Real_Real_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(x, y, z, relativeTo);
					}
				}
				virtual void setDirection(Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_setDirection_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("setDirection_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(x, y, z);
					}
				}
				virtual void setDirection(const EarthView::World::Spatial::Math::CVector3& vec, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if (this->_gRef != NULL && this->m_setDirection_CVector3_TransformSpace_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vec_j = (jlong) &vec;
						jint relativeTo_j = (jint) relativeTo;
						jlong localDirectionVector_j = (jlong) &localDirectionVector;
						jmethodID __method = __gr->getMethod("setDirection_CVector3_TransformSpace_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , vec_j, relativeTo_j, localDirectionVector_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(vec, relativeTo, localDirectionVector);
					}
				}
				virtual void setDirection(const EarthView::World::Spatial::Math::CVector3& vec, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_setDirection_CVector3_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vec_j = (jlong) &vec;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("setDirection_CVector3_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , vec_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(vec, relativeTo);
					}
				}
				virtual void setDirection(const EarthView::World::Spatial::Math::CVector3& vec)
				{
					if (this->_gRef != NULL && this->m_setDirection_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vec_j = (jlong) &vec;
						jmethodID __method = __gr->getMethod("setDirection_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , vec_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDirection(vec);
					}
				}
				virtual void lookAt(const EarthView::World::Spatial::Math::CVector3& targetPoint, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3& localDirectionVector)
				{
					if (this->_gRef != NULL && this->m_lookAt_CVector3_TransformSpace_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong targetPoint_j = (jlong) &targetPoint;
						jint relativeTo_j = (jint) relativeTo;
						jlong localDirectionVector_j = (jlong) &localDirectionVector;
						jmethodID __method = __gr->getMethod("lookAt_CVector3_TransformSpace_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , targetPoint_j, relativeTo_j, localDirectionVector_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::lookAt(targetPoint, relativeTo, localDirectionVector);
					}
				}
				virtual void lookAt(const EarthView::World::Spatial::Math::CVector3& targetPoint, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_lookAt_CVector3_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong targetPoint_j = (jlong) &targetPoint;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("lookAt_CVector3_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , targetPoint_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::lookAt(targetPoint, relativeTo);
					}
				}
				virtual void setAutoTracking(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setAutoTracking_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setAutoTracking_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setAutoTracking(enabled);
					}
				}
				virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode* ref_target)
				{
					if (this->_gRef != NULL && this->m_setAutoTracking_ev_bool_CSceneNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jlong ref_target_j = (jlong) ref_target;
						jmethodID __method = __gr->getMethod("setAutoTracking_ev_bool_CSceneNode_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, ref_target_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setAutoTracking(enabled, ref_target);
					}
				}
				virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode* ref_target, const EarthView::World::Spatial::Math::CVector3& localDirectionVecto)
				{
					if (this->_gRef != NULL && this->m_setAutoTracking_ev_bool_CSceneNode_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jlong ref_target_j = (jlong) ref_target;
						jlong localDirectionVecto_j = (jlong) &localDirectionVecto;
						jmethodID __method = __gr->getMethod("setAutoTracking_ev_bool_CSceneNode_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, ref_target_j, localDirectionVecto_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVecto);
					}
				}
				virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode* ref_target, const EarthView::World::Spatial::Math::CVector3& localDirectionVector, const EarthView::World::Spatial::Math::CVector3& offset)
				{
					if (this->_gRef != NULL && this->m_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jlong ref_target_j = (jlong) ref_target;
						jlong localDirectionVector_j = (jlong) &localDirectionVector;
						jlong offset_j = (jlong) &offset;
						jmethodID __method = __gr->getMethod("setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, ref_target_j, localDirectionVector_j, offset_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVector, offset);
					}
				}
				virtual EarthView::World::Graphic::CSceneNode* getAutoTrackTarget()
				{
					if (this->_gRef != NULL && this->m_getAutoTrackTarget_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAutoTrackTarget_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneNode *__values1 = (EarthView::World::Graphic::CSceneNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAutoTrackTarget();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackOffset()
				{
					if (this->_gRef != NULL && this->m_getAutoTrackOffset_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAutoTrackOffset_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAutoTrackOffset();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getAutoTrackLocalDirection()
				{
					if (this->_gRef != NULL && this->m_getAutoTrackLocalDirection_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAutoTrackLocalDirection_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getAutoTrackLocalDirection();
					}
				}
				virtual void setVisible(ev_bool visible, ev_bool cascade)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean visible_j = (jboolean) visible;
						jboolean cascade_j = (jboolean) cascade;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , visible_j, cascade_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setVisible(visible, cascade);
					}
				}
				virtual void setVisible(ev_bool visible)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean visible_j = (jboolean) visible;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , visible_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setVisible(visible);
					}
				}
				virtual ev_bool getVisible()
				{
					if (this->_gRef != NULL && this->m_getVisible_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getVisible_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getVisible();
					}
				}
				virtual ev_bool hasAnyVisibleObject() const
				{
					if (this->_gRef != NULL && this->m_hasAnyVisibleObject_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hasAnyVisibleObject_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::hasAnyVisibleObject();
					}
				}
				virtual ev_bool hasAnyVisibleObject2() const
				{
					if (this->_gRef != NULL && this->m_hasAnyVisibleObject2_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hasAnyVisibleObject2_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::hasAnyVisibleObject2();
					}
				}
				virtual ev_bool hasAnyVisibleShadowCaster() const
				{
					if (this->_gRef != NULL && this->m_hasAnyVisibleShadowCaster_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hasAnyVisibleShadowCaster_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::hasAnyVisibleShadowCaster();
					}
				}
				virtual ev_bool hasAnyVisibleShadowCaster2() const
				{
					if (this->_gRef != NULL && this->m_hasAnyVisibleShadowCaster2_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hasAnyVisibleShadowCaster2_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::hasAnyVisibleShadowCaster2();
					}
				}
				virtual void flipVisibility(ev_bool cascade)
				{
					if (this->_gRef != NULL && this->m_flipVisibility_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean cascade_j = (jboolean) cascade;
						jmethodID __method = __gr->getMethod("flipVisibility_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , cascade_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::flipVisibility(cascade);
					}
				}
				virtual void flipVisibility()
				{
					if (this->_gRef != NULL && this->m_flipVisibility_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("flipVisibility_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::flipVisibility();
					}
				}
				virtual void setDebugDisplayEnabled(ev_bool enabled, ev_bool cascade)
				{
					if (this->_gRef != NULL && this->m_setDebugDisplayEnabled_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jboolean cascade_j = (jboolean) cascade;
						jmethodID __method = __gr->getMethod("setDebugDisplayEnabled_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j, cascade_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDebugDisplayEnabled(enabled, cascade);
					}
				}
				virtual void setDebugDisplayEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setDebugDisplayEnabled_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setDebugDisplayEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setDebugDisplayEnabled(enabled);
					}
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable()
				{
					if (this->_gRef != NULL && this->m_getDebugRenderable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDebugRenderable_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode::CDebugRenderable *__values1 = (EarthView::World::Graphic::CNode::CDebugRenderable*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getDebugRenderable();
					}
				}
				virtual void _updateFromParent() const
				{
					if (this->_gRef != NULL && this->m__updateFromParent_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_updateFromParent_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_updateFromParent();
					}
				}
				virtual EarthView::World::Graphic::CNode* getParent() const
				{
					if (this->_gRef != NULL && this->m_getParent_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getParent_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getParent();
					}
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientation() const
				{
					if (this->_gRef != NULL && this->m_getOrientation_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getOrientation_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CQuaternion &__values1 = *(const EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getOrientation();
					}
				}
				virtual void setOrientation(const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if (this->_gRef != NULL && this->m_setOrientation_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jmethodID __method = __gr->getMethod("setOrientation_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , q_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setOrientation(q);
					}
				}
				virtual void setOrientation(const EarthView::World::Spatial::Math::CQuaternion& q, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setOrientation_CQuaternion_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setOrientation_CQuaternion_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , q_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setOrientation(q, notify);
					}
				}
				virtual void setOrientation(Real w, Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_setOrientation_Real_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble w_j = (jdouble) w;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("setOrientation_Real_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , w_j, x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setOrientation(w, x, y, z);
					}
				}
				virtual void setOrientation(Real w, Real x, Real y, Real z, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setOrientation_Real_Real_Real_Real_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble w_j = (jdouble) w;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setOrientation_Real_Real_Real_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , w_j, x_j, y_j, z_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setOrientation(w, x, y, z, notify);
					}
				}
				virtual void resetOrientation()
				{
					if (this->_gRef != NULL && this->m_resetOrientation_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("resetOrientation_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::resetOrientation();
					}
				}
				virtual void setPosition(const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if (this->_gRef != NULL && this->m_setPosition_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pos_j = (jlong) &pos;
						jmethodID __method = __gr->getMethod("setPosition_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setPosition(pos);
					}
				}
				virtual void setPosition(const EarthView::World::Spatial::Math::CVector3& pos, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setPosition_CVector3_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pos_j = (jlong) &pos;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setPosition_CVector3_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pos_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setPosition(pos, notify);
					}
				}
				virtual void setPosition(Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_setPosition_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("setPosition_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setPosition(x, y, z);
					}
				}
				virtual void setPosition(Real x, Real y, Real z, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setPosition_Real_Real_Real_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setPosition_Real_Real_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setPosition(x, y, z, notify);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if (this->_gRef != NULL && this->m_getPosition_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getPosition();
					}
				}
				virtual void setScale(const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if (this->_gRef != NULL && this->m_setScale_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong scale_j = (jlong) &scale;
						jmethodID __method = __gr->getMethod("setScale_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , scale_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setScale(scale);
					}
				}
				virtual void setScale(const EarthView::World::Spatial::Math::CVector3& scale, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setScale_CVector3_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong scale_j = (jlong) &scale;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setScale_CVector3_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , scale_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setScale(scale, notify);
					}
				}
				virtual void setScale(Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_setScale_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("setScale_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setScale(x, y, z);
					}
				}
				virtual void setScale(Real x, Real y, Real z, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m_setScale_Real_Real_Real_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("setScale_Real_Real_Real_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setScale(x, y, z, notify);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if (this->_gRef != NULL && this->m_getScale_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getScale_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getScale();
					}
				}
				virtual void setInheritOrientation(ev_bool inherit)
				{
					if (this->_gRef != NULL && this->m_setInheritOrientation_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean inherit_j = (jboolean) inherit;
						jmethodID __method = __gr->getMethod("setInheritOrientation_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , inherit_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setInheritOrientation(inherit);
					}
				}
				virtual ev_bool getInheritOrientation() const
				{
					if (this->_gRef != NULL && this->m_getInheritOrientation_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInheritOrientation_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getInheritOrientation();
					}
				}
				virtual void setInheritScale(ev_bool inherit)
				{
					if (this->_gRef != NULL && this->m_setInheritScale_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean inherit_j = (jboolean) inherit;
						jmethodID __method = __gr->getMethod("setInheritScale_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , inherit_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setInheritScale(inherit);
					}
				}
				virtual ev_bool getInheritScale() const
				{
					if (this->_gRef != NULL && this->m_getInheritScale_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInheritScale_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getInheritScale();
					}
				}
				virtual void scale(const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if (this->_gRef != NULL && this->m_scale_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong scale_j = (jlong) &scale;
						jmethodID __method = __gr->getMethod("scale_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , scale_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::scale(scale);
					}
				}
				virtual void scale(Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_scale_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("scale_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::scale(x, y, z);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CVector3& d, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_translate_CVector3_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong d_j = (jlong) &d;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("translate_CVector3_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , d_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(d, relativeTo);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CVector3& d)
				{
					if (this->_gRef != NULL && this->m_translate_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong d_j = (jlong) &d;
						jmethodID __method = __gr->getMethod("translate_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , d_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(d);
					}
				}
				virtual void translate(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_translate_Real_Real_Real_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("translate_Real_Real_Real_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(x, y, z, relativeTo);
					}
				}
				virtual void translate(Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_translate_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("translate_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(x, y, z);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CMatrix3& axes, const EarthView::World::Spatial::Math::CVector3& move, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_translate_CMatrix3_CVector3_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axes_j = (jlong) &axes;
						jlong move_j = (jlong) &move;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("translate_CMatrix3_CVector3_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , axes_j, move_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(axes, move, relativeTo);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CMatrix3& axes, const EarthView::World::Spatial::Math::CVector3& move)
				{
					if (this->_gRef != NULL && this->m_translate_CMatrix3_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axes_j = (jlong) &axes;
						jlong move_j = (jlong) &move;
						jmethodID __method = __gr->getMethod("translate_CMatrix3_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , axes_j, move_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(axes, move);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CMatrix3& axes, Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_translate_CMatrix3_Real_Real_Real_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axes_j = (jlong) &axes;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("translate_CMatrix3_Real_Real_Real_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , axes_j, x_j, y_j, z_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(axes, x, y, z, relativeTo);
					}
				}
				virtual void translate(const EarthView::World::Spatial::Math::CMatrix3& axes, Real x, Real y, Real z)
				{
					if (this->_gRef != NULL && this->m_translate_CMatrix3_Real_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axes_j = (jlong) &axes;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble z_j = (jdouble) z;
						jmethodID __method = __gr->getMethod("translate_CMatrix3_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , axes_j, x_j, y_j, z_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::translate(axes, x, y, z);
					}
				}
				virtual void roll(const EarthView::World::Spatial::Math::CRadian& angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_roll_CRadian_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("roll_CRadian_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , angle_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::roll(angle, relativeTo);
					}
				}
				virtual void roll(const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if (this->_gRef != NULL && this->m_roll_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("roll_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::roll(angle);
					}
				}
				virtual void pitch(const EarthView::World::Spatial::Math::CRadian& angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_pitch_CRadian_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("pitch_CRadian_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , angle_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::pitch(angle, relativeTo);
					}
				}
				virtual void pitch(const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if (this->_gRef != NULL && this->m_pitch_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("pitch_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::pitch(angle);
					}
				}
				virtual void rotate(const EarthView::World::Spatial::Math::CVector3& axis, const EarthView::World::Spatial::Math::CRadian& angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_rotate_CVector3_CRadian_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axis_j = (jlong) &axis;
						jlong angle_j = (jlong) &angle;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("rotate_CVector3_CRadian_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , axis_j, angle_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::rotate(axis, angle, relativeTo);
					}
				}
				virtual void rotate(const EarthView::World::Spatial::Math::CVector3& axis, const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if (this->_gRef != NULL && this->m_rotate_CVector3_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong axis_j = (jlong) &axis;
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("rotate_CVector3_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , axis_j, angle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::rotate(axis, angle);
					}
				}
				virtual void rotate(const EarthView::World::Spatial::Math::CQuaternion& q, EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if (this->_gRef != NULL && this->m_rotate_CQuaternion_TransformSpace_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jint relativeTo_j = (jint) relativeTo;
						jmethodID __method = __gr->getMethod("rotate_CQuaternion_TransformSpace_callback");
						__env->CallVoidMethod(__obj, __method , q_j, relativeTo_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::rotate(q, relativeTo);
					}
				}
				virtual void rotate(const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if (this->_gRef != NULL && this->m_rotate_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jmethodID __method = __gr->getMethod("rotate_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , q_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::rotate(q);
					}
				}
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if (this->_gRef != NULL && this->m_setMatrix_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , mat_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setMatrix(mat);
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
				{
					if (this->_gRef != NULL && this->m_getMatrix_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getMatrix();
					}
				}
				virtual void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if (this->_gRef != NULL && this->m_setLocalMatrix_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("setLocalMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , mat_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setLocalMatrix(mat);
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix() const
				{
					if (this->_gRef != NULL && this->m_getLocalMatrix_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLocalMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getLocalMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const
				{
					if (this->_gRef != NULL && this->m_getLocalAxes_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLocalAxes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CMatrix3 __values1 = *(EarthView::World::Spatial::Math::CMatrix3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getLocalAxes();
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild(const EarthView::World::Spatial::Math::CVector3& translate, const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if (this->_gRef != NULL && this->m_createChild_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong translate_j = (jlong) &translate;
						jlong rotate_j = (jlong) &rotate;
						jmethodID __method = __gr->getMethod("createChild_CVector3_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translate_j, rotate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild(translate, rotate);
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild(const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if (this->_gRef != NULL && this->m_createChild_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong translate_j = (jlong) &translate;
						jmethodID __method = __gr->getMethod("createChild_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild(translate);
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild()
				{
					if (this->_gRef != NULL && this->m_createChild_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createChild_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild();
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild(const EVString& name, const EarthView::World::Spatial::Math::CVector3& translate, const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if (this->_gRef != NULL && this->m_createChild_EVString_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong translate_j = (jlong) &translate;
						jlong rotate_j = (jlong) &rotate;
						jmethodID __method = __gr->getMethod("createChild_EVString_CVector3_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, translate_j, rotate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild(name, translate, rotate);
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild(const EVString& name, const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if (this->_gRef != NULL && this->m_createChild_EVString_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong translate_j = (jlong) &translate;
						jmethodID __method = __gr->getMethod("createChild_EVString_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, translate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild(name, translate);
					}
				}
				virtual EarthView::World::Graphic::CNode* createChild(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createChild_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createChild_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::createChild(name);
					}
				}
				virtual void addChild(EarthView::World::Graphic::CNode* ref_child)
				{
					if (this->_gRef != NULL && this->m_addChild_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_child_j = (jlong) ref_child;
						jmethodID __method = __gr->getMethod("addChild_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_child_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::addChild(ref_child);
					}
				}
				virtual ev_uint16 numChildren() const
				{
					if (this->_gRef != NULL && this->m_numChildren_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("numChildren_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::numChildren();
					}
				}
				virtual EarthView::World::Graphic::CNode* getChild(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getChild_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getChild_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getChild(index);
					}
				}
				virtual EarthView::World::Graphic::CNode* getChild(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getChild_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getChild_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getChild(name);
					}
				}
				virtual ev_bool existChild(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_existChild_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("existChild_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::existChild(name);
					}
				}
				virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator()
				{
					if (this->_gRef != NULL && this->m_getChildIterator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getChildIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode::ChildNodeIterator __values1 = *(EarthView::World::Graphic::CNode::ChildNodeIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getChildIterator();
					}
				}
				virtual EarthView::World::Graphic::CNode* removeChild(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeChild_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeChild_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::removeChild(index);
					}
				}
				virtual EarthView::World::Graphic::CNode* removeChild(EarthView::World::Graphic::CNode* child)
				{
					if (this->_gRef != NULL && this->m_removeChild_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong child_j = (jlong) child;
						jmethodID __method = __gr->getMethod("removeChild_CNode_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , child_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::removeChild(child);
					}
				}
				virtual EarthView::World::Graphic::CNode* removeChild(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeChild_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeChild_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::removeChild(name);
					}
				}
				virtual void removeAllChildren()
				{
					if (this->_gRef != NULL && this->m_removeAllChildren_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("removeAllChildren_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::removeAllChildren();
					}
				}
				virtual void _setDerivedPosition(const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if (this->_gRef != NULL && this->m__setDerivedPosition_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pos_j = (jlong) &pos;
						jmethodID __method = __gr->getMethod("_setDerivedPosition_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_setDerivedPosition(pos);
					}
				}
				virtual void _setDerivedPosition(const EarthView::World::Spatial::Math::CVector3& pos, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m__setDerivedPosition_CVector3_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pos_j = (jlong) &pos;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("_setDerivedPosition_CVector3_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pos_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_setDerivedPosition(pos, notify);
					}
				}
				virtual void _setDerivedOrientation(const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if (this->_gRef != NULL && this->m__setDerivedOrientation_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jmethodID __method = __gr->getMethod("_setDerivedOrientation_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , q_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_setDerivedOrientation(q);
					}
				}
				virtual void _setDerivedOrientation(const EarthView::World::Spatial::Math::CQuaternion& q, ev_bool notify)
				{
					if (this->_gRef != NULL && this->m__setDerivedOrientation_CQuaternion_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong q_j = (jlong) &q;
						jboolean notify_j = (jboolean) notify;
						jmethodID __method = __gr->getMethod("_setDerivedOrientation_CQuaternion_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , q_j, notify_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::_setDerivedOrientation(q, notify);
					}
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& _getDerivedOrientation() const
				{
					if (this->_gRef != NULL && this->m__getDerivedOrientation_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getDerivedOrientation_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CQuaternion &__values1 = *(const EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::_getDerivedOrientation();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedPosition() const
				{
					if (this->_gRef != NULL && this->m__getDerivedPosition_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getDerivedPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::_getDerivedPosition();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedScale() const
				{
					if (this->_gRef != NULL && this->m__getDerivedScale_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getDerivedScale_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::_getDerivedScale();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getFullTransform() const
				{
					if (this->_gRef != NULL && this->m__getFullTransform_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getFullTransform_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::_getFullTransform();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if (this->_gRef != NULL && this->m_addListener_CNodeListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("addListener_CNodeListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::addListener(listener);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if (this->_gRef != NULL && this->m_removeListener_CNodeListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("removeListener_CNodeListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::removeListener(listener);
					}
				}
				virtual EarthView::World::Graphic::CNode::CNodeListener* getListener(ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m_getListener_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getListener_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode::CNodeListener *__values1 = (EarthView::World::Graphic::CNode::CNodeListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getListener(index);
					}
				}
				virtual ev_uint32 getNumListener(ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m_getNumListener_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getNumListener_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getNumListener(index);
					}
				}
				virtual void setInitialState()
				{
					if (this->_gRef != NULL && this->m_setInitialState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("setInitialState_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::setInitialState();
					}
				}
				virtual void resetToInitialState()
				{
					if (this->_gRef != NULL && this->m_resetToInitialState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("resetToInitialState_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::resetToInitialState();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialPosition() const
				{
					if (this->_gRef != NULL && this->m_getInitialPosition_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInitialPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getInitialPosition();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition(const EarthView::World::Spatial::Math::CVector3& worldPos)
				{
					if (this->_gRef != NULL && this->m_convertWorldToLocalPosition_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong worldPos_j = (jlong) &worldPos;
						jmethodID __method = __gr->getMethod("convertWorldToLocalPosition_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , worldPos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::convertWorldToLocalPosition(worldPos);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition(const EarthView::World::Spatial::Math::CVector3& localPos)
				{
					if (this->_gRef != NULL && this->m_convertLocalToWorldPosition_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong localPos_j = (jlong) &localPos;
						jmethodID __method = __gr->getMethod("convertLocalToWorldPosition_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , localPos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::convertLocalToWorldPosition(localPos);
					}
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation(const EarthView::World::Spatial::Math::CQuaternion& worldOrientation)
				{
					if (this->_gRef != NULL && this->m_convertWorldToLocalOrientation_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong worldOrientation_j = (jlong) &worldOrientation;
						jmethodID __method = __gr->getMethod("convertWorldToLocalOrientation_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , worldOrientation_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CQuaternion __values1 = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::convertWorldToLocalOrientation(worldOrientation);
					}
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation(const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if (this->_gRef != NULL && this->m_convertLocalToWorldOrientation_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong localOrientation_j = (jlong) &localOrientation;
						jmethodID __method = __gr->getMethod("convertLocalToWorldOrientation_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , localOrientation_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CQuaternion __values1 = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::convertLocalToWorldOrientation(localOrientation);
					}
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getInitialOrientation() const
				{
					if (this->_gRef != NULL && this->m_getInitialOrientation_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInitialOrientation_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CQuaternion &__values1 = *(const EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getInitialOrientation();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialScale() const
				{
					if (this->_gRef != NULL && this->m_getInitialScale_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getInitialScale_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getInitialScale();
					}
				}
				virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const
				{
					if (this->_gRef != NULL && this->m_getSquaredViewDepth_CCamera_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("getSquaredViewDepth_CCamera_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , cam_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSceneNode::getSquaredViewDepth(cam);
					}
				}
				virtual void needUpdate(ev_bool forceParentUpdate)
				{
					if (this->_gRef != NULL && this->m_needUpdate_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean forceParentUpdate_j = (jboolean) forceParentUpdate;
						jmethodID __method = __gr->getMethod("needUpdate_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceParentUpdate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::needUpdate(forceParentUpdate);
					}
				}
				virtual void needUpdate()
				{
					if (this->_gRef != NULL && this->m_needUpdate_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("needUpdate_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::needUpdate();
					}
				}
				virtual void requestUpdate(EarthView::World::Graphic::CNode* ref_child, ev_bool forceParentUpdate)
				{
					if (this->_gRef != NULL && this->m_requestUpdate_CNode_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_child_j = (jlong) ref_child;
						jboolean forceParentUpdate_j = (jboolean) forceParentUpdate;
						jmethodID __method = __gr->getMethod("requestUpdate_CNode_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , ref_child_j, forceParentUpdate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::requestUpdate(ref_child, forceParentUpdate);
					}
				}
				virtual void requestUpdate(EarthView::World::Graphic::CNode* ref_child)
				{
					if (this->_gRef != NULL && this->m_requestUpdate_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_child_j = (jlong) ref_child;
						jmethodID __method = __gr->getMethod("requestUpdate_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_child_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::requestUpdate(ref_child);
					}
				}
				virtual void cancelUpdate(EarthView::World::Graphic::CNode* child)
				{
					if (this->_gRef != NULL && this->m_cancelUpdate_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong child_j = (jlong) child;
						jmethodID __method = __gr->getMethod("cancelUpdate_CNode_callback");
						__env->CallVoidMethod(__obj, __method , child_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSceneNode::cancelUpdate(child);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSceneNodeProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_push_1EVString_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMovableObject *&ref_val = *(EarthView::World::Graphic::CMovableObject**) ref_val_j;
				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CSceneNode::ObjectMap& pObjectX = *(EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMovableObject*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ObjectMap *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIteratorPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIteratorPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIteratorPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIteratorPair_set_1second_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIteratorPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ObjectIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIteratorPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIteratorPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIteratorPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIteratorPair_set_1second_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CMovableObject*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_00024ConstObjectIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode::ConstObjectIterator *pObjectX = (EarthView::World::Graphic::CSceneNode::ConstObjectIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_updateFromParentImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::updateFromParentImpl();
				}
				else
				{
					pObjectX->updateFromParentImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1updateFromParentImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateFromParentImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateFromParentImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_updateFromParentImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::updateFromParentImpl();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChildImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildImpl();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildImpl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChildImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildImpl_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildImpl_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildImpl_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildImpl(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setParent_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setParent(ref_parent);
				}
				else
				{
					pObjectX->setParent(ref_parent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setParent_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParent_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParent_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setParent_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setParent(ref_parent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setInSceneGraph_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inGraph_j)
			{
				ev_bool inGraph = (ev_bool) inGraph_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setInSceneGraph(inGraph);
				}
				else
				{
					pObjectX->setInSceneGraph(inGraph);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setInSceneGraph_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInSceneGraph_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInSceneGraph_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setInSceneGraph_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inGraph_j)
			{
				ev_bool inGraph = (ev_bool) inGraph_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setInSceneGraph(inGraph);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_notifyMoved_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::notifyMoved();
				}
				else
				{
					pObjectX->notifyMoved();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1notifyMoved_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_notifyMoved_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"notifyMoved_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_notifyMoved_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::notifyMoved();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_attachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
			{
				EarthView::World::Graphic::CMovableObject *ref_obj = (EarthView::World::Graphic::CMovableObject*) ref_obj_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::attachObject(ref_obj);
				}
				else
				{
					pObjectX->attachObject(ref_obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1attachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachObject_CMovableObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_attachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
			{
				EarthView::World::Graphic::CMovableObject *ref_obj = (EarthView::World::Graphic::CMovableObject*) ref_obj_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::attachObject(ref_obj);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SceneNode_numAttachedObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::numAttachedObjects();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->numAttachedObjects();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1numAttachedObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_numAttachedObjects_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"numAttachedObjects_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SceneNode_numAttachedObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::numAttachedObjects();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getAttachedObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAttachedObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAttachedObject_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAttachedObject_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObject(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getAttachedObject(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAttachedObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAttachedObject_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAttachedObject_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->detachObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1detachObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachObject_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachObject_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(obj);
				}
				else
				{
					pObjectX->detachObject(obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1detachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachObject_CMovableObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(obj);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->detachObject(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1detachObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachObject_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachObject_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_detachObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::detachObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_detachAllObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::detachAllObjects();
				}
				else
				{
					pObjectX->detachAllObjects();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1detachAllObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachAllObjects_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachAllObjects_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_detachAllObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::detachAllObjects();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_isInSceneGraph_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::isInSceneGraph();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isInSceneGraph();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1isInSceneGraph_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isInSceneGraph_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isInSceneGraph_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_isInSceneGraph_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::isInSceneGraph();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1notifyRootNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_notifyRootNode();
				}
				else
				{
					pObjectX->_notifyRootNode();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1notifyRootNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyRootNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRootNode_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1notifyRootNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_notifyRootNode();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1update_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateChildren_j, jboolean parentHasChanged_j)
			{
				ev_bool updateChildren = (ev_bool) updateChildren_j;
				ev_bool parentHasChanged = (ev_bool) parentHasChanged_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_update(updateChildren, parentHasChanged);
				}
				else
				{
					pObjectX->_update(updateChildren, parentHasChanged);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1update_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__update_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_update_ev_bool_ev_bool_callback", "(ZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1update_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateChildren_j, jboolean parentHasChanged_j)
			{
				ev_bool updateChildren = (ev_bool) updateChildren_j;
				ev_bool parentHasChanged = (ev_bool) parentHasChanged_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_update(updateChildren, parentHasChanged);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1updateBounds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_updateBounds();
				}
				else
				{
					pObjectX->_updateBounds();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1updateBounds_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateBounds_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateBounds_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1updateBounds_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_updateBounds();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j, jboolean displayNodes_j, jboolean onlyShadowCasters_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				ev_bool displayNodes = (ev_bool) displayNodes_j;
				ev_bool onlyShadowCasters = (ev_bool) onlyShadowCasters_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
				}
				else
				{
					pObjectX->_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback", "(JJJZZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j, jboolean displayNodes_j, jboolean onlyShadowCasters_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				ev_bool displayNodes = (ev_bool) displayNodes_j;
				ev_bool onlyShadowCasters = (ev_bool) onlyShadowCasters_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j, jboolean displayNodes_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				ev_bool displayNodes = (ev_bool) displayNodes_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
				}
				else
				{
					pObjectX->_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback", "(JJJZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j, jboolean displayNodes_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				ev_bool displayNodes = (ev_bool) displayNodes_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren, displayNodes);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
				}
				else
				{
					pObjectX->_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback", "(JJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j, jboolean includeChildren_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				ev_bool includeChildren = (ev_bool) includeChildren_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds, includeChildren);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
				}
				else
				{
					pObjectX->_findVisibleObjects(cam, queue, visibleBounds);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1findVisibleObjects_1CCamera_1CRenderQueue_1VisibleObjectsBoundsInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j, jlong visibleBounds_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_findVisibleObjects(cam, queue, visibleBounds);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode__1getWorldAABB_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::_getWorldAABB();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->_getWorldAABB();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1getWorldAABB_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getWorldAABB_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getWorldAABB_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode__1getWorldAABB_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::_getWorldAABB();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObjectIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode::ObjectIterator __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObjectIterator();
					EarthView::World::Graphic::CSceneNode::ObjectIterator *returnvalues = new EarthView::World::Graphic::CSceneNode::ObjectIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode::ObjectIterator __values1 = pObjectX->getAttachedObjectIterator();
					EarthView::World::Graphic::CSceneNode::ObjectIterator *returnvalues = new EarthView::World::Graphic::CSceneNode::ObjectIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAttachedObjectIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAttachedObjectIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAttachedObjectIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAttachedObjectIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode::ObjectIterator __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAttachedObjectIterator();
				EarthView::World::Graphic::CSceneNode::ObjectIterator *returnvalues = new EarthView::World::Graphic::CSceneNode::ObjectIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getCreator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getCreator();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(name);
				}
				else
				{
					pObjectX->removeAndDestroyChild(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeAndDestroyChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAndDestroyChild_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAndDestroyChild_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyChild_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(index);
				}
				else
				{
					pObjectX->removeAndDestroyChild(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeAndDestroyChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAndDestroyChild_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAndDestroyChild_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyChild_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyChild(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyAllChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyAllChildren();
				}
				else
				{
					pObjectX->removeAndDestroyAllChildren();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeAndDestroyAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAndDestroyAllChildren_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAndDestroyAllChildren_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_removeAndDestroyAllChildren_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::removeAndDestroyAllChildren();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_showBoundingBox_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bShow_j)
			{
				ev_bool bShow = (ev_bool) bShow_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow);
				}
				else
				{
					pObjectX->showBoundingBox(bShow);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1showBoundingBox_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_showBoundingBox_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"showBoundingBox_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_showBoundingBox_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bShow_j)
			{
				ev_bool bShow = (ev_bool) bShow_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_showBoundingBox_1ev_1bool_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bShow_j, jlong redPtr_j)
			{
				ev_bool bShow = (ev_bool) bShow_j;
				EarthView::World::Graphic::CMaterialPtr redPtr = *(EarthView::World::Graphic::CMaterialPtr*) redPtr_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow, redPtr);
				}
				else
				{
					pObjectX->showBoundingBox(bShow, redPtr);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1showBoundingBox_1ev_1bool_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_showBoundingBox_ev_bool_CMaterialPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"showBoundingBox_ev_bool_CMaterialPtr_callback", "(ZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_showBoundingBox_1ev_1bool_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bShow_j, jlong redPtr_j)
			{
				ev_bool bShow = (ev_bool) bShow_j;
				EarthView::World::Graphic::CMaterialPtr redPtr = *(EarthView::World::Graphic::CMaterialPtr*) redPtr_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::showBoundingBox(bShow, redPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_hideBoundingBox_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHide_j)
			{
				ev_bool bHide = (ev_bool) bHide_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::hideBoundingBox(bHide);
				}
				else
				{
					pObjectX->hideBoundingBox(bHide);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1hideBoundingBox_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hideBoundingBox_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hideBoundingBox_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_hideBoundingBox_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bHide_j)
			{
				ev_bool bHide = (ev_bool) bHide_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::hideBoundingBox(bHide);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1addBoundingBoxToQueue_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::_addBoundingBoxToQueue(queue);
				}
				else
				{
					pObjectX->_addBoundingBoxToQueue(queue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1addBoundingBoxToQueue_1CRenderQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__addBoundingBoxToQueue_CRenderQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_addBoundingBoxToQueue_CRenderQueue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1addBoundingBoxToQueue_1CRenderQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::_addBoundingBoxToQueue(queue);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_getShowBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getShowBoundingBox();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getShowBoundingBox();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getShowBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShowBoundingBox_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShowBoundingBox_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_getShowBoundingBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getShowBoundingBox();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j, jlong rotate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode(translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_CVector3_CQuaternion_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j, jlong rotate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(translate, rotate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode(translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_CVector3_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(translate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j, jlong rotate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name, translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode(name, translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1EVString_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_EVString_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_EVString_CVector3_CQuaternion_callback", "(Ljava/lang/String;JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j, jlong rotate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name, translate, rotate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name, translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode(name, translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1EVString_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_EVString_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_EVString_CVector3_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name, translate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->createChildSceneNode(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChildSceneNode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildSceneNode_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildSceneNode_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_createChildSceneNode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::createChildSceneNode(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_findLights_1LightList_1Real_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destList_j, jdouble radius_j, jlong lightMask_j)
			{
				EarthView::World::Graphic::LightList &destList = *(EarthView::World::Graphic::LightList*) destList_j;
				Real radius = (Real) radius_j;
				ev_uint32 lightMask = (ev_uint32) lightMask_j;
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::findLights(destList, radius, lightMask);
				}
				else
				{
					pObjectX->findLights(destList, radius, lightMask);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1findLights_1LightList_1Real_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findLights_LightList_Real_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findLights_LightList_Real_ev_uint32_callback", "(JDJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_findLights_1LightList_1Real_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destList_j, jdouble radius_j, jlong lightMask_j)
			{
				EarthView::World::Graphic::LightList &destList = *(EarthView::World::Graphic::LightList*) destList_j;
				Real radius = (Real) radius_j;
				ev_uint32 lightMask = (ev_uint32) lightMask_j;
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::findLights(destList, radius, lightMask);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_findLights_1LightList_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destList_j, jdouble radius_j)
			{
				EarthView::World::Graphic::LightList &destList = *(EarthView::World::Graphic::LightList*) destList_j;
				Real radius = (Real) radius_j;
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::findLights(destList, radius);
				}
				else
				{
					pObjectX->findLights(destList, radius);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1findLights_1LightList_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findLights_LightList_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findLights_LightList_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_findLights_1LightList_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destList_j, jdouble radius_j)
			{
				EarthView::World::Graphic::LightList &destList = *(EarthView::World::Graphic::LightList*) destList_j;
				Real radius = (Real) radius_j;
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::findLights(destList, radius);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setFixedYawAxis_1ev_1bool_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useFixed_j, jlong fixedAxis_j)
			{
				ev_bool useFixed = (ev_bool) useFixed_j;
				const EarthView::World::Spatial::Math::CVector3 &fixedAxis = *(EarthView::World::Spatial::Math::CVector3*) fixedAxis_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed, fixedAxis);
				}
				else
				{
					pObjectX->setFixedYawAxis(useFixed, fixedAxis);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setFixedYawAxis_1ev_1bool_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setFixedYawAxis_ev_bool_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setFixedYawAxis_ev_bool_CVector3_callback", "(ZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setFixedYawAxis_1ev_1bool_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useFixed_j, jlong fixedAxis_j)
			{
				ev_bool useFixed = (ev_bool) useFixed_j;
				const EarthView::World::Spatial::Math::CVector3 &fixedAxis = *(EarthView::World::Spatial::Math::CVector3*) fixedAxis_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed, fixedAxis);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setFixedYawAxis_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useFixed_j)
			{
				ev_bool useFixed = (ev_bool) useFixed_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed);
				}
				else
				{
					pObjectX->setFixedYawAxis(useFixed);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setFixedYawAxis_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setFixedYawAxis_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setFixedYawAxis_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setFixedYawAxis_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useFixed_j)
			{
				ev_bool useFixed = (ev_bool) useFixed_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setFixedYawAxis(useFixed);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_yaw_1CRadian_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::yaw(angle, relativeTo);
				}
				else
				{
					pObjectX->yaw(angle, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1yaw_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_yaw_CRadian_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"yaw_CRadian_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_yaw_1CRadian_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::yaw(angle, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_yaw_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::yaw(angle);
				}
				else
				{
					pObjectX->yaw(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1yaw_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_yaw_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"yaw_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_yaw_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::yaw(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real_1TransformSpace_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, relativeTo, localDirectionVector);
				}
				else
				{
					pObjectX->setDirection(x, y, z, relativeTo, localDirectionVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1Real_1Real_1Real_1TransformSpace_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_Real_Real_Real_TransformSpace_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_Real_Real_Real_TransformSpace_CVector3_callback", "(DDDIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real_1TransformSpace_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, relativeTo, localDirectionVector);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, relativeTo);
				}
				else
				{
					pObjectX->setDirection(x, y, z, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_Real_Real_Real_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_Real_Real_Real_TransformSpace_callback", "(DDDI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z);
				}
				else
				{
					pObjectX->setDirection(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_Real_Real_Real_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3_1TransformSpace_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec, relativeTo, localDirectionVector);
				}
				else
				{
					pObjectX->setDirection(vec, relativeTo, localDirectionVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1CVector3_1TransformSpace_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_CVector3_TransformSpace_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_CVector3_TransformSpace_CVector3_callback", "(JIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3_1TransformSpace_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec, relativeTo, localDirectionVector);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec, relativeTo);
				}
				else
				{
					pObjectX->setDirection(vec, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_CVector3_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_CVector3_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec);
				}
				else
				{
					pObjectX->setDirection(vec);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDirection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDirection_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDirection(vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_lookAt_1CVector3_1TransformSpace_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong targetPoint_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &targetPoint = *(EarthView::World::Spatial::Math::CVector3*) targetPoint_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::lookAt(targetPoint, relativeTo, localDirectionVector);
				}
				else
				{
					pObjectX->lookAt(targetPoint, relativeTo, localDirectionVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1lookAt_1CVector3_1TransformSpace_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lookAt_CVector3_TransformSpace_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lookAt_CVector3_TransformSpace_CVector3_callback", "(JIJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_lookAt_1CVector3_1TransformSpace_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong targetPoint_j, jint relativeTo_j, jlong localDirectionVector_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &targetPoint = *(EarthView::World::Spatial::Math::CVector3*) targetPoint_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::lookAt(targetPoint, relativeTo, localDirectionVector);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_lookAt_1CVector3_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong targetPoint_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &targetPoint = *(EarthView::World::Spatial::Math::CVector3*) targetPoint_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::lookAt(targetPoint, relativeTo);
				}
				else
				{
					pObjectX->lookAt(targetPoint, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1lookAt_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lookAt_CVector3_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lookAt_CVector3_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_lookAt_1CVector3_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong targetPoint_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &targetPoint = *(EarthView::World::Spatial::Math::CVector3*) targetPoint_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::lookAt(targetPoint, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled);
				}
				else
				{
					pObjectX->setAutoTracking(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setAutoTracking_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAutoTracking_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAutoTracking_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target);
				}
				else
				{
					pObjectX->setAutoTracking(enabled, ref_target);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setAutoTracking_1ev_1bool_1CSceneNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAutoTracking_ev_bool_CSceneNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAutoTracking_ev_bool_CSceneNode_callback", "(ZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j, jlong localDirectionVecto_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVecto = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVecto_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVecto);
				}
				else
				{
					pObjectX->setAutoTracking(enabled, ref_target, localDirectionVecto);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setAutoTracking_1ev_1bool_1CSceneNode_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAutoTracking_ev_bool_CSceneNode_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAutoTracking_ev_bool_CSceneNode_CVector3_callback", "(ZJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j, jlong localDirectionVecto_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVecto = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVecto_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVecto);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j, jlong localDirectionVector_j, jlong offset_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				const EarthView::World::Spatial::Math::CVector3 &offset = *(EarthView::World::Spatial::Math::CVector3*) offset_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVector, offset);
				}
				else
				{
					pObjectX->setAutoTracking(enabled, ref_target, localDirectionVector, offset);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setAutoTracking_1ev_1bool_1CSceneNode_1CVector3_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback", "(ZJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setAutoTracking_1ev_1bool_1CSceneNode_1CVector3_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jlong ref_target_j, jlong localDirectionVector_j, jlong offset_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *ref_target = (EarthView::World::Graphic::CSceneNode*) ref_target_j;
				const EarthView::World::Spatial::Math::CVector3 &localDirectionVector = *(EarthView::World::Spatial::Math::CVector3*) localDirectionVector_j;
				const EarthView::World::Spatial::Math::CVector3 &offset = *(EarthView::World::Spatial::Math::CVector3*) offset_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setAutoTracking(enabled, ref_target, localDirectionVector, offset);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackTarget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getAutoTrackTarget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAutoTrackTarget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAutoTrackTarget_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAutoTrackTarget_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackTarget_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackTarget();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackOffset();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getAutoTrackOffset();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAutoTrackOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAutoTrackOffset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAutoTrackOffset_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackOffset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackOffset();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackLocalDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackLocalDirection();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getAutoTrackLocalDirection();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getAutoTrackLocalDirection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAutoTrackLocalDirection_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAutoTrackLocalDirection_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getAutoTrackLocalDirection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getAutoTrackLocalDirection();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode__1autoTrack_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->_autoTrack();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getParentSceneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getParentSceneNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setVisible_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jboolean cascade_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setVisible(visible, cascade);
				}
				else
				{
					pObjectX->setVisible(visible, cascade);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setVisible_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_ev_bool_callback", "(ZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setVisible_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jboolean cascade_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setVisible(visible, cascade);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setVisible(visible);
				}
				else
				{
					pObjectX->setVisible(visible);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVisible_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVisible_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_getVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnyVisibleObject();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1hasAnyVisibleObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnyVisibleObject_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnyVisibleObject_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleObject2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject2();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnyVisibleObject2();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1hasAnyVisibleObject2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnyVisibleObject2_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnyVisibleObject2_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleObject2_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleObject2();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleShadowCaster_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnyVisibleShadowCaster();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1hasAnyVisibleShadowCaster_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnyVisibleShadowCaster_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnyVisibleShadowCaster_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleShadowCaster_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleShadowCaster2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster2();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnyVisibleShadowCaster2();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1hasAnyVisibleShadowCaster2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnyVisibleShadowCaster2_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnyVisibleShadowCaster2_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_hasAnyVisibleShadowCaster2_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::hasAnyVisibleShadowCaster2();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_flipVisibility_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean cascade_j)
			{
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::flipVisibility(cascade);
				}
				else
				{
					pObjectX->flipVisibility(cascade);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1flipVisibility_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipVisibility_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipVisibility_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_flipVisibility_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean cascade_j)
			{
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::flipVisibility(cascade);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_flipVisibility_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::flipVisibility();
				}
				else
				{
					pObjectX->flipVisibility();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1flipVisibility_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipVisibility_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipVisibility_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_flipVisibility_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::flipVisibility();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDebugDisplayEnabled_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jboolean cascade_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled, cascade);
				}
				else
				{
					pObjectX->setDebugDisplayEnabled(enabled, cascade);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDebugDisplayEnabled_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDebugDisplayEnabled_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDebugDisplayEnabled_ev_bool_ev_bool_callback", "(ZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDebugDisplayEnabled_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jboolean cascade_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_bool cascade = (ev_bool) cascade_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled, cascade);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDebugDisplayEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled);
				}
				else
				{
					pObjectX->setDebugDisplayEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setDebugDisplayEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDebugDisplayEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDebugDisplayEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setDebugDisplayEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSceneNode::setDebugDisplayEnabled(enabled);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getDebugRenderable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSceneNodeProxy))
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getDebugRenderable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->getDebugRenderable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getDebugRenderable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDebugRenderable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDebugRenderable_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SceneNode_getDebugRenderable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->EarthView::World::Graphic::CSceneNode::getDebugRenderable();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SceneNode_getIsOceanNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIsOceanNode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_setIsOceanNode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
			{
				ev_bool flag = (ev_bool) flag_j;
				EarthView::World::Graphic::CSceneNode *pObjectX = (EarthView::World::Graphic::CSceneNode*) pObjXXXX;
				pObjectX->setIsOceanNode(flag);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1updateFromParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateFromParent_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateFromParent_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParent_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParent_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOrientation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOrientation_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOrientation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOrientation_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOrientation_CQuaternion_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOrientation_CQuaternion_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setOrientation_1Real_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOrientation_Real_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOrientation_Real_Real_Real_Real_callback", "(DDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setOrientation_1Real_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setOrientation_Real_Real_Real_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setOrientation_Real_Real_Real_Real_ev_bool_callback", "(DDDDZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1resetOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetOrientation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetOrientation_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_CVector3_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_CVector3_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setPosition_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_Real_Real_Real_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setPosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_Real_Real_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_Real_Real_Real_ev_bool_callback", "(DDDZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScale_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScale_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setScale_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScale_CVector3_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScale_CVector3_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setScale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScale_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScale_Real_Real_Real_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setScale_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScale_Real_Real_Real_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScale_Real_Real_Real_ev_bool_callback", "(DDDZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScale_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setInheritOrientation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInheritOrientation_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInheritOrientation_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getInheritOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInheritOrientation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInheritOrientation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setInheritScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInheritScale_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInheritScale_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getInheritScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInheritScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInheritScale_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1scale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_scale_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"scale_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1scale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_scale_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"scale_Real_Real_Real_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CVector3_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CVector3_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_Real_Real_Real_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_Real_Real_Real_TransformSpace_callback", "(DDDI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_Real_Real_Real_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CMatrix3_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CMatrix3_CVector3_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CMatrix3_CVector3_TransformSpace_callback", "(JJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CMatrix3_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CMatrix3_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CMatrix3_CVector3_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CMatrix3_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CMatrix3_Real_Real_Real_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CMatrix3_Real_Real_Real_TransformSpace_callback", "(JDDDI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1translate_1CMatrix3_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_translate_CMatrix3_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"translate_CMatrix3_Real_Real_Real_callback", "(JDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1roll_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_roll_CRadian_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"roll_CRadian_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1roll_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_roll_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"roll_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1pitch_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_pitch_CRadian_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"pitch_CRadian_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1pitch_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_pitch_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"pitch_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1rotate_1CVector3_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_rotate_CVector3_CRadian_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"rotate_CVector3_CRadian_TransformSpace_callback", "(JJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1rotate_1CVector3_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_rotate_CVector3_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"rotate_CVector3_CRadian_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1rotate_1CQuaternion_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_rotate_CQuaternion_TransformSpace_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"rotate_CQuaternion_TransformSpace_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1rotate_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_rotate_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"rotate_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setLocalMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLocalMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLocalMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getLocalMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLocalMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLocalMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getLocalAxes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLocalAxes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLocalAxes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_CVector3_CQuaternion_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_CVector3_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1EVString_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_EVString_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_EVString_CVector3_CQuaternion_callback", "(Ljava/lang/String;JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1EVString_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_EVString_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_EVString_CVector3_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1createChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1addChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addChild_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addChild_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1numChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_numChildren_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"numChildren_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getChild_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getChild_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getChild_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getChild_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1existChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existChild_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existChild_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getChildIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getChildIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getChildIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeChild_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeChild_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeChild_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeChild_CNode_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeChild_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeChild_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllChildren_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllChildren_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1setDerivedPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDerivedPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDerivedPosition_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1setDerivedPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDerivedPosition_CVector3_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDerivedPosition_CVector3_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1setDerivedOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDerivedOrientation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDerivedOrientation_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1setDerivedOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__setDerivedOrientation_CQuaternion_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_setDerivedOrientation_CQuaternion_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1getDerivedOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDerivedOrientation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDerivedOrientation_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1getDerivedPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDerivedPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDerivedPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1getDerivedScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDerivedScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDerivedScale_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1_1getFullTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getFullTransform_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getFullTransform_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1addListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CNodeListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CNodeListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1removeListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CNodeListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CNodeListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListener_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListener_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getNumListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumListener_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumListener_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1setInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInitialState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInitialState_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1resetToInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetToInitialState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetToInitialState_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getInitialPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInitialPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInitialPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1convertWorldToLocalPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertWorldToLocalPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertWorldToLocalPosition_CVector3_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1convertLocalToWorldPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertLocalToWorldPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertLocalToWorldPosition_CVector3_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1convertWorldToLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertWorldToLocalOrientation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertWorldToLocalOrientation_CQuaternion_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1convertLocalToWorldOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertLocalToWorldOrientation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertLocalToWorldOrientation_CQuaternion_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getInitialOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInitialOrientation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInitialOrientation_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getInitialScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInitialScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInitialScale_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSquaredViewDepth_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSquaredViewDepth_CCamera_callback", "(J)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1needUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_needUpdate_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"needUpdate_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1needUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_needUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"needUpdate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1requestUpdate_1CNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_requestUpdate_CNode_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"requestUpdate_CNode_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1requestUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_requestUpdate_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"requestUpdate_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1cancelUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_cancelUpdate_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"cancelUpdate_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SceneNode_register_1getDebugRenderable_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSceneNodeProxy *pObjectX = (JCSceneNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDebugRenderable_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDebugRenderable_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
