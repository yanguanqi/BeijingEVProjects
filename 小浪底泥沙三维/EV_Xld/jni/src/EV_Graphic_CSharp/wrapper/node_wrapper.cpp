/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/node.h"
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
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__updateFromParent_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setParent_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_notifyMoved_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_getParent_CNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback)(_in Real w, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback)(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_resetOrientation_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback)(_in const void* scale, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getScale_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_scale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback)(_in const void* d, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3_Callback)(_in const void* d);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback)(_in const void* axes, _in const void* move, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback)(_in const void* axes, _in const void* move);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback)(_in const void* axis, _in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback)(_in const void* axis, _in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback)(_in const void* q, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_addChild_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_removeAllChildren_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback)(_in ev_bool updateChildren, _in ev_bool parentHasChanged);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef EarthView::World::Graphic::CNode::CNodeListener*  ( _stdcall EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_setInitialState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_resetToInitialState_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback)(_in const void* worldPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback)(_in const void* localPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback)(_in const void* worldOrientation);
			typedef void*  ( _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback)(_in const void* localOrientation);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback)(_in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_needUpdate_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback)(_in Real scaling);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_detachAllObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback)();
			class CNodeProxy : public EarthView::World::Graphic::CNode
			{
			private:
				EarthView_World_Graphic_CNode__updateFromParent_void_Callback* m_EarthView_World_Graphic_CNode__updateFromParent_void_Callback;
				EarthView_World_Graphic_CNode_setParent_void_CNode_Callback* m_EarthView_World_Graphic_CNode_setParent_void_CNode_Callback;
				EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback* m_EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback;
				EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback* m_EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback;
				EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback* m_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback;
				EarthView_World_Graphic_CNode_notifyMoved_void_Callback* m_EarthView_World_Graphic_CNode_notifyMoved_void_Callback;
				EarthView_World_Graphic_CNode_getParent_CNode_Callback* m_EarthView_World_Graphic_CNode_getParent_CNode_Callback;
				EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CNode_resetOrientation_void_Callback* m_EarthView_World_Graphic_CNode_resetOrientation_void_Callback;
				EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CNode_getPosition_CVector3_Callback* m_EarthView_World_Graphic_CNode_getPosition_CVector3_Callback;
				EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback* m_EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback;
				EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CNode_getScale_CVector3_Callback* m_EarthView_World_Graphic_CNode_getScale_CVector3_Callback;
				EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback;
				EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback* m_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback;
				EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback* m_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback;
				EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback* m_EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback;
				EarthView_World_Graphic_CNode_scale_void_CVector3_Callback* m_EarthView_World_Graphic_CNode_scale_void_CVector3_Callback;
				EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_translate_void_CVector3_Callback* m_EarthView_World_Graphic_CNode_translate_void_CVector3_Callback;
				EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback* m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback;
				EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback* m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback;
				EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_roll_void_CRadian_Callback* m_EarthView_World_Graphic_CNode_roll_void_CRadian_Callback;
				EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback* m_EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback;
				EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback* m_EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback;
				EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback* m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback;
				EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback* m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback;
				EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback* m_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CNode_addChild_void_CNode_Callback* m_EarthView_World_Graphic_CNode_addChild_void_CNode_Callback;
				EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback* m_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback;
				EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback* m_EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback;
				EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CNode_removeAllChildren_void_Callback* m_EarthView_World_Graphic_CNode_removeAllChildren_void_Callback;
				EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback* m_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback;
				EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback* m_EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback;
				EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback* m_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback;
				EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CNode_setInitialState_void_Callback* m_EarthView_World_Graphic_CNode_setInitialState_void_Callback;
				EarthView_World_Graphic_CNode_resetToInitialState_void_Callback* m_EarthView_World_Graphic_CNode_resetToInitialState_void_Callback;
				EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback* m_EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback;
				EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback* m_EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback;
				EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback* m_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback;
				EarthView_World_Graphic_CNode_needUpdate_void_Callback* m_EarthView_World_Graphic_CNode_needUpdate_void_Callback;
				EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback* m_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback;
				EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CNode_detachAllObjects_void_Callback* m_EarthView_World_Graphic_CNode_detachAllObjects_void_Callback;
				EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback* m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback;
				EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback* m_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback;
			public:
				CNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CNode(pList)
				{
					m_EarthView_World_Graphic_CNode__updateFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setParent_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getParent_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_resetOrientation_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_scale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_roll_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_addChild_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeAllChildren_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CNode_setInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_resetToInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_needUpdate_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_detachAllObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNode__updateFromParent_void(EarthView_World_Graphic_CNode__updateFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__updateFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setParent_void_CNode(EarthView_World_Graphic_CNode_setParent_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setParent_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_updateFromParentImpl_void(EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode(EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString(EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_notifyMoved_void(EarthView_World_Graphic_CNode_notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getParent_CNode(EarthView_World_Graphic_CNode_getParent_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getParent_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getOrientation_CQuaternion(EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion(EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real(EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool(EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_resetOrientation_void(EarthView_World_Graphic_CNode_resetOrientation_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_resetOrientation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3(EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real(EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getPosition_CVector3(EarthView_World_Graphic_CNode_getPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3(EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool(EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real(EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getScale_CVector3(EarthView_World_Graphic_CNode_getScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool(EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool(EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool(EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getInheritScale_ev_bool(EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_scale_void_CVector3(EarthView_World_Graphic_CNode_scale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_scale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real(EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace(EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CVector3(EarthView_World_Graphic_CNode_translate_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real(EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace(EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3(EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real(EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace(EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_roll_void_CRadian(EarthView_World_Graphic_CNode_roll_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_roll_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace(EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian(EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace(EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian(EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace(EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian(EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace(EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion(EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4(EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getMatrix_CMatrix4(EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4(EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4(EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3(EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion(EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3(EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode(EarthView_World_Graphic_CNode_createChild_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3(EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString(EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_addChild_void_CNode(EarthView_World_Graphic_CNode_addChild_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_addChild_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_numChildren_ev_uint16(EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16(EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getChild_CNode_EVString(EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString(EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator(EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16(EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_CNode(EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_EVString(EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeAllChildren_void(EarthView_World_Graphic_CNode_removeAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeAllChildren_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3(EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion(EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion(EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3(EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__getDerivedScale_CVector3(EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4(EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool(EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_addListener_void_CNodeListener(EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener(EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32(EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32(EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_setInitialState_void(EarthView_World_Graphic_CNode_setInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_setInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_resetToInitialState_void(EarthView_World_Graphic_CNode_resetToInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_resetToInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getInitialPosition_CVector3(EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3(EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3(EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion(EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getInitialScale_CVector3(EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool(EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_needUpdate_void(EarthView_World_Graphic_CNode_needUpdate_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_needUpdate_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool(EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode(EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode(EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real(EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject(EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16(EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString(EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject(EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString(EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_detachAllObjects_void(EarthView_World_Graphic_CNode_detachAllObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_detachAllObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString(EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16(EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void(EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback = pCallback;
				}
				virtual void _updateFromParent() const
				{
					if(m_EarthView_World_Graphic_CNode__updateFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__updateFromParent_void_Callback();
					}
					else
						return this->CNode::_updateFromParent();
				}
				virtual void setParent(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CNode_setParent_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setParent_void_CNode_Callback(ref_parent);
					}
					else
						return this->CNode::setParent(ref_parent);
				}
				virtual void updateFromParentImpl() const
				{
					if(m_EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback();
					}
					else
						return this->CNode::updateFromParentImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl()
				{
					if(m_EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback();
						return returnValue;
					}
					else
						return this->CNode::createChildImpl();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::createChildImpl(name);
				}
				virtual void notifyMoved() const
				{
					if(m_EarthView_World_Graphic_CNode_notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_notifyMoved_void_Callback();
					}
					else
						return this->CNode::notifyMoved();
				}
				virtual EarthView::World::Graphic::CNode* getParent() const
				{
					if(m_EarthView_World_Graphic_CNode_getParent_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_getParent_CNode_Callback();
						return returnValue;
					}
					else
						return this->CNode::getParent();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientation() const
				{
					if(m_EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CNode::getOrientation();
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CNode::setOrientation(q);
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->CNode::setOrientation(q, notify);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback(w, x, y, z);
					}
					else
						return this->CNode::setOrientation(w, x, y, z);
				}
				virtual void setOrientation(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback(w, x, y, z, notify);
					}
					else
						return this->CNode::setOrientation(w, x, y, z, notify);
				}
				virtual void resetOrientation()
				{
					if(m_EarthView_World_Graphic_CNode_resetOrientation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_resetOrientation_void_Callback();
					}
					else
						return this->CNode::resetOrientation();
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CNode::setPosition(pos);
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->CNode::setPosition(pos, notify);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CNode::setPosition(x, y, z);
				}
				virtual void setPosition(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->CNode::setPosition(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if(m_EarthView_World_Graphic_CNode_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_getPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::getPosition();
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback(&scale);
					}
					else
						return this->CNode::setScale(scale);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback(&scale, notify);
					}
					else
						return this->CNode::setScale(scale, notify);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CNode::setScale(x, y, z);
				}
				virtual void setScale(_in Real x, _in Real y, _in Real z, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback(x, y, z, notify);
					}
					else
						return this->CNode::setScale(x, y, z, notify);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if(m_EarthView_World_Graphic_CNode_getScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_getScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::getScale();
				}
				virtual void setInheritOrientation(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback(inherit);
					}
					else
						return this->CNode::setInheritOrientation(inherit);
				}
				virtual ev_bool getInheritOrientation() const
				{
					if(m_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CNode::getInheritOrientation();
				}
				virtual void setInheritScale(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback(inherit);
					}
					else
						return this->CNode::setInheritScale(inherit);
				}
				virtual ev_bool getInheritScale() const
				{
					if(m_EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CNode::getInheritScale();
				}
				virtual void scale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CNode_scale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_scale_void_CVector3_Callback(&scale);
					}
					else
						return this->CNode::scale(scale);
				}
				virtual void scale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CNode::scale(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback(&d, (int)relativeTo);
					}
					else
						return this->CNode::translate(d, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CVector3_Callback(&d);
					}
					else
						return this->CNode::translate(d);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->CNode::translate(x, y, z, relativeTo);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CNode::translate(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback(&axes, &move, (int)relativeTo);
					}
					else
						return this->CNode::translate(axes, move, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback(&axes, &move);
					}
					else
						return this->CNode::translate(axes, move);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback(&axes, x, y, z, (int)relativeTo);
					}
					else
						return this->CNode::translate(axes, x, y, z, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback(&axes, x, y, z);
					}
					else
						return this->CNode::translate(axes, x, y, z);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CNode::roll(angle, relativeTo);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CNode_roll_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_roll_void_CRadian_Callback(&angle);
					}
					else
						return this->CNode::roll(angle);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CNode::pitch(angle, relativeTo);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback(&angle);
					}
					else
						return this->CNode::pitch(angle);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CNode::yaw(angle, relativeTo);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback(&angle);
					}
					else
						return this->CNode::yaw(angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback(&axis, &angle, (int)relativeTo);
					}
					else
						return this->CNode::rotate(axis, angle, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback(&axis, &angle);
					}
					else
						return this->CNode::rotate(axis, angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback(&q, (int)relativeTo);
					}
					else
						return this->CNode::rotate(q, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback(&q);
					}
					else
						return this->CNode::rotate(q);
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CNode::setMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
				{
					if(m_EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CNode::getMatrix();
				}
				virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CNode::setLocalMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix() const
				{
					if(m_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CNode::getLocalMatrix();
				}
				virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const
				{
					if(m_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix3 returnValue = *(EarthView::World::Spatial::Math::CMatrix3*)m_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback();
						return returnValue;
					}
					else
						return this->CNode::getLocalAxes();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback(&translate, &rotate);
						return returnValue;
					}
					else
						return this->CNode::createChild(translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback(&translate);
						return returnValue;
					}
					else
						return this->CNode::createChild(translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild()
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_Callback();
						return returnValue;
					}
					else
						return this->CNode::createChild();
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback(name_Char, &translate, &rotate);
						return returnValue;
					}
					else
						return this->CNode::createChild(name, translate, rotate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback(name_Char, &translate);
						return returnValue;
					}
					else
						return this->CNode::createChild(name, translate);
				}
				virtual EarthView::World::Graphic::CNode* createChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::createChild(name);
				}
				virtual void addChild(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CNode_addChild_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_addChild_void_CNode_Callback(ref_child);
					}
					else
						return this->CNode::addChild(ref_child);
				}
				virtual ev_uint16 numChildren() const
				{
					if(m_EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CNode::numChildren();
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::getChild(index);
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::getChild(name);
				}
				virtual ev_bool existChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::existChild(name);
				}
				virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator()
				{
					if(m_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::ChildNodeIterator returnValue = *(EarthView::World::Graphic::CNode::ChildNodeIterator*)m_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback();
						return returnValue;
					}
					else
						return this->CNode::getChildIterator();
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::removeChild(index);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback(child);
						return returnValue;
					}
					else
						return this->CNode::removeChild(child);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::removeChild(name);
				}
				virtual void removeAllChildren()
				{
					if(m_EarthView_World_Graphic_CNode_removeAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_removeAllChildren_void_Callback();
					}
					else
						return this->CNode::removeAllChildren();
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CNode::_setDerivedPosition(pos);
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback(&pos, notify);
					}
					else
						return this->CNode::_setDerivedPosition(pos, notify);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CNode::_setDerivedOrientation(q);
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in ev_bool notify)
				{
					if(m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback(&q, notify);
					}
					else
						return this->CNode::_setDerivedOrientation(q, notify);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& _getDerivedOrientation() const
				{
					if(m_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CNode::_getDerivedOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedPosition() const
				{
					if(m_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::_getDerivedPosition();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedScale() const
				{
					if(m_EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::_getDerivedScale();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getFullTransform() const
				{
					if(m_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CNode::_getFullTransform();
				}
				virtual void _update(_in ev_bool updateChildren, _in ev_bool parentHasChanged)
				{
					if(m_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback(updateChildren, parentHasChanged);
					}
					else
						return this->CNode::_update(updateChildren, parentHasChanged);
				}
				virtual void addListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CNode::addListener(listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CNode::removeListener(listener);
				}
				virtual EarthView::World::Graphic::CNode::CNodeListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CNodeListener* returnValue = m_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::getListener(index);
				}
				virtual ev_uint32 getNumListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::getNumListener(index);
				}
				virtual void setInitialState()
				{
					if(m_EarthView_World_Graphic_CNode_setInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_setInitialState_void_Callback();
					}
					else
						return this->CNode::setInitialState();
				}
				virtual void resetToInitialState()
				{
					if(m_EarthView_World_Graphic_CNode_resetToInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_resetToInitialState_void_Callback();
					}
					else
						return this->CNode::resetToInitialState();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialPosition() const
				{
					if(m_EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::getInitialPosition();
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition(_in const EarthView::World::Spatial::Math::CVector3& worldPos)
				{
					if(m_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback(&worldPos);
						return returnValue;
					}
					else
						return this->CNode::convertWorldToLocalPosition(worldPos);
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition(_in const EarthView::World::Spatial::Math::CVector3& localPos)
				{
					if(m_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback(&localPos);
						return returnValue;
					}
					else
						return this->CNode::convertLocalToWorldPosition(localPos);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& worldOrientation)
				{
					if(m_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback(&worldOrientation);
						return returnValue;
					}
					else
						return this->CNode::convertWorldToLocalOrientation(worldOrientation);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if(m_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback(&localOrientation);
						return returnValue;
					}
					else
						return this->CNode::convertLocalToWorldOrientation(localOrientation);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getInitialOrientation() const
				{
					if(m_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CNode::getInitialOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialScale() const
				{
					if(m_EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CNode::getInitialScale();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CNode::getSquaredViewDepth(cam);
				}
				virtual void needUpdate(_in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback(forceParentUpdate);
					}
					else
						return this->CNode::needUpdate(forceParentUpdate);
				}
				virtual void needUpdate()
				{
					if(m_EarthView_World_Graphic_CNode_needUpdate_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_needUpdate_void_Callback();
					}
					else
						return this->CNode::needUpdate();
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback(ref_child, forceParentUpdate);
					}
					else
						return this->CNode::requestUpdate(ref_child, forceParentUpdate);
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback(ref_child);
					}
					else
						return this->CNode::requestUpdate(ref_child);
				}
				virtual void cancelUpdate(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback(child);
					}
					else
						return this->CNode::cancelUpdate(child);
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable(_in Real scaling)
				{
					if(m_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CDebugRenderable* returnValue = m_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback(scaling);
						return returnValue;
					}
					else
						return this->CNode::getDebugRenderable(scaling);
				}
				virtual void attachObject(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback(obj);
					}
					else
						return this->CNode::attachObject(obj);
				}
				virtual ev_uint16 numAttachedObjects() const
				{
					if(m_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CNode::numAttachedObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::getAttachedObject(index);
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::getAttachedObject(name);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNode::detachObject(index);
				}
				virtual void detachObject(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback(obj);
					}
					else
						return this->CNode::detachObject(obj);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CNode::detachObject(name);
				}
				virtual void detachAllObjects()
				{
					if(m_EarthView_World_Graphic_CNode_detachAllObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_detachAllObjects_void_Callback();
					}
					else
						return this->CNode::detachAllObjects();
				}
				virtual void removeAndDestroyChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback(name_Char);
					}
					else
						return this->CNode::removeAndDestroyChild(name);
				}
				virtual void removeAndDestroyChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback(index);
					}
					else
						return this->CNode::removeAndDestroyChild(index);
				}
				virtual void removeAndDestroyAllChildren()
				{
					if(m_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback();
					}
					else
						return this->CNode::removeAndDestroyAllChildren();
				}
			};
			REGISTER_FACTORY_CLASS(CNodeProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_push_ev_bool_EVString_CNode(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CNode*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_OperatorIndex_CNode_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CNode::ChildNodeMap& objYYYY = *(EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				EarthView::World::Graphic::CNode* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_get_CNode_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_ChildNodeMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ChildNodeMap* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CNode_StringChildNodePair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::StringChildNodePair* ptrNativeObject = (EarthView::World::Graphic::CNode::StringChildNodePair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNode_StringChildNodePair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CNode::StringChildNodePair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall Get_EarthView_World_Graphic_CNode_StringChildNodePair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::StringChildNodePair* ptrNativeObject = (EarthView::World::Graphic::CNode::StringChildNodePair*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNode_StringChildNodePair_second( void *pObjectXXXX, EarthView::World::Graphic::CNode*  value )
			{
				((EarthView::World::Graphic::CNode::StringChildNodePair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_nextValue_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode**  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_nextValuePtr_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_next_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_getBegin_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_getEnd_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ChildNodeIterator_getCurrent_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_nextValue_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode**  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_nextValuePtr_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_next_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_getBegin_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_getEnd_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_ConstChildNodeIterator_getCurrent_StringChildNodePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator* ptrNativeObject = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CNode::StringChildNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback)(_in const EarthView::World::Graphic::CNode* pNode);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback)(_in const EarthView::World::Graphic::CNode* pNode);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback)(_in const EarthView::World::Graphic::CNode* pNode);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback)(_in const EarthView::World::Graphic::CNode* pNode);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback)(_in const EarthView::World::Graphic::CNode* pNode);
			class CNodeListenerProxy : public EarthView::World::Graphic::CNode::CNodeListener
			{
			private:
				EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback* m_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback;
				EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback* m_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback;
				EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback* m_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback;
				EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback* m_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback;
				EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback* m_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback;
			public:
				CNodeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeListener(pList)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode(EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode(EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode(EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode(EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode(EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback = pCallback;
				}
				virtual void nodeUpdated(_in const EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback(pNode);
					}
					else
						return this->CNodeListener::nodeUpdated(pNode);
				}
				virtual void nodeDestroyed(_in const EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback(pNode);
					}
					else
						return this->CNodeListener::nodeDestroyed(pNode);
				}
				virtual void nodeAttached(_in const EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback(pNode);
					}
					else
						return this->CNodeListener::nodeAttached(pNode);
				}
				virtual void nodeDetached(_in const EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback(pNode);
					}
					else
						return this->CNodeListener::nodeDetached(pNode);
				}
				virtual void nodeMoved(_in const EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback(pNode);
					}
					else
						return this->CNodeListener::nodeMoved(pNode);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				if (dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeUpdated(pNode);
				else
					ptrNativeObject->nodeUpdated(pNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_Callback* pCallback )
			{
				CNodeListenerProxy* ptr = dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeUpdated_void_CNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeUpdated(pNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				if (dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeDestroyed(pNode);
				else
					ptrNativeObject->nodeDestroyed(pNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_Callback* pCallback )
			{
				CNodeListenerProxy* ptr = dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDestroyed_void_CNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeDestroyed(pNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				if (dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeAttached(pNode);
				else
					ptrNativeObject->nodeAttached(pNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_Callback* pCallback )
			{
				CNodeListenerProxy* ptr = dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeAttached_void_CNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeAttached(pNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				if (dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeDetached(pNode);
				else
					ptrNativeObject->nodeDetached(pNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_Callback* pCallback )
			{
				CNodeListenerProxy* ptr = dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeDetached_void_CNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeDetached(pNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				if (dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeMoved(pNode);
				else
					ptrNativeObject->nodeMoved(pNode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_Callback* pCallback )
			{
				CNodeListenerProxy* ptr = dynamic_cast<CNodeListenerProxy*>((EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CNodeListener_nodeMoved_void_CNode_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CNode::CNodeListener* ptrNativeObject = (EarthView::World::Graphic::CNode::CNodeListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CNodeListener::nodeMoved(pNode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_push_back_void_CNodeListener(void *pObjectXXXX, _in EarthView::World::Graphic::CNode::CNodeListener*& ref_t )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CNodeListener*  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_front_CNodeListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CNodeListener*  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_back_CNodeListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CNodeListener*  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_at_CNodeListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_insert_void_ev_uint32_CNodeListener(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CNode::CNodeListener*& ref_t )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_NodeListenerVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CNode::NodeListenerVector* ptrNativeObject = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CDebugRenderableProxy : public EarthView::World::Graphic::CNode::CDebugRenderable
			{
			private:
				EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CDebugRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CDebugRenderable(pList)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList(EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CDebugRenderable::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CDebugRenderable::getWorldTransforms(xform);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CDebugRenderable::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getLights();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getTechnique();
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CDebugRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CDebugRenderable::postRender(sm, rsys);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CDebugRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CDebugRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CDebugRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CDebugRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CDebugRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CDebugRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CDebugRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CDebugRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CDebugRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CDebugRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CDebugRenderableProxy);
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				if (dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				if (dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				if (dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				if (dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				if (dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::CDebugRenderable::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_CDebugRenderable_setScaling_void_Real(void *pObjectXXXX, _in Real s )
			{
				EarthView::World::Graphic::CNode::CDebugRenderable* ptrNativeObject = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX;
				ptrNativeObject->setScaling(s);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CDebugRenderableProxy* ptr = dynamic_cast<CDebugRenderableProxy*>((EarthView::World::Graphic::CNode::CDebugRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_CDebugRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__updateFromParent_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_updateFromParent();
				else
					ptrNativeObject->_updateFromParent();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__updateFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CNode__updateFromParent_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__updateFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__updateFromParent_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_updateFromParent();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setParent_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setParent(ref_parent);
				else
					ptrNativeObject->setParent(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setParent_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_setParent_void_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setParent_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setParent_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setParent(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_updateFromParentImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::updateFromParentImpl();
				else
					ptrNativeObject->updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_updateFromParentImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_updateFromParentImpl_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_updateFromParentImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_updateFromParentImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChildImpl();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChildImpl();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChildImpl_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChildImpl();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChildImpl(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChildImpl(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChildImpl_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChildImpl(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_notifyMoved_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::notifyMoved();
				else
					ptrNativeObject->notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_notifyMoved_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_notifyMoved_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CNode_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getParent_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getParent();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getParent_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_getParent_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getParent_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getParent_CNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_getOrientation_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getOrientation_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool(void *pObjectXXXX, _in const void* q, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
				else
					ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_CQuaternion_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* q, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real w, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z);
				else
					ptrNativeObject->setOrientation(w, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real w, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool(void *pObjectXXXX, _in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z, notify);
				else
					ptrNativeObject->setOrientation(w, x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setOrientation_void_Real_Real_Real_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_resetOrientation_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::resetOrientation();
				else
					ptrNativeObject->resetOrientation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_resetOrientation_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_resetOrientation_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_resetOrientation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_resetOrientation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::resetOrientation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_setPosition_void_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool(void *pObjectXXXX, _in const void* pos, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
				else
					ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_CVector3_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* pos, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(x, y, z);
				else
					ptrNativeObject->setPosition(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(x, y, z, notify);
				else
					ptrNativeObject->setPosition(x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setPosition_void_Real_Real_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setPosition(x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_getPosition_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getPosition_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_setScale_void_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool(void *pObjectXXXX, _in const void* scale, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale, notify);
				else
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_CVector3_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* scale, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale, notify);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setScale(x, y, z);
				else
					ptrNativeObject->setScale(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setScale(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setScale(x, y, z, notify);
				else
					ptrNativeObject->setScale(x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setScale_void_Real_Real_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setScale(x, y, z, notify);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_getScale_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getScale_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setInheritOrientation(inherit);
				else
					ptrNativeObject->setInheritOrientation(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInheritOrientation_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setInheritOrientation(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInheritOrientation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getInheritOrientation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_getInheritOrientation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInheritOrientation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setInheritScale(inherit);
				else
					ptrNativeObject->setInheritScale(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInheritScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setInheritScale(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_getInheritScale_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInheritScale();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getInheritScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getInheritScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_getInheritScale_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getInheritScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_getInheritScale_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInheritScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_scale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::scale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->scale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_scale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_scale_void_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_scale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_scale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::scale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_scale_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::scale(x, y, z);
				else
					ptrNativeObject->scale(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_scale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_scale_void_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::scale(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace(void *pObjectXXXX, _in const void* d, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CVector3*)d, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CVector3*)d, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* d, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CVector3*)d, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3(void *pObjectXXXX, _in const void* d )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CVector3*)d);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CVector3*)d);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* d )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CVector3*)d);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->translate(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_TransformSpace_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(x, y, z);
				else
					ptrNativeObject->translate(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace(void *pObjectXXXX, _in const void* axes, _in const void* move, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* axes, _in const void* move, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3(void *pObjectXXXX, _in const void* axes, _in const void* move )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_CVector3_NoVirtual(void *pObjectXXXX, _in const void* axes, _in const void* move )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, *(EarthView::World::Spatial::Math::CVector3*)move);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(void *pObjectXXXX, _in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real(void *pObjectXXXX, _in const void* axes, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z);
				else
					ptrNativeObject->translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_translate_void_CMatrix3_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* axes, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::translate(*(EarthView::World::Spatial::Math::CMatrix3*)axes, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::roll(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->roll(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::roll(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::roll(*(EarthView::World::Spatial::Math::CRadian*)angle);
				else
					ptrNativeObject->roll(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_roll_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CNode_roll_void_CRadian_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_roll_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_roll_void_CRadian_NoVirtual(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::roll(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::pitch(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->pitch(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::pitch(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::pitch(*(EarthView::World::Spatial::Math::CRadian*)angle);
				else
					ptrNativeObject->pitch(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CNode_pitch_void_CRadian_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_pitch_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_pitch_void_CRadian_NoVirtual(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::pitch(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
				else
					ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CNode_yaw_void_CRadian_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_yaw_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_yaw_void_CRadian_NoVirtual(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace(void *pObjectXXXX, _in const void* axis, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* axis, _in const void* angle, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian(void *pObjectXXXX, _in const void* axis, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle);
				else
					ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CVector3_CRadian_NoVirtual(void *pObjectXXXX, _in const void* axis, _in const void* angle )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace(void *pObjectXXXX, _in const void* q, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
				else
					ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion_TransformSpace_NoVirtual(void *pObjectXXXX, _in const void* q, _in int relativeTo )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q, (EarthView::World::Graphic::CNode::TransformSpace)relativeTo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_rotate_void_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_rotate_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_rotate_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
				else
					ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode_getMatrix_CMatrix4_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
				else
					ptrNativeObject->setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setLocalMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getLocalMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getLocalMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getLocalMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getLocalMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getLocalAxes();
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->getLocalAxes();
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3( void *pObjectXXXX, EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getLocalAxes_CMatrix3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getLocalAxes();
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion(void *pObjectXXXX, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(*(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3(void *pObjectXXXX, _in const void* translate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(*(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild(*(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_CVector3_NoVirtual(void *pObjectXXXX, _in const void* translate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(*(EarthView::World::Spatial::Math::CVector3*)translate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion(void *pObjectXXXX, _in const char* name, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in const char* name, _in const void* translate, _in const void* rotate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate, *(EarthView::World::Spatial::Math::CQuaternion*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3(void *pObjectXXXX, _in const char* name, _in const void* translate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_CVector3_NoVirtual(void *pObjectXXXX, _in const char* name, _in const void* translate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1, *(EarthView::World::Spatial::Math::CVector3*)translate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChild(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_createChild_CNode_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_createChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_createChild_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::createChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_addChild_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::addChild(ref_child);
				else
					ptrNativeObject->addChild(ref_child);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_addChild_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_addChild_void_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_addChild_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_addChild_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::addChild(ref_child);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CNode_numChildren_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::numChildren();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->numChildren();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_numChildren_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_numChildren_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_numChildren_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CNode_numChildren_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::numChildren();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChild(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getChild(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getChild_CNode_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChild(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getChild_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChild(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getChild(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_getChild_CNode_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_getChild_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_existChild_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::existChild(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->existChild(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_existChild_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_existChild_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::existChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode::ChildNodeIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChildIterator();
					EarthView::World::Graphic::CNode::ChildNodeIterator *pXXXX = new EarthView::World::Graphic::CNode::ChildNodeIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode::ChildNodeIterator objXXXX = ptrNativeObject->getChildIterator();
					EarthView::World::Graphic::CNode::ChildNodeIterator *pXXXX = new EarthView::World::Graphic::CNode::ChildNodeIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator( void *pObjectXXXX, EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getChildIterator_ChildNodeIterator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode::ChildNodeIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getChildIterator();
				EarthView::World::Graphic::CNode::ChildNodeIterator *pXXXX = new EarthView::World::Graphic::CNode::ChildNodeIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(child);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(child);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeChild_CNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeChild_CNode_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(child);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->removeChild(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeChild_CNode_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNode_removeChild_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::removeChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAllChildren_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::removeAllChildren();
				else
					ptrNativeObject->removeAllChildren();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeAllChildren_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAllChildren_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::removeAllChildren();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool(void *pObjectXXXX, _in const void* pos, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
				else
					ptrNativeObject->_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedPosition_void_CVector3_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* pos, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, notify);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool(void *pObjectXXXX, _in const void* q, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
				else
					ptrNativeObject->_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__setDerivedOrientation_void_CQuaternion_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* q, _in ev_bool notify )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q, notify);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->_getDerivedOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedOrientation_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->_getDerivedPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__getDerivedPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedPosition_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->_getDerivedScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__getDerivedScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode__getDerivedScale_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__getDerivedScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getDerivedScale_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getDerivedScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getFullTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getFullTransform();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getFullTransform();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__getFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode__getFullTransform_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::_getFullTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool updateChildren, _in ev_bool parentHasChanged )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::_update(updateChildren, parentHasChanged);
				else
					ptrNativeObject->_update(updateChildren, parentHasChanged);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode__update_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool updateChildren, _in ev_bool parentHasChanged )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::_update(updateChildren, parentHasChanged);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_addListener_void_CNodeListener(void *pObjectXXXX, _in EarthView::World::Graphic::CNode::CNodeListener* listener )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::addListener(listener);
				else
					ptrNativeObject->addListener(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_addListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CNode_addListener_void_CNodeListener_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_addListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_addListener_void_CNodeListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode::CNodeListener* listener )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::addListener(listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeListener_void_CNodeListener(void *pObjectXXXX, _in EarthView::World::Graphic::CNode::CNodeListener* listener )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::removeListener(listener);
				else
					ptrNativeObject->removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeListener_void_CNodeListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode::CNodeListener* listener )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CNodeListener*  _stdcall EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getListener(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->getListener(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CNodeListener*  _stdcall EarthView_World_Graphic_CNode_getListener_CNodeListener_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CNodeListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getListener(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getNumListener(index);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getNumListener(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CNode_getNumListener_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getNumListener(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInitialState_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::setInitialState();
				else
					ptrNativeObject->setInitialState();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_setInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_setInitialState_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_setInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setInitialState_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::setInitialState();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_resetToInitialState_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::resetToInitialState();
				else
					ptrNativeObject->resetToInitialState();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_resetToInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_resetToInitialState_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_resetToInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_resetToInitialState_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::resetToInitialState();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getInitialPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getInitialPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_getInitialPosition_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getInitialPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialPosition_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3(void *pObjectXXXX, _in const void* worldPos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertWorldToLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)worldPos);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->convertWorldToLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)worldPos);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalPosition_CVector3_CVector3_NoVirtual(void *pObjectXXXX, _in const void* worldPos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertWorldToLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)worldPos);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3(void *pObjectXXXX, _in const void* localPos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertLocalToWorldPosition(*(EarthView::World::Spatial::Math::CVector3*)localPos);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->convertLocalToWorldPosition(*(EarthView::World::Spatial::Math::CVector3*)localPos);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldPosition_CVector3_CVector3_NoVirtual(void *pObjectXXXX, _in const void* localPos )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertLocalToWorldPosition(*(EarthView::World::Spatial::Math::CVector3*)localPos);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(void *pObjectXXXX, _in const void* worldOrientation )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertWorldToLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)worldOrientation);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->convertWorldToLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)worldOrientation);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertWorldToLocalOrientation_CQuaternion_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* worldOrientation )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertWorldToLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)worldOrientation);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(void *pObjectXXXX, _in const void* localOrientation )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertLocalToWorldOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->convertLocalToWorldOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_convertLocalToWorldOrientation_CQuaternion_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* localOrientation )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::convertLocalToWorldOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)localOrientation);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getInitialOrientation();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialOrientation_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getInitialScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getInitialScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CNode_getInitialScale_CVector3_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getInitialScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNode_getInitialScale_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getInitialScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CNode_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_needUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::needUpdate(forceParentUpdate);
				else
					ptrNativeObject->needUpdate(forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_needUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_needUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::needUpdate(forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_needUpdate_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::needUpdate();
				else
					ptrNativeObject->needUpdate();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_needUpdate_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_needUpdate_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_needUpdate_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_needUpdate_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::needUpdate();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::requestUpdate(ref_child, forceParentUpdate);
				else
					ptrNativeObject->requestUpdate(ref_child, forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::requestUpdate(ref_child, forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::requestUpdate(ref_child);
				else
					ptrNativeObject->requestUpdate(ref_child);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_requestUpdate_void_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_requestUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_requestUpdate_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::requestUpdate(ref_child);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_cancelUpdate_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::cancelUpdate(child);
				else
					ptrNativeObject->cancelUpdate(child);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_cancelUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_cancelUpdate_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* child )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::cancelUpdate(child);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CDebugRenderable*  _stdcall EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real(void *pObjectXXXX, _in Real scaling )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getDebugRenderable(scaling);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->getDebugRenderable(scaling);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real( void *pObjectXXXX, EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode::CDebugRenderable*  _stdcall EarthView_World_Graphic_CNode_getDebugRenderable_CDebugRenderable_Real_NoVirtual(void *pObjectXXXX, _in Real scaling )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CNode::CDebugRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getDebugRenderable(scaling);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_queueNeedUpdate_void_CNode(_in EarthView::World::Graphic::CNode* ref_n )
			{
				EarthView::World::Graphic::CNode::queueNeedUpdate(ref_n);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_processQueuedUpdates_void( )
			{
				EarthView::World::Graphic::CNode::processQueuedUpdates();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNode_getUserObjectBindings_CUserObjectBindings(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CUserObjectBindings& objXXXX = ptrNativeObject->getUserObjectBindings();
				EarthView::World::Graphic::CUserObjectBindings *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_attachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::attachObject(obj);
				else
					ptrNativeObject->attachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_attachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_attachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::attachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::numAttachedObjects();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->numAttachedObjects();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CNode_numAttachedObjects_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::numAttachedObjects();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getAttachedObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getAttachedObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getAttachedObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_getAttachedObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::getAttachedObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_detachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(obj);
				else
					ptrNativeObject->detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_detachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_detachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CNode_detachObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNode::detachObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_detachAllObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::detachAllObjects();
				else
					ptrNativeObject->detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_detachAllObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_detachAllObjects_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_detachAllObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_detachAllObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyChild(name1);
				else
					ptrNativeObject->removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyChild(index);
				else
					ptrNativeObject->removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyChild_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				if (dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyAllChildren();
				else
					ptrNativeObject->removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_Callback* pCallback )
			{
				CNodeProxy* ptr = dynamic_cast<CNodeProxy*>((EarthView::World::Graphic::CNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_removeAndDestroyAllChildren_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNode::removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_focusByCamera_void_ev_bool(void *pObjectXXXX, _in ev_bool focused )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->focusByCamera(focused);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_isFocusedByCamera_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFocusedByCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNode_setIsXSpecialVersionBoneNode_void_ev_bool(void *pObjectXXXX, _in ev_bool isXSpecialVer )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ptrNativeObject->setIsXSpecialVersionBoneNode(isXSpecialVer);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNode_isXSpecialVersionBoneNode_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNode* ptrNativeObject = (EarthView::World::Graphic::CNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isXSpecialVersionBoneNode();
				return objXXXX;
			}
		}
	}
}
