/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/node.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
			class JCNodeProxy : public EarthView::World::Graphic::CNode
			{
			 private:
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
				JCNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CNode(pList)
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
						return this->CNode::_updateFromParent();
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
						return this->CNode::setParent(ref_parent);
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
						return this->CNode::updateFromParentImpl();
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
						return this->CNode::createChildImpl();
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
						return this->CNode::createChildImpl(name);
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
						return this->CNode::notifyMoved();
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
						return this->CNode::getParent();
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
						return this->CNode::getOrientation();
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
						return this->CNode::setOrientation(q);
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
						return this->CNode::setOrientation(q, notify);
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
						return this->CNode::setOrientation(w, x, y, z);
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
						return this->CNode::setOrientation(w, x, y, z, notify);
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
						return this->CNode::resetOrientation();
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
						return this->CNode::setPosition(pos);
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
						return this->CNode::setPosition(pos, notify);
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
						return this->CNode::setPosition(x, y, z);
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
						return this->CNode::setPosition(x, y, z, notify);
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
						return this->CNode::getPosition();
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
						return this->CNode::setScale(scale);
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
						return this->CNode::setScale(scale, notify);
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
						return this->CNode::setScale(x, y, z);
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
						return this->CNode::setScale(x, y, z, notify);
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
						return this->CNode::getScale();
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
						return this->CNode::setInheritOrientation(inherit);
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
						return this->CNode::getInheritOrientation();
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
						return this->CNode::setInheritScale(inherit);
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
						return this->CNode::getInheritScale();
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
						return this->CNode::scale(scale);
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
						return this->CNode::scale(x, y, z);
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
						return this->CNode::translate(d, relativeTo);
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
						return this->CNode::translate(d);
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
						return this->CNode::translate(x, y, z, relativeTo);
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
						return this->CNode::translate(x, y, z);
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
						return this->CNode::translate(axes, move, relativeTo);
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
						return this->CNode::translate(axes, move);
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
						return this->CNode::translate(axes, x, y, z, relativeTo);
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
						return this->CNode::translate(axes, x, y, z);
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
						return this->CNode::roll(angle, relativeTo);
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
						return this->CNode::roll(angle);
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
						return this->CNode::pitch(angle, relativeTo);
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
						return this->CNode::pitch(angle);
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
						return this->CNode::yaw(angle, relativeTo);
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
						return this->CNode::yaw(angle);
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
						return this->CNode::rotate(axis, angle, relativeTo);
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
						return this->CNode::rotate(axis, angle);
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
						return this->CNode::rotate(q, relativeTo);
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
						return this->CNode::rotate(q);
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
						return this->CNode::setMatrix(mat);
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
						return this->CNode::getMatrix();
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
						return this->CNode::setLocalMatrix(mat);
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
						return this->CNode::getLocalMatrix();
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
						return this->CNode::getLocalAxes();
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
						return this->CNode::createChild(translate, rotate);
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
						return this->CNode::createChild(translate);
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
						return this->CNode::createChild();
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
						return this->CNode::createChild(name, translate, rotate);
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
						return this->CNode::createChild(name, translate);
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
						return this->CNode::createChild(name);
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
						return this->CNode::addChild(ref_child);
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
						return this->CNode::numChildren();
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
						return this->CNode::getChild(index);
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
						return this->CNode::getChild(name);
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
						return this->CNode::existChild(name);
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
						return this->CNode::getChildIterator();
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
						return this->CNode::removeChild(index);
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
						return this->CNode::removeChild(child);
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
						return this->CNode::removeChild(name);
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
						return this->CNode::removeAllChildren();
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
						return this->CNode::_setDerivedPosition(pos);
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
						return this->CNode::_setDerivedPosition(pos, notify);
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
						return this->CNode::_setDerivedOrientation(q);
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
						return this->CNode::_setDerivedOrientation(q, notify);
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
						return this->CNode::_getDerivedOrientation();
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
						return this->CNode::_getDerivedPosition();
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
						return this->CNode::_getDerivedScale();
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
						return this->CNode::_getFullTransform();
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
						return this->CNode::_update(updateChildren, parentHasChanged);
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
						return this->CNode::addListener(listener);
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
						return this->CNode::removeListener(listener);
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
						return this->CNode::getListener(index);
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
						return this->CNode::getNumListener(index);
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
						return this->CNode::setInitialState();
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
						return this->CNode::resetToInitialState();
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
						return this->CNode::getInitialPosition();
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
						return this->CNode::convertWorldToLocalPosition(worldPos);
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
						return this->CNode::convertLocalToWorldPosition(localPos);
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
						return this->CNode::convertWorldToLocalOrientation(worldOrientation);
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
						return this->CNode::convertLocalToWorldOrientation(localOrientation);
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
						return this->CNode::getInitialOrientation();
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
						return this->CNode::getInitialScale();
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
						return this->CNode::getSquaredViewDepth(cam);
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
						return this->CNode::needUpdate(forceParentUpdate);
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
						return this->CNode::needUpdate();
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
						return this->CNode::requestUpdate(ref_child, forceParentUpdate);
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
						return this->CNode::requestUpdate(ref_child);
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
						return this->CNode::cancelUpdate(child);
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
						return this->CNode::getDebugRenderable(scaling);
					}
				}
				virtual void attachObject(EarthView::World::Graphic::CMovableObject* obj)
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
						jlong obj_j = (jlong) obj;
						jmethodID __method = __gr->getMethod("attachObject_CMovableObject_callback");
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
						return this->CNode::attachObject(obj);
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
						return this->CNode::numAttachedObjects();
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
						return this->CNode::getAttachedObject(index);
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
						return this->CNode::getAttachedObject(name);
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
						return this->CNode::detachObject(index);
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
						return this->CNode::detachObject(obj);
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
						return this->CNode::detachObject(name);
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
						return this->CNode::detachAllObjects();
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
						return this->CNode::removeAndDestroyChild(name);
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
						return this->CNode::removeAndDestroyChild(index);
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
						return this->CNode::removeAndDestroyAllChildren();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNodeProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Node_00024TransformSpaceHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CNode::TS_LOCAL,
					CNode::TS_PARENT,
					CNode::TS_WORLD
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_push_1EVString_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
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
				EarthView::World::Graphic::CNode *&ref_val = *(EarthView::World::Graphic::CNode**) ref_val_j;
				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CNode::ChildNodeMap& pObjectX = *(EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CNode*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				EarthView::World::Graphic::CNode*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ChildNodeMap *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Node_00024StringChildNodePair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::StringChildNodePair *pObjectX = (EarthView::World::Graphic::CNode::StringChildNodePair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024StringChildNodePair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CNode::StringChildNodePair *pObjectX = (EarthView::World::Graphic::CNode::StringChildNodePair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024StringChildNodePair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::StringChildNodePair *pObjectX = (EarthView::World::Graphic::CNode::StringChildNodePair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024StringChildNodePair_set_1second_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CNode::StringChildNodePair *pObjectX = (EarthView::World::Graphic::CNode::StringChildNodePair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CNode*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ChildNodeIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024ConstChildNodeIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::ConstChildNodeIterator *pObjectX = (EarthView::World::Graphic::CNode::ConstChildNodeIterator*) pObjXXXX;
				const EarthView::World::Graphic::CNode::StringChildNodePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCNodeListenerProxy : public EarthView::World::Graphic::CNode::CNodeListener
			{
			 private:
				EarthView::World::Core::ev_string m_nodeUpdated_CNode_callback;
				EarthView::World::Core::ev_string m_nodeDestroyed_CNode_callback;
				EarthView::World::Core::ev_string m_nodeAttached_CNode_callback;
				EarthView::World::Core::ev_string m_nodeDetached_CNode_callback;
				EarthView::World::Core::ev_string m_nodeMoved_CNode_callback;
			public:
				JCNodeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeListener(pList)
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
				void register_nodeUpdated_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_nodeUpdated_CNode_callback = __method;
				}
				void register_nodeDestroyed_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_nodeDestroyed_CNode_callback = __method;
				}
				void register_nodeAttached_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_nodeAttached_CNode_callback = __method;
				}
				void register_nodeDetached_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_nodeDetached_CNode_callback = __method;
				}
				void register_nodeMoved_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_nodeMoved_CNode_callback = __method;
				}
				virtual void nodeUpdated(const EarthView::World::Graphic::CNode* pNode)
				{
					if (this->_gRef != NULL && this->m_nodeUpdated_CNode_callback != "" && this->isCustomExtend())
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
						jlong pNode_j = (jlong) pNode;
						jmethodID __method = __gr->getMethod("nodeUpdated_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pNode_j);
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
						return this->CNodeListener::nodeUpdated(pNode);
					}
				}
				virtual void nodeDestroyed(const EarthView::World::Graphic::CNode* pNode)
				{
					if (this->_gRef != NULL && this->m_nodeDestroyed_CNode_callback != "" && this->isCustomExtend())
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
						jlong pNode_j = (jlong) pNode;
						jmethodID __method = __gr->getMethod("nodeDestroyed_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pNode_j);
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
						return this->CNodeListener::nodeDestroyed(pNode);
					}
				}
				virtual void nodeAttached(const EarthView::World::Graphic::CNode* pNode)
				{
					if (this->_gRef != NULL && this->m_nodeAttached_CNode_callback != "" && this->isCustomExtend())
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
						jlong pNode_j = (jlong) pNode;
						jmethodID __method = __gr->getMethod("nodeAttached_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pNode_j);
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
						return this->CNodeListener::nodeAttached(pNode);
					}
				}
				virtual void nodeDetached(const EarthView::World::Graphic::CNode* pNode)
				{
					if (this->_gRef != NULL && this->m_nodeDetached_CNode_callback != "" && this->isCustomExtend())
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
						jlong pNode_j = (jlong) pNode;
						jmethodID __method = __gr->getMethod("nodeDetached_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pNode_j);
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
						return this->CNodeListener::nodeDetached(pNode);
					}
				}
				virtual void nodeMoved(const EarthView::World::Graphic::CNode* pNode)
				{
					if (this->_gRef != NULL && this->m_nodeMoved_CNode_callback != "" && this->isCustomExtend())
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
						jlong pNode_j = (jlong) pNode;
						jmethodID __method = __gr->getMethod("nodeMoved_CNode_callback");
						__env->CallVoidMethod(__obj, __method , pNode_j);
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
						return this->CNodeListener::nodeMoved(pNode);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNodeListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeUpdated_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeUpdated(pNode);
				}
				else
				{
					pObjectX->nodeUpdated(pNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_register_1nodeUpdated_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeListenerProxy *pObjectX = (JCNodeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_nodeUpdated_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"nodeUpdated_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeUpdated_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeUpdated(pNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeDestroyed_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeDestroyed(pNode);
				}
				else
				{
					pObjectX->nodeDestroyed(pNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_register_1nodeDestroyed_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeListenerProxy *pObjectX = (JCNodeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_nodeDestroyed_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"nodeDestroyed_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeDestroyed_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeDestroyed(pNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeAttached_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeAttached(pNode);
				}
				else
				{
					pObjectX->nodeAttached(pNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_register_1nodeAttached_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeListenerProxy *pObjectX = (JCNodeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_nodeAttached_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"nodeAttached_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeAttached_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeAttached(pNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeDetached_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeDetached(pNode);
				}
				else
				{
					pObjectX->nodeDetached(pNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_register_1nodeDetached_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeListenerProxy *pObjectX = (JCNodeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_nodeDetached_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"nodeDetached_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeDetached_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeDetached(pNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeMoved_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeMoved(pNode);
				}
				else
				{
					pObjectX->nodeMoved(pNode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_register_1nodeMoved_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeListenerProxy *pObjectX = (JCNodeListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_nodeMoved_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"nodeMoved_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListener_nodeMoved_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pNode_j)
			{
				const EarthView::World::Graphic::CNode *pNode = (const EarthView::World::Graphic::CNode*) pNode_j;
				EarthView::World::Graphic::CNode::CNodeListener *pObjectX = (EarthView::World::Graphic::CNode::CNodeListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CNodeListener::nodeMoved(pNode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_push_1back_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CNode::CNodeListener *&ref_t = *(EarthView::World::Graphic::CNode::CNodeListener**) ref_t_j;
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				EarthView::World::Graphic::CNode::CNodeListener*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				EarthView::World::Graphic::CNode::CNodeListener*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				EarthView::World::Graphic::CNode::CNodeListener*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_insert_1ev_1uint32_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CNode::CNodeListener *&ref_t = *(EarthView::World::Graphic::CNode::CNodeListener**) ref_t_j;
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024NodeListenerVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CNode::NodeListenerVector *pObjectX = (EarthView::World::Graphic::CNode::NodeListenerVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			class JCDebugRenderableProxy : public EarthView::World::Graphic::CNode::CDebugRenderable
			{
			 private:
				EarthView::World::Core::ev_string m_getMaterial_void_callback;
				EarthView::World::Core::ev_string m_getTechnique_void_callback;
				EarthView::World::Core::ev_string m_getRenderOperation_CRenderOperation_callback;
				EarthView::World::Core::ev_string m_preRender_CSceneManager_CRenderSystem_callback;
				EarthView::World::Core::ev_string m_postRender_CSceneManager_CRenderSystem_callback;
				EarthView::World::Core::ev_string m_getWorldTransforms_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getNumWorldTransforms_void_callback;
				EarthView::World::Core::ev_string m_getSquaredViewDepth_CCamera_callback;
				EarthView::World::Core::ev_string m_getLights_void_callback;
				EarthView::World::Core::ev_string m_getCastsShadows_void_callback;
				EarthView::World::Core::ev_string m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback;
				EarthView::World::Core::ev_string m_setPolygonModeOverrideable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getPolygonModeOverrideable_void_callback;
				EarthView::World::Core::ev_string m_setCustomAmbient_CColourValue_callback;
				EarthView::World::Core::ev_string m_getCustomAmbient_void_callback;
				EarthView::World::Core::ev_string m_getCustomAmbientEnabled_void_callback;
				EarthView::World::Core::ev_string m_setCustomAmbientEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getMovableObject_void_callback;
				EarthView::World::Core::ev_string m_addListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_existListener_CRenderableListener_callback;
				EarthView::World::Core::ev_string m_getListenerCount_void_callback;
				EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getRenderSystemData_void_callback;
				EarthView::World::Core::ev_string m_setRenderSystemData_CRenderSystemData_callback;
			public:
				JCDebugRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CDebugRenderable(pList)
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
				void register_getMaterial_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaterial_void_callback = __method;
				}
				void register_getTechnique_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTechnique_void_callback = __method;
				}
				void register_getRenderOperation_CRenderOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderOperation_CRenderOperation_callback = __method;
				}
				void register_preRender_CSceneManager_CRenderSystem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRender_CSceneManager_CRenderSystem_callback = __method;
				}
				void register_postRender_CSceneManager_CRenderSystem_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRender_CSceneManager_CRenderSystem_callback = __method;
				}
				void register_getWorldTransforms_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldTransforms_CMatrix4_callback = __method;
				}
				void register_getNumWorldTransforms_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumWorldTransforms_void_callback = __method;
				}
				void register_getSquaredViewDepth_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSquaredViewDepth_CCamera_callback = __method;
				}
				void register_getLights_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLights_void_callback = __method;
				}
				void register_getCastsShadows_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCastsShadows_void_callback = __method;
				}
				void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback = __method;
				}
				void register_setPolygonModeOverrideable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolygonModeOverrideable_ev_bool_callback = __method;
				}
				void register_getPolygonModeOverrideable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPolygonModeOverrideable_void_callback = __method;
				}
				void register_setCustomAmbient_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCustomAmbient_CColourValue_callback = __method;
				}
				void register_getCustomAmbient_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAmbient_void_callback = __method;
				}
				void register_getCustomAmbientEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAmbientEnabled_void_callback = __method;
				}
				void register_setCustomAmbientEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCustomAmbientEnabled_ev_bool_callback = __method;
				}
				void register_getMovableObject_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMovableObject_void_callback = __method;
				}
				void register_addListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CRenderableListener_callback = __method;
				}
				void register_removeListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CRenderableListener_callback = __method;
				}
				void register_existListener_CRenderableListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_existListener_CRenderableListener_callback = __method;
				}
				void register_getListenerCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerCount_void_callback = __method;
				}
				void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListener_ev_uint32_callback = __method;
				}
				void register_getRenderSystemData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderSystemData_void_callback = __method;
				}
				void register_setRenderSystemData_CRenderSystemData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderSystemData_CRenderSystemData_callback = __method;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if (this->_gRef != NULL && this->m_getMaterial_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaterial_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CMaterialPtr &__values1 = *(const EarthView::World::Graphic::CMaterialPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getMaterial();
					}
				}
				virtual void getRenderOperation(EarthView::World::Graphic::CRenderOperation& op)
				{
					if (this->_gRef != NULL && this->m_getRenderOperation_CRenderOperation_callback != "" && this->isCustomExtend())
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
						jlong op_j = (jlong) &op;
						jmethodID __method = __gr->getMethod("getRenderOperation_CRenderOperation_callback");
						__env->CallVoidMethod(__obj, __method , op_j);
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
						return this->CDebugRenderable::getRenderOperation(op);
					}
				}
				virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if (this->_gRef != NULL && this->m_getWorldTransforms_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong xform_j = (jlong) xform;
						jmethodID __method = __gr->getMethod("getWorldTransforms_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , xform_j);
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
						return this->CDebugRenderable::getWorldTransforms(xform);
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
						return this->CDebugRenderable::getSquaredViewDepth(cam);
					}
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if (this->_gRef != NULL && this->m_getLights_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLights_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::LightList &__values1 = *(const EarthView::World::Graphic::LightList*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getLights();
					}
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if (this->_gRef != NULL && this->m_getTechnique_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTechnique_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTechnique *__values1 = (EarthView::World::Graphic::CTechnique*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getTechnique();
					}
				}
				virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if (this->_gRef != NULL && this->m_preRender_CSceneManager_CRenderSystem_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jmethodID __method = __gr->getMethod("preRender_CSceneManager_CRenderSystem_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sm_j, rsys_j);
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
						return this->CDebugRenderable::preRender(sm, rsys);
					}
				}
				virtual void postRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if (this->_gRef != NULL && this->m_postRender_CSceneManager_CRenderSystem_callback != "" && this->isCustomExtend())
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
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jmethodID __method = __gr->getMethod("postRender_CSceneManager_CRenderSystem_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, rsys_j);
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
						return this->CDebugRenderable::postRender(sm, rsys);
					}
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if (this->_gRef != NULL && this->m_getNumWorldTransforms_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumWorldTransforms_void_callback");
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
						return this->CDebugRenderable::getNumWorldTransforms();
					}
				}
				virtual ev_bool getCastsShadows() const
				{
					if (this->_gRef != NULL && this->m_getCastsShadows_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCastsShadows_void_callback");
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
						return this->CDebugRenderable::getCastsShadows();
					}
				}
				virtual void _updateCustomGpuParameter(const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if (this->_gRef != NULL && this->m__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback != "" && this->isCustomExtend())
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
						jlong constantEntry_j = (jlong) &constantEntry;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
						__env->CallVoidMethod(__obj, __method , constantEntry_j, params_j);
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
						return this->CDebugRenderable::_updateCustomGpuParameter(constantEntry, params);
					}
				}
				virtual void setPolygonModeOverrideable(ev_bool override)
				{
					if (this->_gRef != NULL && this->m_setPolygonModeOverrideable_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean override_j = (jboolean) override;
						jmethodID __method = __gr->getMethod("setPolygonModeOverrideable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , override_j);
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
						return this->CDebugRenderable::setPolygonModeOverrideable(override);
					}
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if (this->_gRef != NULL && this->m_getPolygonModeOverrideable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPolygonModeOverrideable_void_callback");
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
						return this->CDebugRenderable::getPolygonModeOverrideable();
					}
				}
				virtual void setCustomAmbient(const EarthView::World::Graphic::CColourValue& ambient)
				{
					if (this->_gRef != NULL && this->m_setCustomAmbient_CColourValue_callback != "" && this->isCustomExtend())
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
						jlong ambient_j = (jlong) &ambient;
						jmethodID __method = __gr->getMethod("setCustomAmbient_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , ambient_j);
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
						return this->CDebugRenderable::setCustomAmbient(ambient);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if (this->_gRef != NULL && this->m_getCustomAmbient_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCustomAmbient_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getCustomAmbient();
					}
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if (this->_gRef != NULL && this->m_getCustomAmbientEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCustomAmbientEnabled_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getCustomAmbientEnabled();
					}
				}
				virtual void setCustomAmbientEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setCustomAmbientEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setCustomAmbientEnabled_ev_bool_callback");
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
						return this->CDebugRenderable::setCustomAmbientEnabled(enabled);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if (this->_gRef != NULL && this->m_getMovableObject_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMovableObject_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
						return this->CDebugRenderable::getMovableObject();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if (this->_gRef != NULL && this->m_addListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jlong ref_listener_j = (jlong) ref_listener;
						jmethodID __method = __gr->getMethod("addListener_CRenderableListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
						return this->CDebugRenderable::addListener(ref_listener);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if (this->_gRef != NULL && this->m_removeListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeListener_CRenderableListener_callback");
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
						return this->CDebugRenderable::removeListener(listener);
					}
				}
				virtual ev_bool existListener(EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if (this->_gRef != NULL && this->m_existListener_CRenderableListener_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("existListener_CRenderableListener_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , listener_j);
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
						return this->CDebugRenderable::existListener(listener);
					}
				}
				virtual ev_uint32 getListenerCount() const
				{
					if (this->_gRef != NULL && this->m_getListenerCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
						return this->CDebugRenderable::getListenerCount();
					}
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(ev_uint32 index) const
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
						EarthView::World::Graphic::CRenderable::CRenderableListener *__values1 = (EarthView::World::Graphic::CRenderable::CRenderableListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getListener(index);
					}
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if (this->_gRef != NULL && this->m_getRenderSystemData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRenderSystemData_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderable::CRenderSystemData *__values1 = (EarthView::World::Graphic::CRenderable::CRenderSystemData*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDebugRenderable::getRenderSystemData();
					}
				}
				virtual void setRenderSystemData(EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if (this->_gRef != NULL && this->m_setRenderSystemData_CRenderSystemData_callback != "" && this->isCustomExtend())
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
						jlong ref_val_j = (jlong) ref_val;
						jmethodID __method = __gr->getMethod("setRenderSystemData_CRenderSystemData_callback");
						__env->CallVoidMethod(__obj, __method , ref_val_j);
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
						return this->CDebugRenderable::setRenderSystemData(ref_val);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDebugRenderableProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDebugRenderableProxy))
				{
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaterial_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaterial_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getRenderOperation_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDebugRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getRenderOperation(op);
				}
				else
				{
					pObjectX->getRenderOperation(op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getRenderOperation_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderOperation_CRenderOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderOperation_CRenderOperation_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getRenderOperation_1CRenderOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getRenderOperation(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDebugRenderableProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getWorldTransforms(xform);
				}
				else
				{
					pObjectX->getWorldTransforms(xform);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getWorldTransforms_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldTransforms_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldTransforms_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getWorldTransforms_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getWorldTransforms(xform);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getSquaredViewDepth_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDebugRenderableProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getSquaredViewDepth_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getSquaredViewDepth(cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDebugRenderableProxy))
				{
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getLights();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->getLights();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getLights_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLights_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLights_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_getLights_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::CNode::CDebugRenderable::getLights();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_setScaling_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble s_j)
			{
				Real s = (Real) s_j;
				EarthView::World::Graphic::CNode::CDebugRenderable *pObjectX = (EarthView::World::Graphic::CNode::CDebugRenderable*) pObjXXXX;
				pObjectX->setScaling(s);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getTechnique_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTechnique_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTechnique_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRender_CSceneManager_CRenderSystem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRender_CSceneManager_CRenderSystem_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRender_CSceneManager_CRenderSystem_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRender_CSceneManager_CRenderSystem_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getNumWorldTransforms_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumWorldTransforms_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumWorldTransforms_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getCastsShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCastsShadows_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCastsShadows_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1_1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolygonModeOverrideable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolygonModeOverrideable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getPolygonModeOverrideable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPolygonModeOverrideable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPolygonModeOverrideable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1setCustomAmbient_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCustomAmbient_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCustomAmbient_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getCustomAmbient_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAmbient_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAmbient_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getCustomAmbientEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAmbientEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAmbientEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1setCustomAmbientEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCustomAmbientEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCustomAmbientEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getMovableObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMovableObject_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMovableObject_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1addListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CRenderableListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1removeListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CRenderableListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1existListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_existListener_CRenderableListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"existListener_CRenderableListener_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1getRenderSystemData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderSystemData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderSystemData_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_00024DebugRenderable_register_1setRenderSystemData_1CRenderSystemData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDebugRenderableProxy *pObjectX = (JCDebugRenderableProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderSystemData_CRenderSystemData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderSystemData_CRenderSystemData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1updateFromParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_updateFromParent();
				}
				else
				{
					pObjectX->_updateFromParent();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1updateFromParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1updateFromParent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_updateFromParent();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setParent_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setParent(ref_parent);
				}
				else
				{
					pObjectX->setParent(ref_parent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setParent_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setParent_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::CNode *ref_parent = (EarthView::World::Graphic::CNode*) ref_parent_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setParent(ref_parent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_updateFromParentImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::updateFromParentImpl();
				}
				else
				{
					pObjectX->updateFromParentImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1updateFromParentImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_updateFromParentImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::updateFromParentImpl();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChildImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChildImpl();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChildImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChildImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChildImpl();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChildImpl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChildImpl(name);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChildImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChildImpl_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChildImpl(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_notifyMoved_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::notifyMoved();
				}
				else
				{
					pObjectX->notifyMoved();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1notifyMoved_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_notifyMoved_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::notifyMoved();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getParent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::getOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->getOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::getOrientation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setOrientation(q);
				}
				else
				{
					pObjectX->setOrientation(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setOrientation(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setOrientation(q, notify);
				}
				else
				{
					pObjectX->setOrientation(q, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1CQuaternion_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setOrientation(q, notify);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real w = (Real) w_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z);
				}
				else
				{
					pObjectX->setOrientation(w, x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setOrientation_1Real_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1Real_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real w = (Real) w_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1Real_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real w = (Real) w_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z, notify);
				}
				else
				{
					pObjectX->setOrientation(w, x, y, z, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setOrientation_1Real_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setOrientation_1Real_1Real_1Real_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real w = (Real) w_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setOrientation(w, x, y, z, notify);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_resetOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::resetOrientation();
				}
				else
				{
					pObjectX->resetOrientation();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1resetOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_resetOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::resetOrientation();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setPosition(pos);
				}
				else
				{
					pObjectX->setPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setPosition(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1CVector3_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setPosition(pos, notify);
				}
				else
				{
					pObjectX->setPosition(pos, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1CVector3_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setPosition(pos, notify);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setPosition(x, y, z);
				}
				else
				{
					pObjectX->setPosition(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setPosition_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setPosition(x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setPosition(x, y, z, notify);
				}
				else
				{
					pObjectX->setPosition(x, y, z, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setPosition_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setPosition_1Real_1Real_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setPosition(x, y, z, notify);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setScale(scale);
				}
				else
				{
					pObjectX->setScale(scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setScale(scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1CVector3_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setScale(scale, notify);
				}
				else
				{
					pObjectX->setScale(scale, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setScale_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1CVector3_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setScale(scale, notify);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setScale(x, y, z);
				}
				else
				{
					pObjectX->setScale(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setScale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setScale(x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setScale(x, y, z, notify);
				}
				else
				{
					pObjectX->setScale(x, y, z, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setScale_1Real_1Real_1Real_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setScale_1Real_1Real_1Real_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jboolean notify_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setScale(x, y, z, notify);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getScale();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInheritOrientation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setInheritOrientation(inherit);
				}
				else
				{
					pObjectX->setInheritOrientation(inherit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setInheritOrientation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInheritOrientation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setInheritOrientation(inherit);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_getInheritOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::getInheritOrientation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getInheritOrientation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getInheritOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_getInheritOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::getInheritOrientation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInheritScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setInheritScale(inherit);
				}
				else
				{
					pObjectX->setInheritScale(inherit);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setInheritScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInheritScale_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean inherit_j)
			{
				ev_bool inherit = (ev_bool) inherit_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setInheritScale(inherit);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_getInheritScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::getInheritScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getInheritScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getInheritScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_getInheritScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::getInheritScale();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_scale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::scale(scale);
				}
				else
				{
					pObjectX->scale(scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1scale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_scale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::scale(scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_scale_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::scale(x, y, z);
				}
				else
				{
					pObjectX->scale(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1scale_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_scale_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::scale(x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CVector3_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &d = *(EarthView::World::Spatial::Math::CVector3*) d_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(d, relativeTo);
				}
				else
				{
					pObjectX->translate(d, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CVector3_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &d = *(EarthView::World::Spatial::Math::CVector3*) d_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(d, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &d = *(EarthView::World::Spatial::Math::CVector3*) d_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(d);
				}
				else
				{
					pObjectX->translate(d);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &d = *(EarthView::World::Spatial::Math::CVector3*) d_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(d);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(x, y, z, relativeTo);
				}
				else
				{
					pObjectX->translate(x, y, z, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1Real_1Real_1Real_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(x, y, z, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(x, y, z);
				}
				else
				{
					pObjectX->translate(x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1CVector3_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jlong move_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				const EarthView::World::Spatial::Math::CVector3 &move = *(EarthView::World::Spatial::Math::CVector3*) move_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(axes, move, relativeTo);
				}
				else
				{
					pObjectX->translate(axes, move, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CMatrix3_1CVector3_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1CVector3_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jlong move_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				const EarthView::World::Spatial::Math::CVector3 &move = *(EarthView::World::Spatial::Math::CVector3*) move_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(axes, move, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jlong move_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				const EarthView::World::Spatial::Math::CVector3 &move = *(EarthView::World::Spatial::Math::CVector3*) move_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(axes, move);
				}
				else
				{
					pObjectX->translate(axes, move);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CMatrix3_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jlong move_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				const EarthView::World::Spatial::Math::CVector3 &move = *(EarthView::World::Spatial::Math::CVector3*) move_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(axes, move);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(axes, x, y, z, relativeTo);
				}
				else
				{
					pObjectX->translate(axes, x, y, z, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CMatrix3_1Real_1Real_1Real_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1Real_1Real_1Real_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jdouble x_j, jdouble y_j, jdouble z_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(axes, x, y, z, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::translate(axes, x, y, z);
				}
				else
				{
					pObjectX->translate(axes, x, y, z);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1translate_1CMatrix3_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_translate_1CMatrix3_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axes_j, jdouble x_j, jdouble y_j, jdouble z_j)
			{
				const EarthView::World::Spatial::Math::CMatrix3 &axes = *(EarthView::World::Spatial::Math::CMatrix3*) axes_j;
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				Real z = (Real) z_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::translate(axes, x, y, z);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_roll_1CRadian_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::roll(angle, relativeTo);
				}
				else
				{
					pObjectX->roll(angle, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1roll_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_roll_1CRadian_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::roll(angle, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_roll_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::roll(angle);
				}
				else
				{
					pObjectX->roll(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1roll_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_roll_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::roll(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_pitch_1CRadian_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::pitch(angle, relativeTo);
				}
				else
				{
					pObjectX->pitch(angle, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1pitch_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_pitch_1CRadian_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::pitch(angle, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_pitch_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::pitch(angle);
				}
				else
				{
					pObjectX->pitch(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1pitch_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_pitch_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::pitch(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_yaw_1CRadian_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::yaw(angle, relativeTo);
				}
				else
				{
					pObjectX->yaw(angle, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1yaw_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_yaw_1CRadian_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::yaw(angle, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_yaw_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::yaw(angle);
				}
				else
				{
					pObjectX->yaw(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1yaw_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_yaw_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::yaw(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CVector3_1CRadian_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axis_j, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &axis = *(EarthView::World::Spatial::Math::CVector3*) axis_j;
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::rotate(axis, angle, relativeTo);
				}
				else
				{
					pObjectX->rotate(axis, angle, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1rotate_1CVector3_1CRadian_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CVector3_1CRadian_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axis_j, jlong angle_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &axis = *(EarthView::World::Spatial::Math::CVector3*) axis_j;
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::rotate(axis, angle, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CVector3_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axis_j, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &axis = *(EarthView::World::Spatial::Math::CVector3*) axis_j;
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::rotate(axis, angle);
				}
				else
				{
					pObjectX->rotate(axis, angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1rotate_1CVector3_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CVector3_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong axis_j, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &axis = *(EarthView::World::Spatial::Math::CVector3*) axis_j;
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::rotate(axis, angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CQuaternion_1TransformSpace(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::rotate(q, relativeTo);
				}
				else
				{
					pObjectX->rotate(q, relativeTo);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1rotate_1CQuaternion_1TransformSpace(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CQuaternion_1TransformSpace_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jint relativeTo_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode::TransformSpace relativeTo = (EarthView::World::Graphic::CNode::TransformSpace) relativeTo_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::rotate(q, relativeTo);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::rotate(q);
				}
				else
				{
					pObjectX->rotate(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1rotate_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_rotate_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::rotate(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setMatrix(mat);
				}
				else
				{
					pObjectX->setMatrix(mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setMatrix(mat);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CNode::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CNode::getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setLocalMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setLocalMatrix(mat);
				}
				else
				{
					pObjectX->setLocalMatrix(mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setLocalMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setLocalMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setLocalMatrix(mat);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getLocalMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CNode::getLocalMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getLocalMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getLocalMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getLocalMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CNode::getLocalMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getLocalAxes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->EarthView::World::Graphic::CNode::getLocalAxes();
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->getLocalAxes();
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getLocalAxes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getLocalAxes_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->EarthView::World::Graphic::CNode::getLocalAxes();
				EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j, jlong rotate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild(translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j, jlong rotate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				const EarthView::World::Spatial::Math::CQuaternion &rotate = *(EarthView::World::Spatial::Math::CQuaternion*) rotate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(translate, rotate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild(translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translate_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(translate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j, jlong rotate_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name, translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild(name, translate, rotate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1EVString_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j, jlong rotate_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name, translate, rotate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name, translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild(name, translate);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1EVString_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong translate_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name, translate);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->createChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1createChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_createChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::createChild(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_addChild_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::addChild(ref_child);
				}
				else
				{
					pObjectX->addChild(ref_child);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1addChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_addChild_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::addChild(ref_child);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Node_numChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CNode::numChildren();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->numChildren();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1numChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Node_numChildren_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CNode::numChildren();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChild_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChild_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getChild(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::getChild(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_existChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::existChild(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->existChild(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1existChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_existChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNode::existChild(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChildIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode::ChildNodeIterator __values1 = pObjectX->EarthView::World::Graphic::CNode::getChildIterator();
					EarthView::World::Graphic::CNode::ChildNodeIterator *returnvalues = new EarthView::World::Graphic::CNode::ChildNodeIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode::ChildNodeIterator __values1 = pObjectX->getChildIterator();
					EarthView::World::Graphic::CNode::ChildNodeIterator *returnvalues = new EarthView::World::Graphic::CNode::ChildNodeIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getChildIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getChildIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode::ChildNodeIterator __values1 = pObjectX->EarthView::World::Graphic::CNode::getChildIterator();
				EarthView::World::Graphic::CNode::ChildNodeIterator *returnvalues = new EarthView::World::Graphic::CNode::ChildNodeIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->removeChild(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong child_j)
			{
				EarthView::World::Graphic::CNode *child = (EarthView::World::Graphic::CNode*) child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(child);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->removeChild(child);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeChild_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong child_j)
			{
				EarthView::World::Graphic::CNode *child = (EarthView::World::Graphic::CNode*) child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(child);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->removeChild(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_removeChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNode::removeChild(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAllChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::removeAllChildren();
				}
				else
				{
					pObjectX->removeAllChildren();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAllChildren_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::removeAllChildren();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_setDerivedPosition(pos);
				}
				else
				{
					pObjectX->_setDerivedPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1setDerivedPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_setDerivedPosition(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedPosition_1CVector3_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_setDerivedPosition(pos, notify);
				}
				else
				{
					pObjectX->_setDerivedPosition(pos, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1setDerivedPosition_1CVector3_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedPosition_1CVector3_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_setDerivedPosition(pos, notify);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_setDerivedOrientation(q);
				}
				else
				{
					pObjectX->_setDerivedOrientation(q);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1setDerivedOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_setDerivedOrientation(q);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_setDerivedOrientation(q, notify);
				}
				else
				{
					pObjectX->_setDerivedOrientation(q, notify);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1setDerivedOrientation_1CQuaternion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1setDerivedOrientation_1CQuaternion_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jboolean notify_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				ev_bool notify = (ev_bool) notify_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_setDerivedOrientation(q, notify);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->_getDerivedOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1getDerivedOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedOrientation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->_getDerivedPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1getDerivedPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->_getDerivedScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1getDerivedScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getDerivedScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getDerivedScale();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getFullTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getFullTransform();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1getFullTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node__1getFullTransform_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CNode::_getFullTransform();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1update_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateChildren_j, jboolean parentHasChanged_j)
			{
				ev_bool updateChildren = (ev_bool) updateChildren_j;
				ev_bool parentHasChanged = (ev_bool) parentHasChanged_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::_update(updateChildren, parentHasChanged);
				}
				else
				{
					pObjectX->_update(updateChildren, parentHasChanged);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1_1update_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node__1update_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateChildren_j, jboolean parentHasChanged_j)
			{
				ev_bool updateChildren = (ev_bool) updateChildren_j;
				ev_bool parentHasChanged = (ev_bool) parentHasChanged_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::_update(updateChildren, parentHasChanged);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_addListener_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CNode::CNodeListener *listener = (EarthView::World::Graphic::CNode::CNodeListener*) listener_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::addListener(listener);
				}
				else
				{
					pObjectX->addListener(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1addListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_addListener_1CNodeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CNode::CNodeListener *listener = (EarthView::World::Graphic::CNode::CNodeListener*) listener_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::addListener(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeListener_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CNode::CNodeListener *listener = (EarthView::World::Graphic::CNode::CNodeListener*) listener_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::removeListener(listener);
				}
				else
				{
					pObjectX->removeListener(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeListener_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeListener_1CNodeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CNode::CNodeListener *listener = (EarthView::World::Graphic::CNode::CNodeListener*) listener_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::removeListener(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode::CNodeListener* __values1 = pObjectX->EarthView::World::Graphic::CNode::getListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode::CNodeListener* __values1 = pObjectX->getListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getListener_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode::CNodeListener* __values1 = pObjectX->EarthView::World::Graphic::CNode::getListener(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getNumListener_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CNode::getNumListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getNumListener(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getNumListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getNumListener_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CNode::getNumListener(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInitialState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::setInitialState();
				}
				else
				{
					pObjectX->setInitialState();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1setInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setInitialState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::setInitialState();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_resetToInitialState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::resetToInitialState();
				}
				else
				{
					pObjectX->resetToInitialState();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1resetToInitialState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_resetToInitialState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::resetToInitialState();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getInitialPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getInitialPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertWorldToLocalPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldPos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &worldPos = *(EarthView::World::Spatial::Math::CVector3*) worldPos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CNode::convertWorldToLocalPosition(worldPos);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->convertWorldToLocalPosition(worldPos);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1convertWorldToLocalPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertWorldToLocalPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldPos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &worldPos = *(EarthView::World::Spatial::Math::CVector3*) worldPos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CNode::convertWorldToLocalPosition(worldPos);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertLocalToWorldPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localPos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &localPos = *(EarthView::World::Spatial::Math::CVector3*) localPos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CNode::convertLocalToWorldPosition(localPos);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->convertLocalToWorldPosition(localPos);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1convertLocalToWorldPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertLocalToWorldPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localPos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &localPos = *(EarthView::World::Spatial::Math::CVector3*) localPos_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CNode::convertLocalToWorldPosition(localPos);
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertWorldToLocalOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldOrientation_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &worldOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) worldOrientation_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Graphic::CNode::convertWorldToLocalOrientation(worldOrientation);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->convertWorldToLocalOrientation(worldOrientation);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1convertWorldToLocalOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertWorldToLocalOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong worldOrientation_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &worldOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) worldOrientation_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Graphic::CNode::convertWorldToLocalOrientation(worldOrientation);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertLocalToWorldOrientation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localOrientation_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Graphic::CNode::convertLocalToWorldOrientation(localOrientation);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->convertLocalToWorldOrientation(localOrientation);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1convertLocalToWorldOrientation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_convertLocalToWorldOrientation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localOrientation_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->EarthView::World::Graphic::CNode::convertLocalToWorldOrientation(localOrientation);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->getInitialOrientation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getInitialOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialOrientation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getInitialScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getInitialScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getInitialScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CNode::getInitialScale();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Node_getSquaredViewDepth_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CNode::getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSquaredViewDepth(cam);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Node_getSquaredViewDepth_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CNode::getSquaredViewDepth(cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_needUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceParentUpdate_j)
			{
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::needUpdate(forceParentUpdate);
				}
				else
				{
					pObjectX->needUpdate(forceParentUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1needUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_needUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceParentUpdate_j)
			{
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::needUpdate(forceParentUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_needUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::needUpdate();
				}
				else
				{
					pObjectX->needUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1needUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_needUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::needUpdate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_requestUpdate_1CNode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j, jboolean forceParentUpdate_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::requestUpdate(ref_child, forceParentUpdate);
				}
				else
				{
					pObjectX->requestUpdate(ref_child, forceParentUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1requestUpdate_1CNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_requestUpdate_1CNode_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j, jboolean forceParentUpdate_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				ev_bool forceParentUpdate = (ev_bool) forceParentUpdate_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::requestUpdate(ref_child, forceParentUpdate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_requestUpdate_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::requestUpdate(ref_child);
				}
				else
				{
					pObjectX->requestUpdate(ref_child);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1requestUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_requestUpdate_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_child_j)
			{
				EarthView::World::Graphic::CNode *ref_child = (EarthView::World::Graphic::CNode*) ref_child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::requestUpdate(ref_child);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_cancelUpdate_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong child_j)
			{
				EarthView::World::Graphic::CNode *child = (EarthView::World::Graphic::CNode*) child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::cancelUpdate(child);
				}
				else
				{
					pObjectX->cancelUpdate(child);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1cancelUpdate_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_cancelUpdate_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong child_j)
			{
				EarthView::World::Graphic::CNode *child = (EarthView::World::Graphic::CNode*) child_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::cancelUpdate(child);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getDebugRenderable_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scaling_j)
			{
				Real scaling = (Real) scaling_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->EarthView::World::Graphic::CNode::getDebugRenderable(scaling);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->getDebugRenderable(scaling);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getDebugRenderable_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getDebugRenderable_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scaling_j)
			{
				Real scaling = (Real) scaling_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CNode::CDebugRenderable* __values1 = pObjectX->EarthView::World::Graphic::CNode::getDebugRenderable(scaling);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_queueNeedUpdate_1CNode(JNIEnv *__env , jclass __clazz, jlong ref_n_j)
			{
				EarthView::World::Graphic::CNode *ref_n = (EarthView::World::Graphic::CNode*) ref_n_j;
				EarthView::World::Graphic::CNode::queueNeedUpdate(ref_n);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_processQueuedUpdates_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CNode::processQueuedUpdates();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getUserObjectBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CUserObjectBindings& __values1 = pObjectX->getUserObjectBindings();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_attachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::attachObject(obj);
				}
				else
				{
					pObjectX->attachObject(obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1attachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_attachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::attachObject(obj);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Node_numAttachedObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CNode::numAttachedObjects();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1numAttachedObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Node_numAttachedObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CNode::numAttachedObjects();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getAttachedObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::getAttachedObject(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getAttachedObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getAttachedObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::getAttachedObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getAttachedObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::getAttachedObject(name);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1getAttachedObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_getAttachedObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::getAttachedObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_detachObject_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::detachObject(index);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1detachObject_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_detachObject_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::detachObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_detachObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::detachObject(obj);
				}
				else
				{
					pObjectX->detachObject(obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1detachObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_detachObject_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::detachObject(obj);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_detachObject_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::detachObject(name);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1detachObject_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Node_detachObject_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CNode::detachObject(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_detachAllObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::detachAllObjects();
				}
				else
				{
					pObjectX->detachAllObjects();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1detachAllObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_detachAllObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::detachAllObjects();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyChild(name);
				}
				else
				{
					pObjectX->removeAndDestroyChild(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeAndDestroyChild_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyChild_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyChild(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyChild_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyChild(index);
				}
				else
				{
					pObjectX->removeAndDestroyChild(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeAndDestroyChild_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyChild_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyChild(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyAllChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeProxy))
				{
					pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyAllChildren();
				}
				else
				{
					pObjectX->removeAndDestroyAllChildren();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_register_1removeAndDestroyAllChildren_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeProxy *pObjectX = (JCNodeProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_removeAndDestroyAllChildren_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNode::removeAndDestroyAllChildren();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_focusByCamera_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean focused_j)
			{
				ev_bool focused = (ev_bool) focused_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->focusByCamera(focused);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_isFocusedByCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->isFocusedByCamera();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Node_setIsXSpecialVersionBoneNode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isXSpecialVer_j)
			{
				ev_bool isXSpecialVer = (ev_bool) isXSpecialVer_j;
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				pObjectX->setIsXSpecialVersionBoneNode(isXSpecialVer);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Node_isXSpecialVersionBoneNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNode *pObjectX = (EarthView::World::Graphic::CNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->isXSpecialVersionBoneNode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
