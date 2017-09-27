/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/dataeditor.h"
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
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JCDataEditorProxy : public EarthView::World::Spatial2D::Controls::CDataEditor
				{
				 private:
					EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
				public:
					JCDataEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataEditor(pList)
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
					void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
					}
					virtual ev_bool onKeyDown(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyDown_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyDown_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->CDataEditor::onKeyDown(keyCode, shift);
						}
					}
					virtual ev_bool onKeyUp(ev_int32 keyCode, ev_int32 shift)
					{
						if (this->_gRef != NULL && this->m_onKeyUp_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint keyCode_j = (jint) keyCode;
							jint shift_j = (jint) shift;
							jmethodID __method = __gr->getMethod("onKeyUp_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
							return this->CDataEditor::onKeyUp(keyCode, shift);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataEditorProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_parent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* __values1 = pObjectX->parent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_startEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_bool __values1 = pObjectX->startEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_bool __values1 = pObjectX->isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_stopEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					pObjectX->stopEditing();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_hasEdits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasEdits();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_saveEdits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					pObjectX->saveEdits();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getMapSnapper_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CMapSnapper* __values1 = pObjectX->getMapSnapper();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getEditingLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getEditingLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getVectorLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IVectorLayer* __values1 = pObjectX->getVectorLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getFeatureClass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* __values1 = pObjectX->getFeatureClass();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_setEditingLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					pObjectX->setEditingLayer(ref_layer);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getCurrentTask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditTask* __values1 = pObjectX->getCurrentTask();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_setCurrentTask_1CEditTask(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_task_j)
				{
					EarthView::World::Spatial2D::Controls::CEditTask *ref_task = (EarthView::World::Spatial2D::Controls::CEditTask*) ref_task_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					pObjectX->setCurrentTask(ref_task);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getTaskCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTaskCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getTask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditTask* __values1 = pObjectX->getTask(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getGeometryEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CGeometryEditor* __values1 = pObjectX->getGeometryEditor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getSelectedCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getSelectedCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_deleteSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					pObjectX->deleteSelected();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_getOperationManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::COperationManager* __values1 = pObjectX->getOperationManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataEditorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyDown(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataEditorProxy *pObjectX = (JCDataEditorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyDown_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDown_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_onKeyDown_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyDown(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataEditorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onKeyUp(keyCode, shift);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataEditorProxy *pObjectX = (JCDataEditorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onKeyUp_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUp_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_DataEditor_onKeyUp_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial2D::Controls::CDataEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CDataEditor*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CDataEditor::onKeyUp(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
