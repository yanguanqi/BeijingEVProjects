/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectlayereditor.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setRedoPos_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				EarthView::World::Spatial::Math::CVector3 pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setRedoPos(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getRedoPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getRedoPos();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setRedoScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setRedoScale(scale);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getRedoScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getRedoScale();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setRedoQua_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong qua_j)
			{
				EarthView::World::Spatial::Math::CQuaternion qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setRedoQua(qua);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getRedoQua_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getRedoQua();
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setUndoPos_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				EarthView::World::Spatial::Math::CVector3 pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setUndoPos(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getUndoPos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getUndoPos();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setUndoScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setUndoScale(scale);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getUndoScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getUndoScale();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setUndoQua_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong qua_j)
			{
				EarthView::World::Spatial::Math::CQuaternion qua = *(EarthView::World::Spatial::Math::CQuaternion*) qua_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setUndoQua(qua);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getUndoQua_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getUndoQua();
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_setEffectId_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectId_j)
			{
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				pObjectX->setEffectId(effectId);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_CmdDataEffect_getEffectId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CCmdDataEffect *pObjectX = (EarthView::World::Spatial3D::CCmdDataEffect*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getEffectId();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCEffectLayerEditorProxy : public EarthView::World::Spatial3D::CEffectLayerEditor
			{
			 private:
				EarthView::World::Core::ev_string m_setEditingLayer_IGlobeLayer_callback;
				EarthView::World::Core::ev_string m_getEditingLayer_void_callback;
				EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_saveEditing_void_callback;
				EarthView::World::Core::ev_string m_isEditing_void_callback;
				EarthView::World::Core::ev_string m_redo_void_callback;
				EarthView::World::Core::ev_string m_undo_void_callback;
				EarthView::World::Core::ev_string m_canRedo_void_callback;
				EarthView::World::Core::ev_string m_canUndo_void_callback;
				EarthView::World::Core::ev_string m_addLayerObject_ev_uint32_CMatrix4_callback;
				EarthView::World::Core::ev_string m_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback;
				EarthView::World::Core::ev_string m_deleteLayerObject_ev_uint32_callback;
				EarthView::World::Core::ev_string m_addListener_CLayer3DEditorListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CLayer3DEditorListener_callback;
				EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getNumListener_void_callback;
			public:
				JCEffectLayerEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectLayerEditor(pList)
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
				void register_setEditingLayer_IGlobeLayer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEditingLayer_IGlobeLayer_callback = __method;
				}
				void register_getEditingLayer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEditingLayer_void_callback = __method;
				}
				void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startEditing_ev_bool_callback = __method;
				}
				void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_stopEditing_ev_bool_callback = __method;
				}
				void register_saveEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEditing_void_callback = __method;
				}
				void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEditing_void_callback = __method;
				}
				void register_redo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_redo_void_callback = __method;
				}
				void register_undo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_undo_void_callback = __method;
				}
				void register_canRedo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canRedo_void_callback = __method;
				}
				void register_canUndo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canUndo_void_callback = __method;
				}
				void register_addLayerObject_ev_uint32_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLayerObject_ev_uint32_CMatrix4_callback = __method;
				}
				void register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback = __method;
				}
				void register_deleteLayerObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteLayerObject_ev_uint32_callback = __method;
				}
				void register_addListener_CLayer3DEditorListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CLayer3DEditorListener_callback = __method;
				}
				void register_removeListener_CLayer3DEditorListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CLayer3DEditorListener_callback = __method;
				}
				void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListener_ev_uint32_callback = __method;
				}
				void register_getNumListener_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumListener_void_callback = __method;
				}
				virtual void saveEditing()
				{
					if (this->_gRef != NULL && this->m_saveEditing_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("saveEditing_void_callback");
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
						return this->CEffectLayerEditor::saveEditing();
					}
				}
				virtual ev_bool startEditing(ev_bool withUndo)
				{
					if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean withUndo_j = (jboolean) withUndo;
						jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
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
						return this->CEffectLayerEditor::startEditing(withUndo);
					}
				}
				virtual void stopEditing(ev_bool isSave)
				{
					if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean isSave_j = (jboolean) isSave;
						jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , isSave_j);
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
						return this->CEffectLayerEditor::stopEditing(isSave);
					}
				}
				virtual ev_uint32 addLayerObject(ev_uint32 id, const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if (this->_gRef != NULL && this->m_addLayerObject_ev_uint32_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong id_j = (jlong) id;
						jlong matrix_j = (jlong) &matrix;
						jmethodID __method = __gr->getMethod("addLayerObject_ev_uint32_CMatrix4_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j, matrix_j);
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
						return this->CEffectLayerEditor::addLayerObject(id, matrix);
					}
				}
				virtual ev_bool changeObjectPosition(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, const EarthView::World::Spatial::Math::CMatrix4& nwMatrix)
				{
					if (this->_gRef != NULL && this->m_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong objPtr_j = (jlong) &objPtr;
						jlong nwMatrix_j = (jlong) &nwMatrix;
						jmethodID __method = __gr->getMethod("changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objPtr_j, nwMatrix_j);
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
						return this->CEffectLayerEditor::changeObjectPosition(objPtr, nwMatrix);
					}
				}
				virtual ev_bool deleteLayerObject(ev_uint32 objId)
				{
					if (this->_gRef != NULL && this->m_deleteLayerObject_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong objId_j = (jlong) objId;
						jmethodID __method = __gr->getMethod("deleteLayerObject_ev_uint32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objId_j);
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
						return this->CEffectLayerEditor::deleteLayerObject(objId);
					}
				}
				virtual void setEditingLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if (this->_gRef != NULL && this->m_setEditingLayer_IGlobeLayer_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_layer_j = (jlong) ref_layer;
						jmethodID __method = __gr->getMethod("setEditingLayer_IGlobeLayer_callback");
						__env->CallVoidMethod(__obj, __method , ref_layer_j);
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
						return this->CEffectLayerEditor::setEditingLayer(ref_layer);
					}
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if (this->_gRef != NULL && this->m_getEditingLayer_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getEditingLayer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEffectLayerEditor::getEditingLayer();
					}
				}
				virtual ev_bool isEditing()
				{
					if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
						return this->CEffectLayerEditor::isEditing();
					}
				}
				virtual ev_bool redo()
				{
					if (this->_gRef != NULL && this->m_redo_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("redo_void_callback");
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
						return this->CEffectLayerEditor::redo();
					}
				}
				virtual ev_bool undo()
				{
					if (this->_gRef != NULL && this->m_undo_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("undo_void_callback");
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
						return this->CEffectLayerEditor::undo();
					}
				}
				virtual ev_bool canRedo()
				{
					if (this->_gRef != NULL && this->m_canRedo_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("canRedo_void_callback");
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
						return this->CEffectLayerEditor::canRedo();
					}
				}
				virtual ev_bool canUndo()
				{
					if (this->_gRef != NULL && this->m_canUndo_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("canUndo_void_callback");
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
						return this->CEffectLayerEditor::canUndo();
					}
				}
				virtual void addListener(EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if (this->_gRef != NULL && this->m_addListener_CLayer3DEditorListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("addListener_CLayer3DEditorListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
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
						return this->CEffectLayerEditor::addListener(lis);
					}
				}
				virtual void removeListener(EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if (this->_gRef != NULL && this->m_removeListener_CLayer3DEditorListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("removeListener_CLayer3DEditorListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
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
						return this->CEffectLayerEditor::removeListener(lis);
					}
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(ev_uint32 index)
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
						EarthView::World::Spatial3D::CLayer3DEditorListener *__values1 = (EarthView::World::Spatial3D::CLayer3DEditorListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEffectLayerEditor::getListener(index);
					}
				}
				virtual ev_uint32 getNumListener()
				{
					if (this->_gRef != NULL && this->m_getNumListener_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumListener_void_callback");
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
						return this->CEffectLayerEditor::getNumListener();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEffectLayerEditorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_saveEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::saveEditing();
				}
				else
				{
					pObjectX->saveEditing();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1saveEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEditing_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_saveEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::saveEditing();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
			{
				ev_bool withUndo = (ev_bool) withUndo_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
			{
				ev_bool withUndo = (ev_bool) withUndo_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::startEditing(withUndo);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
			{
				ev_bool isSave = (ev_bool) isSave_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::stopEditing(isSave);
				}
				else
				{
					pObjectX->stopEditing(isSave);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_stopEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
			{
				ev_bool isSave = (ev_bool) isSave_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::stopEditing(isSave);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_addLayerObject_1ev_1uint32_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong matrix_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::addLayerObject(id, matrix);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->addLayerObject(id, matrix);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1addLayerObject_1ev_1uint32_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLayerObject_ev_uint32_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLayerObject_ev_uint32_CMatrix4_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_addLayerObject_1ev_1uint32_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong matrix_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::addLayerObject(id, matrix);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_changeObjectPosition_1CVisibleObjectPtr_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objPtr_j, jlong nwMatrix_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectPtr &objPtr = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) objPtr_j;
				const EarthView::World::Spatial::Math::CMatrix4 &nwMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) nwMatrix_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::changeObjectPosition(objPtr, nwMatrix);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->changeObjectPosition(objPtr, nwMatrix);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1changeObjectPosition_1CVisibleObjectPtr_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_changeObjectPosition_1CVisibleObjectPtr_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objPtr_j, jlong nwMatrix_j)
			{
				EarthView::World::Geometry3D::CVisibleObjectPtr &objPtr = *(EarthView::World::Geometry3D::CVisibleObjectPtr*) objPtr_j;
				const EarthView::World::Spatial::Math::CMatrix4 &nwMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) nwMatrix_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::changeObjectPosition(objPtr, nwMatrix);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_deleteLayerObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objId_j)
			{
				ev_uint32 objId = (ev_uint32) objId_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::deleteLayerObject(objId);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->deleteLayerObject(objId);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1deleteLayerObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteLayerObject_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteLayerObject_ev_uint32_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_deleteLayerObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objId_j)
			{
				ev_uint32 objId = (ev_uint32) objId_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEffectLayerEditor::deleteLayerObject(objId);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_setSelectedObject_1CEffectObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_obj_j)
			{
				EarthView::World::Spatial3D::EffectManager::CEffectObject *ref_obj = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) ref_obj_j;
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				pObjectX->setSelectedObject(ref_obj);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_getSelectedObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEffectLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEffectLayerEditor*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffectObject* __values1 = pObjectX->getSelectedObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1setEditingLayer_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEditingLayer_IGlobeLayer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEditingLayer_IGlobeLayer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1getEditingLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEditingLayer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEditingLayer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1redo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_redo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"redo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1undo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_undo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"undo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1canRedo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canRedo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canRedo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1canUndo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canUndo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canUndo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1addListener_1CLayer3DEditorListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CLayer3DEditorListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CLayer3DEditorListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1removeListener_1CLayer3DEditorListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CLayer3DEditorListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CLayer3DEditorListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_EffectLayerEditor_register_1getNumListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectLayerEditorProxy *pObjectX = (JCEffectLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumListener_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumListener_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
