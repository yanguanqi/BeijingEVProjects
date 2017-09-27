/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/tagpoint.h"
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
			class JCTagPointProxy : public EarthView::World::Graphic::CTagPoint
			{
			 private:
				EarthView::World::Core::ev_string m_setDerivedLocalScale_CVector3_callback;
				EarthView::World::Core::ev_string m_setDerivedLocalOrientation_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setDerivedLocalPosition_CVector3_callback;
				EarthView::World::Core::ev_string m_createChildTagPoint_void_callback;
				EarthView::World::Core::ev_string m_createChild_ev_uint16_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_createChild_ev_uint16_CVector3_callback;
				EarthView::World::Core::ev_string m_createChild_ev_uint16_callback;
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
				JCTagPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CTagPoint(pList)
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
				void register_setDerivedLocalScale_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDerivedLocalScale_CVector3_callback = __method;
				}
				void register_setDerivedLocalOrientation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDerivedLocalOrientation_CQuaternion_callback = __method;
				}
				void register_setDerivedLocalPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDerivedLocalPosition_CVector3_callback = __method;
				}
				void register_createChildTagPoint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChildTagPoint_void_callback = __method;
				}
				void register_createChild_ev_uint16_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_ev_uint16_CVector3_CQuaternion_callback = __method;
				}
				void register_createChild_ev_uint16_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_ev_uint16_CVector3_callback = __method;
				}
				void register_createChild_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createChild_ev_uint16_callback = __method;
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
						return this->CTagPoint::_getFullTransform();
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
						return this->CTagPoint::needUpdate(forceParentUpdate);
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
						return this->CTagPoint::needUpdate();
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
						return this->CTagPoint::_setDerivedOrientation(q);
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
						return this->CTagPoint::_setDerivedPosition(pos);
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
						return this->CTagPoint::setScale(scale);
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
						return this->CTagPoint::setOrientation(q);
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
						return this->CTagPoint::setPosition(pos);
					}
				}
				virtual void setDerivedLocalScale(const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if (this->_gRef != NULL && this->m_setDerivedLocalScale_CVector3_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setDerivedLocalScale_CVector3_callback");
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
						return this->CTagPoint::setDerivedLocalScale(scale);
					}
				}
				virtual void setDerivedLocalOrientation(const EarthView::World::Spatial::Math::CQuaternion& q)
				{
					if (this->_gRef != NULL && this->m_setDerivedLocalOrientation_CQuaternion_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setDerivedLocalOrientation_CQuaternion_callback");
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
						return this->CTagPoint::setDerivedLocalOrientation(q);
					}
				}
				virtual void setDerivedLocalPosition(const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if (this->_gRef != NULL && this->m_setDerivedLocalPosition_CVector3_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setDerivedLocalPosition_CVector3_callback");
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
						return this->CTagPoint::setDerivedLocalPosition(pos);
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
						return this->CTagPoint::attachObject(ref_obj);
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
						return this->CTagPoint::numAttachedObjects();
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
						return this->CTagPoint::getAttachedObject(index);
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
						return this->CTagPoint::getAttachedObject(name);
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
						return this->CTagPoint::detachObject(index);
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
						return this->CTagPoint::detachObject(obj);
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
						return this->CTagPoint::detachObject(name);
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
						return this->CTagPoint::detachAllObjects();
					}
				}
				virtual EarthView::World::Graphic::CTagPoint* createChildTagPoint()
				{
					if (this->_gRef != NULL && this->m_createChildTagPoint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createChildTagPoint_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTagPoint *__values1 = (EarthView::World::Graphic::CTagPoint*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTagPoint::createChildTagPoint();
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
						return this->CTagPoint::removeAndDestroyChild(name);
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
						return this->CTagPoint::removeAndDestroyChild(index);
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
						return this->CTagPoint::removeAndDestroyAllChildren();
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
						return this->CTagPoint::createChildImpl();
					}
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
						return this->CTagPoint::updateFromParentImpl();
					}
				}
				virtual EarthView::World::Graphic::CBone* createChild(ev_uint16 handle, const EarthView::World::Spatial::Math::CVector3& translate, const EarthView::World::Spatial::Math::CQuaternion& rotate)
				{
					if (this->_gRef != NULL && this->m_createChild_ev_uint16_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
						jint handle_j = (jint) handle;
						jlong translate_j = (jlong) &translate;
						jlong rotate_j = (jlong) &rotate;
						jmethodID __method = __gr->getMethod("createChild_ev_uint16_CVector3_CQuaternion_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j, translate_j, rotate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTagPoint::createChild(handle, translate, rotate);
					}
				}
				virtual EarthView::World::Graphic::CBone* createChild(ev_uint16 handle, const EarthView::World::Spatial::Math::CVector3& translate)
				{
					if (this->_gRef != NULL && this->m_createChild_ev_uint16_CVector3_callback != "" && this->isCustomExtend())
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
						jint handle_j = (jint) handle;
						jlong translate_j = (jlong) &translate;
						jmethodID __method = __gr->getMethod("createChild_ev_uint16_CVector3_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j, translate_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTagPoint::createChild(handle, translate);
					}
				}
				virtual EarthView::World::Graphic::CBone* createChild(ev_uint16 handle)
				{
					if (this->_gRef != NULL && this->m_createChild_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint handle_j = (jint) handle;
						jmethodID __method = __gr->getMethod("createChild_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTagPoint::createChild(handle);
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
						return this->CTagPoint::_updateFromParent();
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
						return this->CTagPoint::setParent(ref_parent);
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
						return this->CTagPoint::notifyMoved();
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
						return this->CTagPoint::getParent();
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
						return this->CTagPoint::getOrientation();
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
						return this->CTagPoint::resetOrientation();
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
						return this->CTagPoint::getPosition();
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
						return this->CTagPoint::getScale();
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
						return this->CTagPoint::setInheritOrientation(inherit);
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
						return this->CTagPoint::getInheritOrientation();
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
						return this->CTagPoint::setInheritScale(inherit);
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
						return this->CTagPoint::getInheritScale();
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
						return this->CTagPoint::scale(scale);
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
						return this->CTagPoint::scale(x, y, z);
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
						return this->CTagPoint::translate(d, relativeTo);
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
						return this->CTagPoint::translate(d);
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
						return this->CTagPoint::translate(x, y, z, relativeTo);
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
						return this->CTagPoint::translate(x, y, z);
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
						return this->CTagPoint::translate(axes, move, relativeTo);
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
						return this->CTagPoint::translate(axes, move);
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
						return this->CTagPoint::translate(axes, x, y, z, relativeTo);
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
						return this->CTagPoint::translate(axes, x, y, z);
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
						return this->CTagPoint::roll(angle, relativeTo);
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
						return this->CTagPoint::roll(angle);
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
						return this->CTagPoint::pitch(angle, relativeTo);
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
						return this->CTagPoint::pitch(angle);
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
						return this->CTagPoint::yaw(angle, relativeTo);
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
						return this->CTagPoint::yaw(angle);
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
						return this->CTagPoint::rotate(axis, angle, relativeTo);
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
						return this->CTagPoint::rotate(axis, angle);
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
						return this->CTagPoint::rotate(q, relativeTo);
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
						return this->CTagPoint::rotate(q);
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
						return this->CTagPoint::setMatrix(mat);
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
						return this->CTagPoint::getMatrix();
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
						return this->CTagPoint::setLocalMatrix(mat);
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
						return this->CTagPoint::getLocalMatrix();
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
						return this->CTagPoint::getLocalAxes();
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
						return this->CTagPoint::addChild(ref_child);
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
						return this->CTagPoint::numChildren();
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
						return this->CTagPoint::getChild(index);
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
						return this->CTagPoint::getChild(name);
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
						return this->CTagPoint::existChild(name);
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
						return this->CTagPoint::getChildIterator();
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
						return this->CTagPoint::removeChild(index);
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
						return this->CTagPoint::removeChild(child);
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
						return this->CTagPoint::removeChild(name);
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
						return this->CTagPoint::removeAllChildren();
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
						return this->CTagPoint::_getDerivedOrientation();
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
						return this->CTagPoint::_getDerivedPosition();
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
						return this->CTagPoint::_getDerivedScale();
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
						return this->CTagPoint::_update(updateChildren, parentHasChanged);
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
						return this->CTagPoint::addListener(listener);
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
						return this->CTagPoint::removeListener(listener);
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
						return this->CTagPoint::getListener(index);
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
						return this->CTagPoint::getNumListener(index);
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
						return this->CTagPoint::setInitialState();
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
						return this->CTagPoint::resetToInitialState();
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
						return this->CTagPoint::getInitialPosition();
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
						return this->CTagPoint::convertWorldToLocalPosition(worldPos);
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
						return this->CTagPoint::convertLocalToWorldPosition(localPos);
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
						return this->CTagPoint::convertWorldToLocalOrientation(worldOrientation);
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
						return this->CTagPoint::convertLocalToWorldOrientation(localOrientation);
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
						return this->CTagPoint::getInitialOrientation();
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
						return this->CTagPoint::getInitialScale();
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
						return this->CTagPoint::getSquaredViewDepth(cam);
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
						return this->CTagPoint::requestUpdate(ref_child, forceParentUpdate);
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
						return this->CTagPoint::requestUpdate(ref_child);
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
						return this->CTagPoint::cancelUpdate(child);
					}
				}
				virtual EarthView::World::Graphic::CNode::CDebugRenderable* getDebugRenderable(Real scaling)
				{
					if (this->_gRef != NULL && this->m_getDebugRenderable_Real_callback != "" && this->isCustomExtend())
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
						jdouble scaling_j = (jdouble) scaling;
						jmethodID __method = __gr->getMethod("getDebugRenderable_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , scaling_j);
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
						return this->CTagPoint::getDebugRenderable(scaling);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTagPointProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getParentEntity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getParentEntity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setParentEntity_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pEntity_j)
			{
				EarthView::World::Graphic::CMovableObject *ref_pEntity = (EarthView::World::Graphic::CMovableObject*) ref_pEntity_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->setParentEntity(ref_pEntity);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setInheritParentEntityOrientation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->setInheritParentEntityOrientation(inherit);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TagPoint_getInheritParentEntityOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				ev_bool __values1 = pObjectX->getInheritParentEntityOrientation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setInheritParentEntityScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->setInheritParentEntityScale(inherit);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TagPoint_getInheritParentEntityScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				ev_bool __values1 = pObjectX->getInheritParentEntityScale();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getParentEntityTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getParentEntityTransform();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint__1getFullTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::_getFullTransform();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->_getFullTransform();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1getFullTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint__1getFullTransform_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::_getFullTransform();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint__1getFullLocalTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->_getFullLocalTransform();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_needUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceParentUpdate_j)
			{
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::needUpdate(forceParentUpdate);
				}
				else
				{
					pObjectX->needUpdate(forceParentUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1needUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_needUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceParentUpdate_j)
			{
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::needUpdate(forceParentUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_needUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::needUpdate();
				}
				else
				{
					pObjectX->needUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1needUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_needUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::needUpdate();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				const EarthView::World::Graphic::LightList& __values1 = pObjectX->getLights();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint__1setDerivedOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::_setDerivedOrientation(q);
				}
				else
				{
					pObjectX->_setDerivedOrientation(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1setDerivedOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint__1setDerivedOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::_setDerivedOrientation(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint__1setDerivedPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::_setDerivedPosition(pos);
				}
				else
				{
					pObjectX->_setDerivedPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1setDerivedPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint__1setDerivedPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::_setDerivedPosition(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setScale(scale);
				}
				else
				{
					pObjectX->setScale(scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setScale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setScale(scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setOrientation(q);
				}
				else
				{
					pObjectX->setOrientation(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setOrientation(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setPosition(pos);
				}
				else
				{
					pObjectX->setPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setPosition(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalScale(scale);
				}
				else
				{
					pObjectX->setDerivedLocalScale(scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setDerivedLocalScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDerivedLocalScale_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDerivedLocalScale_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalScale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalScale(scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalOrientation(q);
				}
				else
				{
					pObjectX->setDerivedLocalOrientation(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setDerivedLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDerivedLocalOrientation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDerivedLocalOrientation_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalOrientation(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalPosition(pos);
				}
				else
				{
					pObjectX->setDerivedLocalPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setDerivedLocalPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDerivedLocalPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDerivedLocalPosition_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_setDerivedLocalPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::setDerivedLocalPosition(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_attachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
			{
				EarthView::World::Graphic::CMovableObject *ref_obj = (EarthView::World::Graphic::CMovableObject*) ref_obj_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::attachObject(ref_obj);
				}
				else
				{
					pObjectX->attachObject(ref_obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1attachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_attachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
			{
				EarthView::World::Graphic::CMovableObject *ref_obj = (EarthView::World::Graphic::CMovableObject*) ref_obj_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::attachObject(ref_obj);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TagPoint_numAttachedObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::numAttachedObjects();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1numAttachedObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TagPoint_numAttachedObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::numAttachedObjects();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getAttachedObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::getAttachedObject(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getAttachedObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getAttachedObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::getAttachedObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getAttachedObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::getAttachedObject(name);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getAttachedObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_getAttachedObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::getAttachedObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1detachObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(obj);
				}
				else
				{
					pObjectX->detachObject(obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1detachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(obj);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(name);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1detachObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_detachObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::detachObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_detachAllObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::detachAllObjects();
				}
				else
				{
					pObjectX->detachAllObjects();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1detachAllObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_detachAllObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::detachAllObjects();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_createChildTagPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CTagPoint* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::createChildTagPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CTagPoint* __values1 = pObjectX->createChildTagPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChildTagPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChildTagPoint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChildTagPoint_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_createChildTagPoint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CTagPoint* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::createChildTagPoint();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(name);
				}
				else
				{
					pObjectX->removeAndDestroyChild(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeAndDestroyChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyChild_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(index);
				}
				else
				{
					pObjectX->removeAndDestroyChild(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeAndDestroyChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyChild_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyChild(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyAllChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyAllChildren();
				}
				else
				{
					pObjectX->removeAndDestroyAllChildren();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeAndDestroyAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_removeAndDestroyAllChildren_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::removeAndDestroyAllChildren();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_createChildImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::createChildImpl();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChildImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TagPoint_createChildImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CTagPoint::createChildImpl();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_updateFromParentImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTagPointProxy))
				{
					pObjectX->EarthView::World::Graphic::CTagPoint::updateFromParentImpl();
				}
				else
				{
					pObjectX->updateFromParentImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1updateFromParentImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_updateFromParentImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTagPoint *pObjectX = (EarthView::World::Graphic::CTagPoint*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTagPoint::updateFromParentImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1ev_1uint16_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_ev_uint16_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_ev_uint16_CVector3_CQuaternion_callback", "(IJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1ev_1uint16_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_ev_uint16_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_ev_uint16_CVector3_callback", "(IJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createChild_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createChild_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1updateFromParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setParent_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChildImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1notifyMoved_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setOrientation_1Real_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setOrientation_1Real_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1resetOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setPosition_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setPosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setScale_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setScale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setScale_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setInheritOrientation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getInheritOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setInheritScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getInheritScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1scale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1scale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CMatrix3_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CMatrix3_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CMatrix3_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1translate_1CMatrix3_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1roll_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1roll_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1pitch_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1pitch_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1yaw_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1yaw_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1rotate_1CVector3_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1rotate_1CVector3_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1rotate_1CQuaternion_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1rotate_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setLocalMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getLocalMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getLocalAxes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1EVString_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1EVString_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1createChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1addChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1numChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1existChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getChildIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1setDerivedPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1setDerivedOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1getDerivedOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1getDerivedPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1getDerivedScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1_1update_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1addListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1removeListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getNumListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1setInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1resetToInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getInitialPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1convertWorldToLocalPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1convertLocalToWorldPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1convertWorldToLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1convertLocalToWorldOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getInitialOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getInitialScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1requestUpdate_1CNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1requestUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1cancelUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TagPoint_register_1getDebugRenderable_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTagPointProxy *pObjectX = (JCTagPointProxy*) pObjXXXX;
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
