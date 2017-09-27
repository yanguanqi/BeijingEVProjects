/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/tagpoint.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback)(_in const void* pos);
			typedef EarthView::World::Graphic::CTagPoint*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback)();
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback)(_in ev_uint16 handle, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback)(_in ev_uint16 handle, _in const void* translate);
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback)(_in ev_uint16 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback)(_in Real w, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback)(_in Real w, _in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback)(_in const void* scale, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback)(_in Real x, _in Real y, _in Real z, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback)(_in ev_bool inherit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback)(_in const void* scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback)(_in const void* d, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback)(_in const void* d);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback)(_in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback)(_in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback)(_in const void* axes, _in const void* move, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback)(_in const void* axes, _in const void* move);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback)(_in const void* axes, _in Real x, _in Real y, _in Real z);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback)(_in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback)(_in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback)(_in const void* axis, _in const void* angle, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback)(_in const void* axis, _in const void* angle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback)(_in const void* q, _in int relativeTo);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback)(_in const void* mat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback)(_in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback)(_in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback)(_in char*& name, _in const void* translate, _in const void* rotate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback)(_in char*& name, _in const void* translate);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback)(_in const void* pos);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback)(_in const void* pos, _in ev_bool notify);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback)(_in const void* q);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback)(_in const void* q, _in ev_bool notify);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback)(_in ev_bool updateChildren, _in ev_bool parentHasChanged);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback)(_in EarthView::World::Graphic::CNode::CNodeListener* listener);
			typedef EarthView::World::Graphic::CNode::CNodeListener*  ( _stdcall EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback)(_in const void* worldPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback)(_in const void* localPos);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback)(_in const void* worldOrientation);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback)(_in const void* localOrientation);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback)(_in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_child);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* child);
			typedef EarthView::World::Graphic::CNode::CDebugRenderable*  ( _stdcall EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback)(_in Real scaling);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback)();
			class CTagPointProxy : public EarthView::World::Graphic::CTagPoint
			{
			private:
				EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback* m_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback* m_EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback;
				EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback* m_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback;
				EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback* m_EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback;
				EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback* m_EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback;
				EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback* m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback;
				EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback* m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback;
				EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback* m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback;
				EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback* m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback;
				EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback* m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback;
				EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback* m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback;
				EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback* m_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback* m_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback;
				EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback* m_EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback;
				EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback* m_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback;
				EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback* m_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback;
				EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback* m_EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback;
				EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback* m_EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback;
				EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback* m_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback;
				EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback* m_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback;
				EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback* m_EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback;
				EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback* m_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback;
				EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback* m_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback;
				EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback* m_EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback;
				EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback* m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback;
				EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback* m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback;
				EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback* m_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback;
			public:
				CTagPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CTagPoint(pList)
				{
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3(EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion(EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3(EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint(EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion(EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3(EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16(EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__updateFromParent_void(EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setParent_void_CNode(EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void(EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode(EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString(EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_notifyMoved_void(EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getParent_CNode(EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion(EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion(EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real(EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool(EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_resetOrientation_void(EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3(EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real(EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getPosition_CVector3(EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3(EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool(EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real(EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool(EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getScale_CVector3(EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool(EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool(EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool(EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool(EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_scale_void_CVector3(EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real(EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace(EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3(EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real(EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace(EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3(EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace(EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real(EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace(EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian(EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace(EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian(EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace(EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian(EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace(EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian(EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace(EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion(EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4(EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4(EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4(EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4(EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3(EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion(EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3(EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode(EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion(EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3(EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString(EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_addChild_void_CNode(EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16(EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16(EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString(EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString(EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator(EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16(EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode(EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString(EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeAllChildren_void(EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3(EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool(EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion(EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool(EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion(EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3(EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3(EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4(EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool(EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener(EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener(EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32(EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32(EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_setInitialState_void(EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_resetToInitialState_void(EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3(EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3(EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3(EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion(EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion(EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3(EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool(EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void(EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool(EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode(EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode(EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real(EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject(EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16(EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString(EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16(EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject(EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString(EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_detachAllObjects_void(EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString(EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16(EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void(EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getFullTransform() const
				{
					if(m_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::_getFullTransform();
				}
				virtual void needUpdate(_in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback(forceParentUpdate);
					}
					else
						return this->CTagPoint::needUpdate(forceParentUpdate);
				}
				virtual void needUpdate()
				{
					if(m_EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback();
					}
					else
						return this->CTagPoint::needUpdate();
				}
				virtual void _setDerivedOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CTagPoint::_setDerivedOrientation(q);
				}
				virtual void _setDerivedPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CTagPoint::_setDerivedPosition(pos);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback(&scale);
					}
					else
						return this->CTagPoint::setScale(scale);
				}
				virtual void setOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CTagPoint::setOrientation(q);
				}
				virtual void setPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CTagPoint::setPosition(pos);
				}
				virtual void setDerivedLocalScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback(&scale);
					}
					else
						return this->CTagPoint::setDerivedLocalScale(scale);
				}
				virtual void setDerivedLocalOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback(&q);
					}
					else
						return this->CTagPoint::setDerivedLocalOrientation(q);
				}
				virtual void setDerivedLocalPosition(_in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback(&pos);
					}
					else
						return this->CTagPoint::setDerivedLocalPosition(pos);
				}
				virtual void attachObject(_in EarthView::World::Graphic::CMovableObject* ref_obj)
				{
					if(m_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback(ref_obj);
					}
					else
						return this->CTagPoint::attachObject(ref_obj);
				}
				virtual ev_uint16 numAttachedObjects() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::numAttachedObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::getAttachedObject(index);
				}
				virtual EarthView::World::Graphic::CMovableObject* getAttachedObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTagPoint::getAttachedObject(name);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::detachObject(index);
				}
				virtual void detachObject(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback(obj);
					}
					else
						return this->CTagPoint::detachObject(obj);
				}
				virtual EarthView::World::Graphic::CMovableObject* detachObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTagPoint::detachObject(name);
				}
				virtual void detachAllObjects()
				{
					if(m_EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback();
					}
					else
						return this->CTagPoint::detachAllObjects();
				}
				virtual EarthView::World::Graphic::CTagPoint* createChildTagPoint()
				{
					if(m_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTagPoint* returnValue = m_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::createChildTagPoint();
				}
				virtual void removeAndDestroyChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback(name_Char);
					}
					else
						return this->CTagPoint::removeAndDestroyChild(name);
				}
				virtual void removeAndDestroyChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback(index);
					}
					else
						return this->CTagPoint::removeAndDestroyChild(index);
				}
				virtual void removeAndDestroyAllChildren()
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback();
					}
					else
						return this->CTagPoint::removeAndDestroyAllChildren();
				}
				virtual EarthView::World::Graphic::CNode* createChildImpl()
				{
					if(m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::createChildImpl();
				}
				virtual void updateFromParentImpl() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback();
					}
					else
						return this->CTagPoint::updateFromParentImpl();
				}
				virtual EarthView::World::Graphic::CBone* createChild(_in ev_uint16 handle, _in const EarthView::World::Spatial::Math::CVector3& translate, _in const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if(m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback(handle, &translate, &rotate);
						return returnValue;
					}
					else
						return this->CTagPoint::createChild(handle, translate, rotate);
				}
				virtual EarthView::World::Graphic::CBone* createChild(_in ev_uint16 handle, _in const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if(m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback(handle, &translate);
						return returnValue;
					}
					else
						return this->CTagPoint::createChild(handle, translate);
				}
				virtual EarthView::World::Graphic::CBone* createChild(_in ev_uint16 handle)
				{
					if(m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback(handle);
						return returnValue;
					}
					else
						return this->CTagPoint::createChild(handle);
				}
				virtual void _updateFromParent() const
				{
					if(m_EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback();
					}
					else
						return this->CTagPoint::_updateFromParent();
				}
				virtual void setParent(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback(ref_parent);
					}
					else
						return this->CTagPoint::setParent(ref_parent);
				}
				virtual void notifyMoved() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback();
					}
					else
						return this->CTagPoint::notifyMoved();
				}
				virtual EarthView::World::Graphic::CNode* getParent() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getParent();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientation() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getOrientation();
				}
				virtual void resetOrientation()
				{
					if(m_EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback();
					}
					else
						return this->CTagPoint::resetOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getPosition();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getScale();
				}
				virtual void setInheritOrientation(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback(inherit);
					}
					else
						return this->CTagPoint::setInheritOrientation(inherit);
				}
				virtual ev_bool getInheritOrientation() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getInheritOrientation();
				}
				virtual void setInheritScale(_in ev_bool inherit)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback(inherit);
					}
					else
						return this->CTagPoint::setInheritScale(inherit);
				}
				virtual ev_bool getInheritScale() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getInheritScale();
				}
				virtual void scale(_in const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if(m_EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback(&scale);
					}
					else
						return this->CTagPoint::scale(scale);
				}
				virtual void scale(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CTagPoint::scale(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback(&d, (int)relativeTo);
					}
					else
						return this->CTagPoint::translate(d, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CVector3& d)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback(&d);
					}
					else
						return this->CTagPoint::translate(d);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback(x, y, z, (int)relativeTo);
					}
					else
						return this->CTagPoint::translate(x, y, z, relativeTo);
				}
				virtual void translate(_in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback(x, y, z);
					}
					else
						return this->CTagPoint::translate(x, y, z);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback(&axes, &move, (int)relativeTo);
					}
					else
						return this->CTagPoint::translate(axes, move, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in const EarthView::World::Spatial::Math::CVector3& move)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback(&axes, &move);
					}
					else
						return this->CTagPoint::translate(axes, move);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback(&axes, x, y, z, (int)relativeTo);
					}
					else
						return this->CTagPoint::translate(axes, x, y, z, relativeTo);
				}
				virtual void translate(_in const EarthView::World::Spatial::Math::CMatrix3& axes, _in Real x, _in Real y, _in Real z)
				{
					if(m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback(&axes, x, y, z);
					}
					else
						return this->CTagPoint::translate(axes, x, y, z);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CTagPoint::roll(angle, relativeTo);
				}
				virtual void roll(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback(&angle);
					}
					else
						return this->CTagPoint::roll(angle);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CTagPoint::pitch(angle, relativeTo);
				}
				virtual void pitch(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback(&angle);
					}
					else
						return this->CTagPoint::pitch(angle);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback(&angle, (int)relativeTo);
					}
					else
						return this->CTagPoint::yaw(angle, relativeTo);
				}
				virtual void yaw(_in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback(&angle);
					}
					else
						return this->CTagPoint::yaw(angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback(&axis, &angle, (int)relativeTo);
					}
					else
						return this->CTagPoint::rotate(axis, angle, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CVector3& axis, _in const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if(m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback(&axis, &angle);
					}
					else
						return this->CTagPoint::rotate(axis, angle);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q, _in EarthView::World::Graphic::CNode::TransformSpace relativeTo)
				{
					if(m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback(&q, (int)relativeTo);
					}
					else
						return this->CTagPoint::rotate(q, relativeTo);
				}
				virtual void rotate(_in const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if(m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback(&q);
					}
					else
						return this->CTagPoint::rotate(q);
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CTagPoint::setMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getMatrix();
				}
				virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if(m_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback(&mat);
					}
					else
						return this->CTagPoint::setLocalMatrix(mat);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getLocalMatrix();
				}
				virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix3 returnValue = *(EarthView::World::Spatial::Math::CMatrix3*)m_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getLocalAxes();
				}
				virtual void addChild(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback(ref_child);
					}
					else
						return this->CTagPoint::addChild(ref_child);
				}
				virtual ev_uint16 numChildren() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::numChildren();
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::getChild(index);
				}
				virtual EarthView::World::Graphic::CNode* getChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTagPoint::getChild(name);
				}
				virtual ev_bool existChild(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTagPoint::existChild(name);
				}
				virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator()
				{
					if(m_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::ChildNodeIterator returnValue = *(EarthView::World::Graphic::CNode::ChildNodeIterator*)m_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getChildIterator();
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::removeChild(index);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback(child);
						return returnValue;
					}
					else
						return this->CTagPoint::removeChild(child);
				}
				virtual EarthView::World::Graphic::CNode* removeChild(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTagPoint::removeChild(name);
				}
				virtual void removeAllChildren()
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback();
					}
					else
						return this->CTagPoint::removeAllChildren();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& _getDerivedOrientation() const
				{
					if(m_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::_getDerivedOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedPosition() const
				{
					if(m_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::_getDerivedPosition();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& _getDerivedScale() const
				{
					if(m_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::_getDerivedScale();
				}
				virtual void _update(_in ev_bool updateChildren, _in ev_bool parentHasChanged)
				{
					if(m_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback(updateChildren, parentHasChanged);
					}
					else
						return this->CTagPoint::_update(updateChildren, parentHasChanged);
				}
				virtual void addListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CTagPoint::addListener(listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CNode::CNodeListener* listener)
				{
					if(m_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback(listener);
					}
					else
						return this->CTagPoint::removeListener(listener);
				}
				virtual EarthView::World::Graphic::CNode::CNodeListener* getListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CNodeListener* returnValue = m_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::getListener(index);
				}
				virtual ev_uint32 getNumListener(_in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CTagPoint::getNumListener(index);
				}
				virtual void setInitialState()
				{
					if(m_EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback();
					}
					else
						return this->CTagPoint::setInitialState();
				}
				virtual void resetToInitialState()
				{
					if(m_EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback();
					}
					else
						return this->CTagPoint::resetToInitialState();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialPosition() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getInitialPosition();
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition(_in const EarthView::World::Spatial::Math::CVector3& worldPos)
				{
					if(m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback(&worldPos);
						return returnValue;
					}
					else
						return this->CTagPoint::convertWorldToLocalPosition(worldPos);
				}
				virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition(_in const EarthView::World::Spatial::Math::CVector3& localPos)
				{
					if(m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback(&localPos);
						return returnValue;
					}
					else
						return this->CTagPoint::convertLocalToWorldPosition(localPos);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& worldOrientation)
				{
					if(m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback(&worldOrientation);
						return returnValue;
					}
					else
						return this->CTagPoint::convertWorldToLocalOrientation(worldOrientation);
				}
				virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation(_in const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if(m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback(&localOrientation);
						return returnValue;
					}
					else
						return this->CTagPoint::convertLocalToWorldOrientation(localOrientation);
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getInitialOrientation() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getInitialOrientation();
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getInitialScale() const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CTagPoint::getInitialScale();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CTagPoint::getSquaredViewDepth(cam);
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child, _in ev_bool forceParentUpdate)
				{
					if(m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback(ref_child, forceParentUpdate);
					}
					else
						return this->CTagPoint::requestUpdate(ref_child, forceParentUpdate);
				}
				virtual void requestUpdate(_in EarthView::World::Graphic::CNode* ref_child)
				{
					if(m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback(ref_child);
					}
					else
						return this->CTagPoint::requestUpdate(ref_child);
				}
				virtual void cancelUpdate(_in EarthView::World::Graphic::CNode* child)
				{
					if(m_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback(child);
					}
					else
						return this->CTagPoint::cancelUpdate(child);
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable(_in Real scaling)
				{
					if(m_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode::CDebugRenderable* returnValue = m_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback(scaling);
						return returnValue;
					}
					else
						return this->CTagPoint::getDebugRenderable(scaling);
				}
			};
			REGISTER_FACTORY_CLASS(CTagPointProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_getParentEntity_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getParentEntity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setParentEntity_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_pEntity )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->setParentEntity(ref_pEntity);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setInheritParentEntityOrientation_void_ev_bool(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->setInheritParentEntityOrientation(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTagPoint_getInheritParentEntityOrientation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getInheritParentEntityOrientation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setInheritParentEntityScale_void_ev_bool(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->setInheritParentEntityScale(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTagPoint_getInheritParentEntityScale_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getInheritParentEntityScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTagPoint_getParentEntityTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getParentEntityTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::_getFullTransform();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTagPoint__getFullTransform_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::_getFullTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTagPoint__getFullLocalTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getFullLocalTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::needUpdate(forceParentUpdate);
				else
					ptrNativeObject->needUpdate(forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceParentUpdate )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::needUpdate(forceParentUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::needUpdate();
				else
					ptrNativeObject->needUpdate();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_needUpdate_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_needUpdate_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_needUpdate_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::needUpdate();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTagPoint_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::_setDerivedOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::_setDerivedPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				else
					ptrNativeObject->setDerivedLocalScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
				else
					ptrNativeObject->setDerivedLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalOrientation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->setDerivedLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_setDerivedLocalPosition_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::setDerivedLocalPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_obj )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::attachObject(ref_obj);
				else
					ptrNativeObject->attachObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_attachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* ref_obj )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::attachObject(ref_obj);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::numAttachedObjects();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->numAttachedObjects();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTagPoint_numAttachedObjects_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::numAttachedObjects();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::getAttachedObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::getAttachedObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::getAttachedObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getAttachedObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_getAttachedObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::getAttachedObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(obj);
				else
					ptrNativeObject->detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(obj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->detachObject(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CTagPoint_detachObject_CMovableObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachObject(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_detachAllObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachAllObjects();
				else
					ptrNativeObject->detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_detachAllObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_detachAllObjects_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_detachAllObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_detachAllObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::detachAllObjects();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTagPoint*  _stdcall EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTagPoint* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::createChildTagPoint();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTagPoint* objXXXX = ptrNativeObject->createChildTagPoint();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTagPoint*  _stdcall EarthView_World_Graphic_CTagPoint_createChildTagPoint_CTagPoint_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CTagPoint* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::createChildTagPoint();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(name1);
				else
					ptrNativeObject->removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(index);
				else
					ptrNativeObject->removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyChild_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyAllChildren();
				else
					ptrNativeObject->removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_removeAndDestroyAllChildren_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::removeAndDestroyAllChildren();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CTagPoint_createChildImpl_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::createChildImpl();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createChildImpl();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTagPoint::createChildImpl();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				if (dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTagPoint::updateFromParentImpl();
				else
					ptrNativeObject->updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTagPoint_updateFromParentImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTagPoint* ptrNativeObject = (EarthView::World::Graphic::CTagPoint*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTagPoint::updateFromParentImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CBone_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__updateFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__updateFromParent_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__updateFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setParent_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setParent_void_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setParent_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChildImpl_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_notifyMoved_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getParent_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getParent_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getParent_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setOrientation_void_Real_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_resetOrientation_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_resetOrientation_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_resetOrientation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setPosition_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getPosition_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setScale_void_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getScale_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setInheritOrientation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getInheritOrientation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setInheritScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getInheritScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_scale_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_scale_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_scale_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_scale_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_translate_void_CMatrix3_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_roll_void_CRadian_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_roll_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_pitch_void_CRadian_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_pitch_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_yaw_void_CRadian_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_yaw_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CVector3_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_TransformSpace(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_rotate_void_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setLocalMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getLocalMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getLocalAxes_CMatrix3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_createChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_addChild_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_addChild_void_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_addChild_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_numChildren_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_existChild_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getChildIterator_ChildNodeIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeChild_CNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeAllChildren_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeAllChildren_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeAllChildren_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedPosition_void_CVector3_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__setDerivedOrientation_void_CQuaternion_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__getDerivedScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint__update_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_addListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_removeListener_void_CNodeListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getListener_CNodeListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getNumListener_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_setInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_setInitialState_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_setInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_resetToInitialState_void( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_resetToInitialState_void_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_resetToInitialState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getInitialPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldPosition_CVector3_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_convertWorldToLocalOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_convertLocalToWorldOrientation_CQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getInitialOrientation_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getInitialScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_requestUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_cancelUpdate_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real( void *pObjectXXXX, EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real_Callback* pCallback )
			{
				CTagPointProxy* ptr = dynamic_cast<CTagPointProxy*>((EarthView::World::Graphic::CTagPoint*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTagPoint_getDebugRenderable_CDebugRenderable_Real(pCallback);
				}
			}
		}
	}
}
